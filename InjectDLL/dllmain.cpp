// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "detours.h"
#include "PEModule.h"
#include "common.h"

#include <string>
#include <iostream>
#include <unordered_map>
#include <fstream>


#define PTR(type, name, add) \
	type name; \
	type get_##name##Pointer(){ return (type) ((uint64_t)GetModuleHandleA("GameAssembly.dll") + add); }
#define INIT(name) name  = get_##name##Pointer()
#define ATTACH(name) DetourAttach(&(PVOID&)name, name##Intercept)
#define DETACH(name) DetourDetach(&(PVOID&)name, name##Intercept)

#define LOCK(value) if(lock) {return value;}

#define OFFSET_BASE 0x180000000

#define SEIN_PICKUP_PROCESSOR_ON_COLLECT_MAX_HEALTH_HALF_CONTAINER_PICKUP 0x5D5950
#define SEIN_PICKUP_PROCESSOR_ON_COLLECT_MAX_ENERGY_HALF_CONTAINER_PICKUP 0x5D3DD0
#define SEIN_PICKUP_PROCESSOR_ON_COLLECT_SHARD_PICKUP 0x5D6400
#define SEIN_PICKUP_PROCESSOR_ON_COLLECT_KEYSTONE 0x5D5360
#define SEIN_PICKUP_PROCESSOR_ON_COLLECT_ORE 0x5D4470
#define SEIN_PICKUP_PROCESSOR_ON_COLLECT_SHARD_SLOTS 0x5D3440
#define SEIN_PICKUP_PROCESSOR_ON_COLLECT_QUEST_ITEM 0x5D30B0
#define SEIN_PICKUP_PROCESSOR_ON_COLLECT_EXP_ORB 0x5D4EE0
#define SEIN_PICKUP_PROCESSOR_PERFORM_SEQUENCE 0x5D2310
#define SEIN_LEVEL_SET_PARTIAL_HEALTH_CONTAINERS 0x4943A0
#define SEIN_LEVEL_GET_PARTIAL_HEALTH_CONTAINERS 0x4942E0
#define SEIN_LEVEL_GET_PARTIAL_ENERGY_CONTAINERS 0x494470
#define SEIN_LEVEL_SET_PARTIAL_ENERGY_CONTAINERS 0x494530
#define SEIN_LEVEL_SET_EXPERIENCE 0x494080
//@EIKO: 0x4947A0 if you'd rather noop GainExperience while locked

#define FIXED_UPDATE 0x5BE620
#define CREATE_CHECKPOINT 0x5C06C0

#define ACTIVATE_PEDESTAL 0x13C2BD0
#define WRITE_DESIRED_STATES 0xB3A320
#define ABILITY_PEDESTAL_APPLY 0x13C4200
#define CHANGE_STATE 0x13C24E0

#define SEIN_HEALTH_CONTROLLER_SET_MAX_BASE 0x1230150
#define SEIN_ENERGY_SET_BASE_MAX_ENERGY 0xDEA1F0
#define SEIN_LEVEL_SET_ORE 0x494210
#define SEIN_INVENTORY_SET_KEYSTONES 0x487220
#define PLAYER_SPIRIT_SHARDS_ADD_GLOBAL_SHARD_SLOT 0xA0ADE0

#define PLAYER_SPIRIT_SHARDS_ADD_SHARD 0xA0AF60
#define PLAYER_SPIRIT_SHARDS_GET_UBER_STATE_SHARD 0xA09500
#define SUB_182C8D3A0 (0x2C8D3A0)


#define PLAYER_UBER_STATE_INVENTORY_GRANT_QUEST_ITEM 0x13B1660
#define PLAYER_QUEST_ITEMS_ADD_ITEM 0xA08FC0

#define SEIN_ENERGY_UPDATE 0xDEBA50


typedef int (*_INTFUNC)();

typedef void (*MEMBER_FUNCTION)(__int64 thisPtr);
typedef void (*PICKUP_FUN)(__int64 thisPtr, __int64 pickupPtr);
typedef int (*GET_INT_FUN)(__int64 thisPtr);
typedef __int64 (*GET_PTR_FUN)(__int64 thisPtr);
typedef void (*SET_INT_FUN)(__int64 thisPtr, int value);
typedef __int64 (*SET_AND_RETURN_ENUM_FUN)(__int64 thisPtr, unsigned __int8 value);
typedef void (*SET_ENUM_FUN)(__int64 thisPtr, unsigned __int8 value);
typedef __int64 (*ADD_SHARD_SIG)(__int64 thisPtr, unsigned __int8 value);
typedef __int64 (*SUB_182C8D3A0_DICT_SIG)(__int64 thisPtr, unsigned __int8 value, __int64 something);
typedef void (*SET_FLOAT_FUN)(__int64 thisPtr, float value);

