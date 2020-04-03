#include "pch.h"
// dllmain.cpp : Defines the entry point for the DLL application.

#pragma comment(lib, "detours.lib")

#include "detours.h"
#include "PEModule.h"
#include "common.h"
#include "dllmain.h"

#include <string>
#include <functional>
#include <iostream>
#include <unordered_map>
#include <fstream>
#include <utility>
#include <chrono>
#include <ctime>


enum Flags { Save, Ore };


//--------------------------Common Function Types--------------------------
typedef int (*_INTFUNC)();
typedef void (*UNUSED)(); //If you don't ever wanna call the function (e.g. while no-opping it), you don't need to know its signature.

typedef void (*MEMBER_FUNCTION)(__int64 thisPtr);
typedef int (*GET_INT_FUN)(__int64 thisPtr);
typedef void (*SET_INT_FUN)(__int64 thisPtr, int value);
typedef void (*SET_FLOAT_FUN)(__int64 thisPtr, float value);
typedef unsigned __int8 (*GET_ENUM_FUN)(__int64 thisPtr); //*most* enums are 1byte. Notable exception: EquipmentType
typedef void (*SET_ENUM_FUN)(__int64 thisPtr, unsigned __int8 value);
typedef __int64 (*GET_PTR_FUN)(__int64 thisPtr);
typedef void (*PICKUP_FUN)(__int64 thisPtr, __int64 pickupPtr);
typedef bool (*GET_BOOL_FUN)(__int64 thisPtr);

typedef int (*SCALE_INT_FUN)(__int64 thisPtr, int value);
typedef bool (*VALIDATOR)(__int64 thisPtr, __int64 contextPtr);
typedef __int64 (*MAPPING_FUN)(__int64 thisPtr, __int64 keyPtr);

typedef __int64 (*SET_AND_RETURN_ENUM_FUN)(__int64 thisPtr, unsigned __int8 value);
typedef __int64 (*ADD_SHARD_SIG)(__int64 thisPtr, unsigned __int8 value);
typedef __int64 (*SUB_182C8D3A0_DICT_SIG)(__int64 thisPtr, unsigned __int8 value, __int64 something);
typedef __int64 (*ADDSPELLTOINV)(__int64 thisPtr, unsigned int equipmentType, bool adding);
typedef bool (*HAS_SHARD)(__int64 thisPtr, unsigned __int8 shardType);

//---------------------------------------------------Globals-----------------------------------------------------
bool lock = false; //TODO: split into vars with reasonable name
bool weaponmasterPurchaseInProgress = false;
char foundTree = -1;
char priorFoundTree = -1;
bool foundTreeFulfilled = false;

__int64 lastDesiredState = NULL;
__int64 priorDesiredState = NULL;
__int64 lastSeinLevel;
__int64 lastHealthController;
__int64 lastSeinPickupProcessor;
void* gameControllerInstancePointer = NULL;

bool debug = false;
bool info = true;

InjectDLL::PEModule* CSharpLib = NULL;
std::string logFilePath = "C:\\moon\\inject_log.txt"; // change this if you need to
std::ofstream logfile;
#define DEBUG(message) \
    if (debug) { \
	    logfile.open(logFilePath, std::ios_base::app); \
	    logfile << "[" << pretty_time()  << "] (DEBUG): " << message << std::endl; \
	    logfile.close(); \
    }

#define LOG(message) \
    if (info) { \
	    logfile.open(logFilePath, std::ios_base::app); \
	    logfile << "[" << pretty_time() << "] (INFO): " << message << std::endl; \
	    logfile.close(); \
    }

//-------------------------------------------Magic Convenience Macro----------------------------------------------

intercept* lastIntercept = 0;

struct intercept
{
	intercept(__int64 o, PVOID* oP, PVOID iP, std::string s) : name(std::move(s)), offset(o), originalPointer(oP),
	                                                           interceptPointer(iP)
	{
		prev = lastIntercept;
		lastIntercept = this;
	}

	std::string name;
	__int64 offset;
	PVOID* originalPointer;
	PVOID interceptPointer;
	intercept* prev;
};

#define concat_(a, b) a ## b
#define concat(a, b) concat_(a, b)
#define INTERCEPT(address, type, returnType, name, ...) \
	type name; \
	returnType name##Intercept __VA_ARGS__ \
	intercept binding_##name (address, &(PVOID&) name, name##Intercept, #name);
#define BINDING2(address, returnType, name, ...) \
	returnType (*name)(__VA_ARGS__); \
	intercept binding_##name (address, &(PVOID&) name, 0, #name);
#define BINDING(address, type, name) \
	type name; \
	intercept binding_##name (address, &(PVOID&) name, 0, #name);
#define LOCK(value) if(lock) {return value;};

//---------------------------------------------------------Intercepts----------------------------------------------------------

#define OFFSET_BASE 0x180000000
BINDING(0x5C06C0, MEMBER_FUNCTION, createCheckpoint) //GameController::createCheckpoint

BINDING(0x6CD3E0, SET_AND_RETURN_ENUM_FUN, getAreaFromId) //GameWorld::GetArea
BINDING(0x6CB6B0, MAPPING_FUN, getRuntimeArea) //GameWorld::FindRuntimeArea
BINDING(0x1310650, MEMBER_FUNCTION, discoverAllAreas) //RuntimeGameWorldArea::DiscoverAllAreas

__int64 gameWorldInstance;
INTERCEPT(0x6CB7F0, MEMBER_FUNCTION, void, gameWorldAwake, (__int64 thisPtr){
    if(gameWorldInstance != thisPtr) {
        log("Found GameWorld instance!");
        gameWorldInstance = thisPtr;
    }
    gameWorldAwake(thisPtr);
});

//INTERCEPT(0x130D570, GET_BOOL_FUN, bool, isAreaDiscovered, (__int64 thisPtr) { return true; })

INTERCEPT(0x13DC220, UNUSED, __int64, showAbilityMessage, (__int64 a, __int64 b, __int64 c){
    //MessageControllerB::ShowAbilityMessage
    return 0;
});

INTERCEPT(0x13DC770, UNUSED, __int64, showShardMessage, (__int64 a, __int64 b, char c){
          //MessageControllerB::ShowShardMessage
          return 0;
});
INTERCEPT(0x13E02D0, UNUSED, __int64, showSpiritTreeTextMessage, (__int64 a, __int64 b){
          //MessageControllerB::ShowSpiritTreeTextMessage
          return 0;
          });

INTERCEPT(0x5D2310, UNUSED, void, performPickupSequence, (__int64 thisPtr, __int64 info){
          //SeinPickupProcessor::PerformPickupSequence
          //noping this removes all pickup animations
          });

INTERCEPT(0x13DC460, UNUSED, bool, anyAbilityPickupStoryMessagesVisible, (__int64 thisPtr) {
          //MessageControllerB::get_AnyAbilityPickupStoryMessagesVisible
          return 0;
          });

bool invertTreeActivationStates = true;
INTERCEPT(0x13A7AA0, VALIDATOR, bool, sub1813A7AA0, (__int64 mappingPtr, __int64 uberState){
          //RVA: 13A7AA0. Called from PlayerStateMap.Mapping::Matches

          bool result = sub1813A7AA0(mappingPtr, uberState);
          result = CSharpLib->call<bool>("DoInvertTree", foundTree) ^ result;
          return result;
          });

INTERCEPT(0x5D5950, PICKUP_FUN, void, onCollectHealthHalfCell, (__int64 thisPointer, __int64 pickupPointer){
          //SeinPickupProcessor::onCollectHealthHalfCell
              lock = true;
          onCollectHealthHalfCell(thisPointer, pickupPointer);
          lock = false;
          });

INTERCEPT(0x5D3DD0, PICKUP_FUN, void, onCollectEnergyHalfCell, (__int64 thisPointer, __int64 pickupPointer){
              //SeinPickupProcessor::onCollectEnergyHalfCell
              lock = true;
              onCollectEnergyHalfCell(thisPointer, pickupPointer);
              lock = false;
          });