// this stuff should probably be in a header file lol
PTR(SET_INT_FUN, setOre, SEIN_LEVEL_SET_ORE)
PTR(SET_INT_FUN, setKeystone, SEIN_INVENTORY_SET_KEYSTONES)
PTR(MEMBER_FUNCTION, addShardSlot, PLAYER_SPIRIT_SHARDS_ADD_GLOBAL_SHARD_SLOT)
PTR(SET_ENUM_FUN, uberAddQuestItem, PLAYER_UBER_STATE_INVENTORY_GRANT_QUEST_ITEM)
PTR(SET_ENUM_FUN, addQuestItem, PLAYER_QUEST_ITEMS_ADD_ITEM)
PTR(ADD_SHARD_SIG, addShard, PLAYER_SPIRIT_SHARDS_ADD_SHARD)
PTR(SUB_182C8D3A0_DICT_SIG, sub_182c8d3a0, SUB_182C8D3A0)

PTR(GET_PTR_FUN, playerSpiritShardsGetUberStateShards, PLAYER_SPIRIT_SHARDS_GET_UBER_STATE_SHARD)

PTR(MEMBER_FUNCTION, activateAbilityPedestal, ACTIVATE_PEDESTAL)
PTR(MEMBER_FUNCTION, writeDesiredStates, WRITE_DESIRED_STATES)
PTR(MEMBER_FUNCTION, createCheckpoint, CREATE_CHECKPOINT)
PTR(MEMBER_FUNCTION, fixedUpdate, FIXED_UPDATE)
//PTR(SET_ENUM_FUN, changeState, CHANGE_STATE)

PTR(SET_INT_FUN, setBaseMaxHealth, SEIN_HEALTH_CONTROLLER_SET_MAX_BASE)
PTR(SET_INT_FUN, setPartialHealthContainers, SEIN_LEVEL_SET_PARTIAL_HEALTH_CONTAINERS)
PTR(GET_INT_FUN, getPartialHealthContainers, SEIN_LEVEL_GET_PARTIAL_HEALTH_CONTAINERS)

PTR(SET_INT_FUN, setBaseMaxEnergy, SEIN_ENERGY_SET_BASE_MAX_ENERGY)
PTR(SET_INT_FUN, setExperience, SEIN_LEVEL_SET_EXPERIENCE)
PTR(SET_INT_FUN, setPartialEnergyContainers, SEIN_LEVEL_SET_PARTIAL_ENERGY_CONTAINERS)
PTR(GET_INT_FUN, getPartialEnergyContainers, SEIN_LEVEL_GET_PARTIAL_ENERGY_CONTAINERS)

PTR(PICKUP_FUN, onCollectHealthHalfCell, SEIN_PICKUP_PROCESSOR_ON_COLLECT_MAX_HEALTH_HALF_CONTAINER_PICKUP)
PTR(PICKUP_FUN, onCollectEnergyHalfCell, SEIN_PICKUP_PROCESSOR_ON_COLLECT_MAX_ENERGY_HALF_CONTAINER_PICKUP)
PTR(PICKUP_FUN, onCollectSpiritShard, SEIN_PICKUP_PROCESSOR_ON_COLLECT_SHARD_PICKUP)
PTR(PICKUP_FUN, onCollectOre, SEIN_PICKUP_PROCESSOR_ON_COLLECT_ORE)
PTR(PICKUP_FUN, onCollectSpiritShardSlot, SEIN_PICKUP_PROCESSOR_ON_COLLECT_SHARD_SLOTS)
PTR(PICKUP_FUN, onCollectKeystone, SEIN_PICKUP_PROCESSOR_ON_COLLECT_KEYSTONE)
PTR(PICKUP_FUN, onCollectQuestItem, SEIN_PICKUP_PROCESSOR_ON_COLLECT_QUEST_ITEM)
PTR(PICKUP_FUN, onCollectExpOrb, SEIN_PICKUP_PROCESSOR_ON_COLLECT_EXP_ORB)


PTR(PICKUP_FUN, getAbilityPedestal, ABILITY_PEDESTAL_APPLY)

__int64 lastSeinEnergy;
__int64 lastHealthController;

void* gameControllerInstancePointer = NULL;

bool lock = false;
InjectDLL::PEModule* CSharpLib = NULL;
std::string logFilePath = "C:\\moon\\inject_log.txt"; // change this if you need to
std::ofstream logfile;

void log(std::string message)
{
	std::ofstream logfile;
	logfile.open(logFilePath, std::ios_base::app);
	logfile << message << std::endl;
	logfile.close();
}


void uberAddQuestItemIntercept(__int64 thisPtr, char item)
{
	log("Quest item intercepted2");
	LOCK()
		log("Quest item allowed2");
	uberAddQuestItem(thisPtr, item);
}