INTERCEPT(0x5D6400, PICKUP_FUN, void, onCollectSpiritShard, (__int64 thisPointer, __int64 pickupPointer) {
              //SeinPickupProcessor::onCollectSpiritShard
              lock = true;
              onCollectSpiritShard(thisPointer, pickupPointer);
              lock = false;
          });

INTERCEPT(0x5D3440, PICKUP_FUN, void, onCollectSpiritShardSlot, (__int64 thisPointer, __int64 pickupPointer){
          //SeinPickupProcessor::OnCollectedShardSlotUpgrade
          lock = true;
          onCollectSpiritShardSlot(thisPointer, pickupPointer);
          lock = false;
          });

INTERCEPT(0x5D4470, PICKUP_FUN, void, onCollectOre, (__int64 thisPointer, __int64 pickupPointer){
          lock = true;
          onCollectOre(thisPointer, pickupPointer);
          lock = false;
          });

INTERCEPT(0x5D5360, PICKUP_FUN, void, onCollectKeystone, (__int64 thisPointer, __int64 pickupPointer){
              lock = true;
          onCollectKeystone(thisPointer, pickupPointer);
          lock = false;
          });

INTERCEPT(0xA0AF60, ADD_SHARD_SIG, __int64, addShard, (__int64 thisPtr, unsigned __int8 enumValue){
          //PlayerSpiritShards::AddShard
          if (lock)
          {
          __int64 result = addShard(thisPtr, enumValue);
          if (result)
          {
          //Rollback if shard was new
          *(bool*)(result + 24) = false;
          *(bool*)(result + 25) = false;
          }
          return result;
          }
          return addShard(thisPtr, enumValue);
          });

INTERCEPT(0xA0ADE0, MEMBER_FUNCTION, void, addGlobalShardSlot, (__int64 thisPtr){
          //PlayerSpiritShards::AddGlobalShardSlot
          LOCK()
          addGlobalShardSlot(thisPtr);
          });

INTERCEPT(0x1230150, SET_INT_FUN, void, setBaseMaxHealth, (__int64 thisPtr, int val){
          //SeinHealthController::SetBaseMaxHealth (?)
          LOCK()
          setBaseMaxHealth(thisPtr, val);
          });

INTERCEPT(0xDEA1F0, SET_INT_FUN, void, setBaseMaxEnergy, (__int64 thisPtr, int val)
          {
          //SeinEnergy::SetBaseMaxEnergy (?)
          LOCK()
          setBaseMaxEnergy(thisPtr, val);
          });
INTERCEPT(0x4943A0, SET_INT_FUN, void, setPartialHealthContainers, (__int64 thisPtr, int amount){
          //SeinLevel::setPartialHealthContainers
          lastSeinLevel = thisPtr;
          LOCK()
          setPartialHealthContainers(thisPtr, amount);
          });

INTERCEPT(0x4942E0, GET_INT_FUN, int, getPartialHealthContainers, (__int64 thisPtr){
          //SeinLevel::getPartialHealthContainers
          lastSeinLevel = thisPtr;
          LOCK(1)
          return getPartialHealthContainers(thisPtr);
          });

INTERCEPT(0x494530, SET_INT_FUN, void, setPartialEnergyContainers, (__int64 thisPtr, int amount){
          //SeinLevel::setPartialEnergyContainers
          lastSeinLevel = thisPtr;
          LOCK()
          setPartialEnergyContainers(thisPtr, amount);
          });

INTERCEPT(0x494470, GET_INT_FUN, int, getPartialEnergyContainers, (__int64 thisPtr){
          //SeinLevel::getPartialEnergyContainers
          lastSeinLevel = thisPtr;
          LOCK(1)
          return getPartialEnergyContainers(thisPtr);
          });

INTERCEPT(0x494210, SET_INT_FUN, void, setOre, (__int64 thisPtr, int amount){
          //SeinLevel::setOre
          lastSeinLevel = thisPtr;
          LOCK()
          setOre(thisPtr, amount);
          });

INTERCEPT(0x494080, SET_INT_FUN, void, setExperience, (__int64 thisPtr, int amount){
          //SeinLevel::setExperience
          lastSeinLevel = thisPtr;
          LOCK()
          setExperience(thisPtr, amount);
          });

INTERCEPT(0x487220, SET_INT_FUN, void, setKeystones, (__int64 thisPtr, int partials){
          //SeinInventory::setKeystones
          LOCK()
          setKeystones(thisPtr, partials);
          });

INTERCEPT(0x5D4EE0, PICKUP_FUN, void, onCollectExpOrb, (__int64 thisPointer, __int64 pickupPointer){
          //SeinPickupProcessor::onCollectExpOrb
          char messageBoxType = *(char*)(pickupPointer + 0xA8);
          if (messageBoxType) //Any non-enemy exp drop has an associated messageBox
          {
          lock = true;
          }
          onCollectExpOrb(thisPointer, pickupPointer);
          lock = false;
          });

INTERCEPT(0x1272580, MEMBER_FUNCTION, void, getAbilityOnConditionFixedUpdate, (__int64 thisPtr) {
          getAbilityOnConditionFixedUpdate(thisPtr);
          // BAD PROBLEMS DESERVE BAD SOLUTIONS
          if (lastDesiredState != *(__int64*)(thisPtr + 0x18)) {
                  if (lastDesiredState != NULL && priorDesiredState != *(__int64*)(thisPtr + 0x18)) {
                      priorDesiredState = *(__int64*)(thisPtr + 0x18);
                      BYTE* desiredAbility = (BYTE*)(priorDesiredState + 0x18);
                      priorFoundTree = *desiredAbility;
                      DEBUG("GAOC.FU: got " << priorDesiredState << " for address 2 of condition (1 was " << lastDesiredState<< "), wants " << (int)desiredAbility);
                  }
                  else {
                      lastDesiredState = *(__int64*)(thisPtr + 0x18);
                      BYTE* desiredAbility = (BYTE*)(lastDesiredState + 0x18);
                      foundTree = *desiredAbility;
                      //				  auto condPtr = *(__int64*)(thisPtr + 0x20);
                      //				  BYTE* condAbility = (BYTE*)(condPtr + 0x18);
                      DEBUG("GAOC.FU: got " << lastDesiredState << " for address of condition, wants " << (int)desiredAbility);
                      //				  LOG("DesiredState ability " << (int)*desiredAbility);
                  }
          }

          });

INTERCEPT(0x12726A0, MEMBER_FUNCTION, void, getAbilityOnConditionAssign, (__int64 thisPtr) {
          DEBUG("GAOC.ASS: intercepted and ignored ");
          if (CSharpLib != NULL)
              CSharpLib->call<void>("OnTree", foundTree);
          else
              LOG("GAOC.ASS: ????UNHOOKED???");
});

INTERCEPT(0xB3A220, VALIDATOR, bool, abilityStateFulfilled, (__int64 thisPtr, __int64 contextPtr) {
    if (lastDesiredState == thisPtr && foundTree != -1)
        return CSharpLib->call<bool>("TreeFulfilled", foundTree);
    else if (priorDesiredState == thisPtr && priorFoundTree != -1)
        return CSharpLib->call<bool>("TreeFulfilled", priorFoundTree);
    else
        return true;
          // man this should really never happen?
          LOG("ASF: HOW COULD THIS HAPPEN TO MEEEEE, I'M TRACKING BOTH TREEEES");
          });;

INTERCEPT(0x5BE620, MEMBER_FUNCTION, void, fixedUpdate1, (__int64 thisPointer) {
    fixedUpdate1(thisPointer);
    onFixedUpdate(thisPointer);
});

BINDING(0xFC30B0, GET_PTR_FUN, getSelectedShard)//SpiritShardsShopScreen::get_SelectedSpiritShard
INTERCEPT(0xFC61D0, GET_BOOL_FUN, bool, canShardPurchase, (__int64 spiritShardShopScreen){
    //SpiritShardsShopScreen::CanPurchase
    auto result = canShardPurchase(spiritShardShopScreen);
    return result;
})