void addQuestItemIntercept(__int64 thisPtr, char item)
{
	log("Quest item intercepted");
	LOCK()
		addQuestItem(thisPtr, item);
}

__int64 addShardIntercept(__int64 thisPtr, unsigned __int8 enumValue)
{
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
}

void addShardSlotIntercept(__int64 thisPtr)
{
	LOCK()
		addShardSlot(thisPtr);
}

void setOreIntercept(__int64 thisPtr, int partials)
{
	LOCK()
		setOre(thisPtr, partials);
}

void setKeystoneIntercept(__int64 thisPtr, int partials)
{
	LOCK()
		setOre(thisPtr, partials);
}

void setPartialEnergyContainersIntercept(__int64 thisPtr, int partials)
{
	LOCK()
		setPartialEnergyContainers(thisPtr, partials);
}

int getPartialEnergyContainersIntercept(__int64 thisPtr)
{
	LOCK(1)
		return getPartialEnergyContainers(thisPtr);
}

void setPartialHealthContainersIntercept(__int64 thisPtr, int partials)
{
	LOCK()
		setPartialHealthContainers(thisPtr, partials);
}


int getPartialHealthContainersIntercept(__int64 thisPtr)
{
	LOCK(1)
		return getPartialHealthContainers(thisPtr);
}

void setBaseMaxHealthIntercept(__int64 thisPtr, int val)
{
	LOCK()
		setBaseMaxHealth(thisPtr, val);
}

void setExperienceIntercept(__int64 thisPtr, int val)
{

	LOCK()
		setExperience(thisPtr, val);

}

void setBaseMaxEnergyIntercept(__int64 thisPtr, int val)
{
	LOCK()
		setBaseMaxEnergy(thisPtr, val);
}

void onCollectHealthHalfCellIntercept(__int64 thisPointer, __int64 pickupPointer)
{
	lock = true;
	onCollectHealthHalfCell(thisPointer, pickupPointer);
	lock = false;
}

void onCollectEnergyHalfCellIntercept(__int64 thisPointer, __int64 pickupPointer)
{
	lock = true;
	onCollectEnergyHalfCell(thisPointer, pickupPointer);
	lock = false;
}

void onCollectSpiritShardIntercept(__int64 thisPointer, __int64 pickupPointer)
{
	lock = true;
	onCollectSpiritShard(thisPointer, pickupPointer);
	lock = false;
}

void onCollectSpiritShardSlotIntercept(__int64 thisPointer, __int64 pickupPointer)
{
	lock = true;
	onCollectSpiritShardSlot(thisPointer, pickupPointer);
	lock = false;
}

void onCollectOreIntercept(__int64 thisPointer, __int64 pickupPointer)
{
	lock = true;
	onCollectOre(thisPointer, pickupPointer);
	lock = false;
}

void onCollectKeystoneIntercept(__int64 thisPointer, __int64 pickupPointer)
{
	lock = true;
	onCollectKeystone(thisPointer, pickupPointer);
	lock = false;
}

void writeDesiredStatesIntercept(__int64 thisPtr)
{
	log("Caught write desired state (oh no)");
	return;
}


void activateAbilityPedestalIntercept(__int64 thisPointer)
{
	lock = true;
	activateAbilityPedestal(thisPointer);
	lock = false;
}

void onCollectExpOrbIntercept(__int64 thisPointer, __int64 pickupPointer)
{

	char messageBoxType = *(char*)(pickupPointer + 0xA8);
	//int amount = *(char*)(pickupPointer + 0xAC);

	if (messageBoxType)
	{
		lock = true;
	}
	//log("MBox: " + std::to_string(messageBoxType));	
	//log("Amount: " + std::to_string(amount));	
	onCollectExpOrb(thisPointer, pickupPointer);
	lock = false;
}
void getAbilityPedestalIntercept(__int64 thisPointer, __int64 statePointer) {
	log("Xem pls ;_;");
	return;
}

void fixedUpdateIntercept(__int64 thisPointer) {
	fixedUpdate(thisPointer);
	if (gameControllerInstancePointer != (void*)thisPointer) {
		logfile.open(logFilePath, std::ios_base::app);
		logfile << "got GameController.Instance pointer: " << thisPointer << std::endl;
		logfile.close();
		gameControllerInstancePointer = (void*)thisPointer;
	}
	try {
		int update = CSharpLib->call<int>("Update");
		if (update == 1) {
			log("Checkpoint requested by c# code");
			createCheckpoint((__int64)gameControllerInstancePointer);
		}
	}
	catch (int error) {
		logfile.open(logFilePath, std::ios_base::app);
		logfile << "got error code " << error << std::endl;
		logfile.close();
	}
}