BINDING(0xFC4210, MEMBER_FUNCTION, SpiritShardsShopScreen_UpdateContextCanvasShards)
BINDING2(0x13B8BB0, void, PlayerUberStateShards_Shard_RunSetDirtyCallback, __int64)
INTERCEPT(0xFC65B0, MEMBER_FUNCTION, void, completeShardPurchase, (__int64 spiritShardShopScreen){
    //SpiritShardsShopScreen::CompletePurchase

    completeShardPurchase(spiritShardShopScreen);

    auto shard = getSelectedShard(spiritShardShopScreen);
	//save shard new/purchased state
    bool first = *(bool*)(shard + 24);
    bool second = *(bool*)(shard + 25);

    auto shardType = *(unsigned __int8*)(shard + 0x10);
    log("Completed purchase: " + std::to_string(shardType)); //TODO: @Eiko This is onPurchase for the shard shop, you can use the shardType

	//rollback purchase if necessary
    *(bool*)(shard + 24) = first;
    *(bool*)(shard + 25) = second;

    PlayerUberStateShards_Shard_RunSetDirtyCallback(shard);
    SpiritShardsShopScreen_UpdateContextCanvasShards(spiritShardShopScreen);
})


INTERCEPT(0x13B84C0, GET_BOOL_FUN, bool, PlayerUberStateShards_Shard_Get_PurchasableInShop, (__int64 shard){

    auto shardType = *(unsigned __int8*)(shard + 0x10);
    return true;
})
INTERCEPT(0x1104C60, GET_BOOL_FUN, bool, PlayerUberStateShards_Shard_Get_GAINED, (__int64 shard){

    auto shardType = *(unsigned __int8*)(shard + 0x10);
    return true;
})

BINDING2(0x1BBA0F0, __int64, List_getItem, __int64 list, int index)
BINDING2(0x4ACE40, __int64, List_getCount, __int64 list)
void forEachIndexed(__int64 list, std::function<void(__int64, int)> fun)
{
    if (!list)
        return;

	int size = List_getCount(list);
    for (int i = 0; i < size; i++)
    {
        fun(List_getItem(list, i), i);
    }
}

void initShardDescription(unsigned __int8 shard, __int64 spiritShardDescription)
{
    //Set purchase cost (normal):
    *(int*)(spiritShardDescription + 0x38) = 10;//1337 * 2; //TODO: @Eiko - Call c# here, maybe even cache it/Do a "was inited" thing?

    auto upgradableAbilityList = *(__int64*)(spiritShardDescription + 0x40);
    forEachIndexed(upgradableAbilityList, [shard](__int64 upgradableAbilityLevel, int index)-> void {
    	if(upgradableAbilityLevel)
    	{
            //Set upgrade cost (normal):
            *(int*)(upgradableAbilityLevel + 0x18) = 10;// 1337 * 2;
            //TODO: @Eiko: Get this from c# too
        }
    });
}

INTERCEPT(0x18BE940, SUB_182C8D3A0_DICT_SIG, __int64, enumDictGetValue, (__int64 dict, unsigned __int8 enumKey, __int64 impl) {
    //EnumDictionary::GetValue
    __int64 value = enumDictGetValue(dict, enumKey, impl);

	//Method$EnumDictionary_SpiritShardType__SpiritShardDescription__GetValue__
    if (impl == *(__int64*)(0x43D3D70 + (__int64)GetModuleHandleA("GameAssembly.dll")))
    {
    	if(value)
			initShardDescription(enumKey, value);
	}
    return value;
})

//PlayerUberStateShards.Shard::GetCostForLevel - For whenever we want random upgrade costs
INTERCEPT(0x13B7D90, SCALE_INT_FUN, int, getCostForLevel, (__int64 shardPointer, int level){
    //TODO: @Eiko - Call c# here
    return getCostForLevel(shardPointer, level);
})

INTERCEPT(0xA09600, HAS_SHARD, bool, PlayerSpiritShards_HasShard, (__int64 spiritShards, unsigned __int8 shardType){

    if (isInShopScreen())
    {
        return false;
        //TODO: @Eiko - Call C# using shardType, return true if the player has *purchased* the slot before
    }
    return PlayerSpiritShards_HasShard(spiritShards, shardType);
})

BINDING(0x828EE0, GET_BOOL_FUN, WeaponmasterItem_get_IsLocked)
BINDING(0x3E7B40, GET_BOOL_FUN, WeaponmasterItem_get_IsVisible)
BINDING(0x8292F0, GET_BOOL_FUN, WeaponmasterItem_get_IsAffordable)

char getWeaponMasterAbilityItem(__int64 weaponmasterItem)
{
    return  *(char*)((*(__int64*)(weaponmasterItem + 0x10)) + 0x39);;
}

int purchases = 0;
bool hasBeenPurchasedBefore(char abilityType)
{
    return purchases > 0;//TODO: @Eiko - Call C# using abilityType, return true if the player has *purchased* the slot before
}

bool purchasable(__int64 weaponmasterItem)
{
    char abilityType = getWeaponMasterAbilityItem(weaponmasterItem);
    return !hasBeenPurchasedBefore(abilityType) && !WeaponmasterItem_get_IsLocked(weaponmasterItem) &&
	    WeaponmasterItem_get_IsVisible(weaponmasterItem) && WeaponmasterItem_get_IsAffordable(weaponmasterItem);

}

INTERCEPT(0x829290, GET_BOOL_FUN, bool, WeaponmasterItem_get_IsOwned, (__int64 item){
    if(isInShopScreen())
    {
        return hasBeenPurchasedBefore(getWeaponMasterAbilityItem(item));
    }
    return WeaponmasterItem_get_IsOwned(item);
})

INTERCEPT(0x829E60, SCALE_INT_FUN, int, WeaponmasterItem_GetCostForLevel, (__int64 item, int level){
    char abilitlyType = getWeaponMasterAbilityItem(item);
	//TODO: @Eiko - you know what to do
    return 25;
})


typedef bool (*TRYPURCHASE) (__int64, __int64, __int64, __int64);
INTERCEPT(0x8294D0, TRYPURCHASE, bool, WeaponmasterItem_TryPurchase, (__int64 pThis, __int64 hint, __int64 sounds, __int64 hints) {
    if (purchasable(pThis))
        return true;

    WeaponmasterItem_TryPurchase(pThis, hint, sounds, hints);
    return false;
})


INTERCEPT(0xF51C30, ADDSPELLTOINV, __int64, SpellInventory_AddNewSpellToInventory, (__int64 inv, unsigned int equipmentType, bool add) {
    if (weaponmasterPurchaseInProgress)
        return 0;

    __int64 result = SpellInventory_AddNewSpellToInventory(inv, equipmentType, add);
    return result;
})

INTERCEPT(0x1A788D0, SET_ENUM_FUN, void, SerializedByteUberState_SetValue, (__int64 state, unsigned char value) {
    if (weaponmasterPurchaseInProgress)
        return;

    SerializedByteUberState_SetValue(state, value);
})

INTERCEPT(0x829900, PICKUP_FUN, void, WeaponmasterItem_DoPurchase, (__int64 item, __int64 context){
    weaponmasterPurchaseInProgress = 1;
    WeaponmasterItem_DoPurchase(item, context);
    weaponmasterPurchaseInProgress = 0;

    auto abilityType = getWeaponMasterAbilityItem(item);
    log("Purchased" + std::to_string(abilityType)); //TODO: @Eiko - yeeeaah, it's that time again
    purchases++;
})

BINDING2(0x1C41890, __int64, String_GetCharArray, __int64)
BINDING2(0x2071CF0, int, Array_get_Count, __int64)
BINDING2(0x2072C00, __int64, Array_GetValue, __int64, int index)
void printCSString(__int64 str){
	if(str)
	{

        __int64 chars = String_GetCharArray(str);
		if(chars)
		{
            auto size = Array_get_Count(chars);
            auto str = new char[size];
            for(int i = 0; i < size; i++)
            {
                auto charStructPointer = Array_GetValue(chars, i);
                str[i] = *(char*)(charStructPointer + 0x10);
            }
            log(str);

		}
	}
}