void createCheckpointIntercept(__int64 thisPointer) {
	createCheckpoint(thisPointer);
}

void onCollectQuestItemIntercept(__int64 thisPointer, __int64 pickupPointer)
{
	lock = true;
	log("Foo: " + std::to_string(*(char*)(pickupPointer + 72)));
	onCollectQuestItem(thisPointer, pickupPointer);
	log("Var: " + std::to_string(*(char*)(pickupPointer + 72)));
	lock = false;
}

void initPointers()
{
	INIT(getPartialEnergyContainers);
	INIT(setPartialEnergyContainers);

	INIT(getPartialHealthContainers);
	INIT(setPartialHealthContainers);

	INIT(setExperience);

	INIT(playerSpiritShardsGetUberStateShards);
	INIT(sub_182c8d3a0);

	INIT(uberAddQuestItem);
	INIT(activateAbilityPedestal);
	INIT(writeDesiredStates);
	INIT(getAbilityPedestal);
	INIT(onCollectExpOrb);
	INIT(createCheckpoint);
	INIT(fixedUpdate);
	//	INIT(changeState)

	INIT(setBaseMaxEnergy);
	INIT(setBaseMaxHealth);
	INIT(setOre);
	INIT(addShardSlot);
	INIT(addShard);
	INIT(addQuestItem);
	INIT(setKeystone);
	INIT(onCollectHealthHalfCell);
	INIT(onCollectEnergyHalfCell);
	INIT(onCollectSpiritShard);
	INIT(onCollectSpiritShardSlot);
	INIT(onCollectOre);
	INIT(onCollectQuestItem);
	INIT(onCollectKeystone);

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

void attachAll()
{
	ATTACH(uberAddQuestItem);
	ATTACH(onCollectHealthHalfCell);
	ATTACH(onCollectEnergyHalfCell);
	ATTACH(onCollectOre);
	ATTACH(onCollectSpiritShard);
	ATTACH(onCollectSpiritShardSlot);
	ATTACH(onCollectQuestItem);
	ATTACH(onCollectExpOrb);
	ATTACH(onCollectKeystone);
	ATTACH(setExperience);
	ATTACH(setBaseMaxHealth);
	ATTACH(setBaseMaxEnergy);
	ATTACH(setOre);
	ATTACH(setKeystone);
	ATTACH(addShardSlot);
	ATTACH(addShard);
	ATTACH(addQuestItem);
	ATTACH(setPartialHealthContainers);
	ATTACH(setPartialEnergyContainers);
	ATTACH(getPartialHealthContainers);
	ATTACH(getPartialEnergyContainers);
	ATTACH(activateAbilityPedestal);
	ATTACH(writeDesiredStates);
	ATTACH(getAbilityPedestal);
	ATTACH(createCheckpoint);
	ATTACH(fixedUpdate);
	//		ATTACH(changeState);
}

void detachAll() {
	DETACH(uberAddQuestItem);
	DETACH(onCollectHealthHalfCell);
	DETACH(onCollectEnergyHalfCell);
	DETACH(onCollectOre);
	DETACH(onCollectSpiritShard);
	DETACH(onCollectSpiritShardSlot);
	DETACH(onCollectQuestItem);
	DETACH(onCollectExpOrb);
	DETACH(onCollectKeystone);
	DETACH(setExperience);
	DETACH(setBaseMaxHealth);
	DETACH(setBaseMaxEnergy);
	DETACH(setOre);
	DETACH(setKeystone);
	DETACH(addShardSlot);
	DETACH(addShard);
	DETACH(addQuestItem);
	DETACH(setPartialHealthContainers);
	DETACH(setPartialEnergyContainers);
	DETACH(getPartialHealthContainers);
	DETACH(getPartialEnergyContainers);
	DETACH(activateAbilityPedestal);
	DETACH(writeDesiredStates);
	DETACH(getAbilityPedestal);
	DETACH(fixedUpdate);
	//		DETACH(changeState);
}

bool attached = false;
bool shutdown = false;
void MainThread() {
    if (attached)
        return;
    attached = true;
    log("attached");
	CSharpLib = new InjectDLL::PEModule(_T("C:\\moon\\RandoMainDLL.dll"));
    if (CSharpLib->call<bool>("Initialize")) {
		log("c# init complete");
		return;
    } else {
		log("Failed to initialize, shutting down");
		shutdown = true;
		FreeLibraryAndExitThread(GetModuleHandleA("InjectDLL.dll"), 0);
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    if (DetourIsHelperProcess()) {
        return TRUE;
    }    
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, 0, 0, 0);
        log("init");
        initPointers();
    	
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

extern "C" __declspec(dllexport)VOID NullExport(VOID)
{
}