BINDING2(0x8FC900, bool, SeinCharacter_get_Active, __int64) //Also used by stuff like IsActive, or get_IsShopOpen. It's a magical binding
BINDING2(0x82A0B0, __int64, WeaponmasterScreen_get_Instance, __int64)
bool isInShopScreen()
{
	//TODO maybe cache some of these
    __int64 Class_SpiritShardsShopScreen = *(__int64*)(0x43C8648 + (__int64)GetModuleHandleA("GameAssembly.dll"));
    __int64 weaponmasterScreen = WeaponmasterScreen_get_Instance(0);
    if (weaponmasterScreen && SeinCharacter_get_Active(weaponmasterScreen))
        return true;

    if(Class_SpiritShardsShopScreen)
    {
        __int64 instance = **(__int64**)(Class_SpiritShardsShopScreen + 184);
        if (instance && SeinCharacter_get_Active(instance))
            return true;
    }

    return false;
}

struct MessageDescriptor
{
    __int64 message;
    char emotion;
    __int64 sound;
    __int64 event;
};
typedef __int64 (*MESSAGE_SIG)(__int64, __int64, char);
INTERCEPT(0x10DEFF0, MESSAGE_SIG , __int64, TranslatedMessageProvider_MessageItem_Message, (__int64 pThis1, __int64 pThis2, char language) {
    auto result = (MessageDescriptor*) TranslatedMessageProvider_MessageItem_Message(pThis1, pThis2, language);

	if(result && isInShopScreen())
	{
        __int64 newString = CSharpLib->call<__int64>("replaceString", result -> message);
        if (newString)
        {
            result->message = newString;
        }
	}
    return (__int64) result;
})
//---------------------------------------------------Actual Functions------------------------------------------------

void onFixedUpdate(__int64 thisPointer)
{
    if (gameControllerInstancePointer != (void*)thisPointer) {
        LOG("got GameController.Instance pointer: " << thisPointer);
        gameControllerInstancePointer = (void*)thisPointer;
    }
    try {
        int update = CSharpLib->call<int>("Update");

        if (CSharpLib->call<bool>("CheckFlag", 0)) {
            log("Checkpoint requested by c# code");
            createCheckpoint((__int64)gameControllerInstancePointer);
        }
        if (lastSeinLevel != NULL && CSharpLib->call<bool>("CheckFlag", 1)) {
            log("Ore update required");
            setOre(lastSeinLevel, CSharpLib->call<int>("OreCount"));
        }
        if (gameWorldInstance != NULL && CSharpLib->call<bool>("CheckFlag", 2)) {
            log("Map revealed");
            discoverEverything();
        }
//        if (lastSeinPickupProcessor != NULL && CSharpLib->call<bool>("CheckFlag", 3)) {
//            log("Adding shard slot");
////            onCollectSpiritShardSlot();
//
//        }
    }
    catch (int error)
    {
        LOG("got error code " << error);
    }
}

void discoverEverything()
{
	if (gameWorldInstance)
	{
		for (unsigned __int8 i = 0; i <= 15; i++)
		{
			auto area = getAreaFromId(gameWorldInstance, i);
			if (!area)
			{
				//Areas: None, WeepingRidge, GorlekMines, Riverlands would crash the game
				continue;
			}
			auto runtimeArea = getRuntimeArea(gameWorldInstance, area);
			if (!runtimeArea)
			{
				continue;
			}
			discoverAllAreas(runtimeArea);
		}
	}
	else
	{
		log("Tried to discover all, but haven't found the GameWorld Instance yet :(");
	}
}

//-------------------------------------------------------Attaching---------------------------------------------------

__int64 start;

void initAll()
{
	start = (__int64)GetModuleHandleA("GameAssembly.dll");
	intercept* next = lastIntercept;
	while (next)
	{
		intercept current = *next;
		log("Binding: " + current.name + " (+" + std::to_string(current.offset) + ")");
		*current.originalPointer = (PVOID*)(start + current.offset);
		next = current.prev;
	}
}

void attachAll()
{
	auto foo = &(PVOID&)fixedUpdate1;

	intercept* next = lastIntercept;
	while (next)
	{
		intercept current = *next;
		if (current.interceptPointer)
		{
			log("attaching: " + current.name + " @ " + std::to_string((__int64)current.originalPointer) + " -> " + std::
				to_string((__int64)current.interceptPointer));
			auto result = DetourAttach(current.originalPointer, current.interceptPointer);
			log("result: " + std::to_string(result));
		}
		next = current.prev;
	}
}

void detachAll()
{
	intercept* next = lastIntercept;
	while (next)
	{
		intercept current = *next;
		if (current.interceptPointer)
			DetourDetach(current.originalPointer, current.interceptPointer);
		next = current.prev;
	}
}

//--------------------------------------------------------------Old-----------------------------------------------------------

void log(std::string message)
{
    LOG(message);
}

void initMemoryHacks()
{
	//hacky hack hack
	auto start = (__int64)GetModuleHandleA("GameAssembly.dll") + 0x5D3227;
	unsigned long dwOldProt = 0;
	VirtualProtect((LPVOID)start, 6, PAGE_EXECUTE_READWRITE, &dwOldProt);
	log("unprotected");
	for (int i = 0; i <= 5; i++)
	{
		log("Pre: " + std::to_string(*(unsigned __int8*)(start + i)));
		*(unsigned __int8*)(start + i) = 0x90;
		log("Post: " + std::to_string(*(unsigned __int8*)(start + i)));
	}
}


bool attached = false;
bool shutdown = false;

void MainThread()
{
	if (attached)
		return;
	attached = true;
	log("attached (last log b4 suppress, if set)");
	CSharpLib = new InjectDLL::PEModule(_T("C:\\moon\\RandoMainDLL.dll"));
	if (CSharpLib->call<bool>("Initialize"))
	{
        try {
            debug = CSharpLib->call<bool>("InjectDebugEnabled");
            info = CSharpLib->call<bool>("InjectLogEnabled");
            log("c# init complete");
            return;
        }
        catch (int err) {
            log("yikes");
        }
	}
	else
	{
		log("Failed to initialize, shutting down");
		shutdown = true;
		FreeLibraryAndExitThread(GetModuleHandleA("InjectDLL.dll"), 0);
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	if (DetourIsHelperProcess())
	{
		return TRUE;
	}
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
        log("init start");
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
		initAll();
		initMemoryHacks();
		DetourRestoreAfterWith();
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());

		attachAll();
		log("inject commit: " + std::to_string(DetourTransactionCommit()));

		break;
	case DLL_PROCESS_DETACH:
		shutdown = true;
		delete CSharpLib;
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());

		detachAll();

		log("detatch commit: " + std::to_string(DetourTransactionCommit()));
		break;
	default:
		break;
		//std::ifstream f("C:\\moon\\inject.flag");
		//if (!f.good() && !shutdown) {
		//    shutdown = true;
		//    log("Shutdown time");
		//    FreeLibraryAndExitThread(GetModuleHandleA("InjectDLL.dll"), 0);
		//}
	}
	return TRUE;
}


// strftime format
#define LOGGER_PRETTY_TIME_FORMAT "%Y-%m-%d %H:%M:%S"

// printf format
#define LOGGER_PRETTY_MS_FORMAT ".%03d"


// convert current time to milliseconds since unix epoch
template <typename T>
static int to_ms(const std::chrono::time_point<T>& tp)
{
    using namespace std::chrono;

    auto dur = tp.time_since_epoch();
    return static_cast<int>(duration_cast<milliseconds>(dur).count());
}


// format it in two parts: main part with date and time and part with milliseconds
static std::string pretty_time()
{
    auto tp = std::chrono::system_clock::now();
    std::time_t current_time = std::chrono::system_clock::to_time_t(tp);

    std::tm time_info;
    localtime_s(&time_info, &current_time);

    char buffer[128];

    int string_size = strftime(
        buffer, sizeof(buffer),
        LOGGER_PRETTY_TIME_FORMAT,
        &time_info
    );

    int ms = to_ms(tp) % 1000;

    string_size += std::snprintf(
        buffer + string_size, sizeof(buffer) - string_size,
        LOGGER_PRETTY_MS_FORMAT, ms
    );

    return std::string(buffer, buffer + string_size);
}

extern "C" __declspec(dllexport)VOID NullExport(VOID)
{
}
