#include <pch.h>
#include <interception_macros.h>
#include <dll_main.h>

#include <functional>
#include <set>

BINDING(9970752, bool, SeinCharacter_get_Active, (__int64)) //SeinCharacter$$get_Active - Also used by stuff like IsActive, or get_IsShopOpen. It's a magical binding
BINDING(5047120, __int64, WeaponmasterScreen_get_Instance, (__int64)) //WeaponmasterScreen$$get_Instance
BINDING(10013424, bool, GameController_get_GameInTitleScreen, (GameController_o*)) //GameController$$get_GameInTitleScreen

BINDING(5042560, bool, WeaponmasterItem_get_IsLocked, (__int64))       //WeaponmasterItem$$get_IsLocked
BINDING(4151120, bool, WeaponmasterItem_get_IsVisible, (__int64))      //WeaponmasterItem$$get_IsVisible
BINDING(5043600, bool, WeaponmasterItem_get_IsAffordable, (__int64))   //WeaponmasterItem$$get_IsAffordable

bool weaponmasterPurchaseInProgress = false;
const std::set<char> twillenShards{1, 2, 3, 5, 19, 22, 26, 40};
bool isTwillenShard(char shard){
	return twillenShards.find(shard) != twillenShards.end();
}


bool is_in_shop_screen(){
  const GameController_c* Class_GameController = get_game_controller();
	if(!Class_GameController)
		return false;
	const auto  gameController = Class_GameController->static_fields->Instance;
	if(!gameController || GameController_get_GameInTitleScreen(gameController))
		return false;

	const auto weaponmasterScreen = WeaponmasterScreen_get_Instance(0);
	if(weaponmasterScreen && SeinCharacter_get_Active(weaponmasterScreen))
		return true;

	const SpiritShardsShopScreen_c* Class_SpiritShardsShopScreen = *(SpiritShardsShopScreen_c**) resolve_rva(71589120);
	if(Class_SpiritShardsShopScreen)
	{
		const auto spiritShardsShopScreen = Class_SpiritShardsShopScreen->static_fields->Instance;
		if(spiritShardsShopScreen && SeinCharacter_get_Active((__int64) spiritShardsShopScreen))
			return true;
	}
    const MapmakerScreen_c* Class_MapmakerScreen = *(MapmakerScreen_c**)resolve_rva(71472816);
    if (Class_MapmakerScreen) {
        const auto mapmakerScreen = Class_MapmakerScreen->static_fields->Instance;
        if (mapmakerScreen && SeinCharacter_get_Active((__int64)mapmakerScreen))
            return true;
    }

	return false;
};

BINDING(14042272, __int64, getSelectedShard, (__int64 spiritShardShopScreen))//SpiritShardsShopScreen$$get_SelectedSpiritShard
INTERCEPT(14054576, bool, canShardPurchase, (__int64 spiritShardShopScreen), {
	//SpiritShardsShopScreen$$CanPurchase
	auto result = canShardPurchase(spiritShardShopScreen);
	return result;
});


BINDING(14046576, void, SpiritShardsShopScreen_UpdateContextCanvasShards, (__int64))//SpiritShardsShopScreen$$UpdateContextCanvasShards
BINDING(17918112, void, PlayerUberStateShards_Shard_RunSetDirtyCallback, (__int64))//Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$RunSetDirtyCallback

INTERCEPT(14055664, void, completeShardPurchase, (__int64 spiritShardShopScreen), {
	//SpiritShardsShopScreen$$CompletePurchase
	//save shard new/purchased state
	auto shard = getSelectedShard(spiritShardShopScreen);
	bool first = *(bool*) (shard + 24);
	bool second = *(bool*) (shard + 25);

	completeShardPurchase(spiritShardShopScreen);

	// rollback vanilla purchase 
	*(bool*) (shard + 24) = first;
	*(bool*) (shard + 25) = second;

    // do the rando purchase /after/ rollback, xem ;3
    auto shardType = *(unsigned __int8*)(shard + 0x10);
    csharp_lib->call<void, char>("TwillenBuyShard", shardType);

	PlayerUberStateShards_Shard_RunSetDirtyCallback(shard);
	SpiritShardsShopScreen_UpdateContextCanvasShards(spiritShardShopScreen);
});


INTERCEPT(17916336, bool, PlayerUberStateShards_Shard_Get_PurchasableInShop, (__int64 shard), {
	//Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$get_PurchasableInShop
	auto shardType = *(unsigned __int8*) (shard + 0x10);
	return true;
		  });

#pragma warning(disable: 4244)
BINDING(46026576, __int64, List_getItem, (__int64 list, int index)) //System.Collections.Generic.List<T>$$get_Item
BINDING(6113952, __int64, List_getCount, (__int64 list)) //System.Collections.Generic.List<T>$$get_Count
void forEachIndexed(__int64 list, std::function<void(__int64, int)> fun){
	if(!list)
		return;

	int size = List_getCount(list);
	for(int i = 0; i < size; i++)
	{
		fun(List_getItem(list, i), i);
	}
}
#pragma warning(default: 4244)

void initShardDescription(unsigned __int8 shard, __int64 spiritShardDescription){
	//Set purchase cost (normal):
	if(!isTwillenShard(shard))
		return;
	*(int*) (spiritShardDescription + 0x38) = csharp_lib->call<int, char>("TwillenShardCost", shard);

	auto upgradableAbilityList = *(__int64*) (spiritShardDescription + 0x40);
	forEachIndexed(upgradableAbilityList, [shard](__int64 upgradableAbilityLevel, int index)-> void{
		if(upgradableAbilityLevel)
		{
			//Set upgrade cost (normal):
			// *(int*)(upgradableAbilityLevel + 0x18) = 10;// 1337 * 2;
			//TODO: @Eiko: Get this from c# too
		}
    });
}

INTERCEPT(31416864, __int64, enumDictGetValue, (__int64 dict, unsigned __int8 enumKey, __int64 impl), {
	//EnumDictionary<ENUMTYPE, VALUETYPE>$$GetValue
	__int64 value = enumDictGetValue(dict, enumKey, impl);

    //Method$EnumDictionary<SpiritShardType, SpiritShardDescription>.GetValue()
    //Also, this should do like... nothing? But hey, it works, so I won't touch it until something breaks
    if(impl == *(__int64*) resolve_rva(71639080))
    {
    if(value)
	    initShardDescription(enumKey, value);
    }
    return value;
});

INTERCEPT(17914496, int, getCostForLevel, (__int64 shardPointer, int level), {
	//Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$GetCostForLevel - For whenever we want random upgrade costs
	return getCostForLevel(shardPointer, level);
});

INTERCEPT(17706592, bool, PlayerSpiritShards_HasShard, (__int64 spiritShards, unsigned __int8 shardType), {
	//PlayerSpiritShards$$HasShard
	if(is_in_shop_screen() && isTwillenShard(shardType))
	{
		return csharp_lib->call<bool, char>("TwillenBoughtShard", shardType);
		//TODO: @Eiko - Call C# using shardType, return true if the player has *purchased* the slot before
	}
	return PlayerSpiritShards_HasShard(spiritShards, shardType);
});


char getWeaponMasterAbilityItemGranted(__int64 weaponmasterItem){
	return  *(char*) ((*(__int64*) (weaponmasterItem + 0x10)) + 0x39);
}
char getWeaponMasterAbilityItemRequired(__int64 weaponmasterItem){
	return  *(char*) ((*(__int64*) (weaponmasterItem + 0x10)) + 0x38);
}


int purchases = 0;
bool hasBeenPurchasedBefore(__int64 weaponMasterItem){
	char grantedType = getWeaponMasterAbilityItemGranted(weaponMasterItem);
	char requiredType = getWeaponMasterAbilityItemRequired(weaponMasterItem);
	if((int) grantedType != -1)
		return csharp_lib->call<bool, char>("OpherBoughtWeapon", grantedType);
	if((int) requiredType == -1) // fast travel; 255, 255 -> 105, 0
		return csharp_lib->call<bool, char>("OpherBoughtWeapon", 105);
	return csharp_lib->call<bool, char>("OpherBoughtUpgrade", requiredType);
}

bool purchasable(__int64 weaponmasterItem){
	return !hasBeenPurchasedBefore(weaponmasterItem) && !WeaponmasterItem_get_IsLocked(weaponmasterItem) &&
		WeaponmasterItem_get_IsVisible(weaponmasterItem) && WeaponmasterItem_get_IsAffordable(weaponmasterItem);

}

INTERCEPT(5043504, bool, WeaponmasterItem_get_IsOwned, (__int64 item), {
	//WeaponmasterItem$$get_IsOwned
	if(is_in_shop_screen())
	{
		return hasBeenPurchasedBefore(item);
	}
	return WeaponmasterItem_get_IsOwned(item);
});

INTERCEPT(5046528, int, WeaponmasterItem_GetCostForLevel, (__int64 item, int level), {
	//WeaponmasterItem$$GetCostForLevel
	if(is_in_shop_screen())
	{
		char abilityType = getWeaponMasterAbilityItemGranted(item);
		//TODO: @Eiko - you know what to do
		if((int) abilityType == -1) {
			if((int) getWeaponMasterAbilityItemRequired(item) == -1) // fast travel; 255, 255 -> 105, 0
				return csharp_lib->call<int, char>("OpherWeaponCost", 105);
			return WeaponmasterItem_GetCostForLevel(item, level);
		}
		return csharp_lib->call<int, char>("OpherWeaponCost", abilityType);
	}
	return WeaponmasterItem_GetCostForLevel(item, level);
});


INTERCEPT(5044080, bool, WeaponmasterItem_TryPurchase, (__int64 pThis, __int64 hint, __int64 sounds, __int64 hints), {
	//WeaponmasterItem$$TryPurchase
	if(purchasable(pThis))
		return true;

	WeaponmasterItem_TryPurchase(pThis, hint, sounds, hints);
	return false;
});


INTERCEPT(11448960, __int64, SpellInventory_AddNewSpellToInventory, (__int64 inv, unsigned int equipmentType, bool add), {
	//SpellInventory$$AddNewSpellToInventory
	if(weaponmasterPurchaseInProgress)
		return 0;

	__int64 result = SpellInventory_AddNewSpellToInventory(inv, equipmentType, add);
	return result;
});
INTERCEPT(27750528, void, SerializedByteUberState_SetValue, (Moon_SerializedByteUberState_o* this_ptr, unsigned char value), {
    //Moon.SerializedByteUberState$$set_Value
    if (weaponmasterPurchaseInProgress)
        return;
    SerializedByteUberState_SetValue(this_ptr, value);
});


INTERCEPT(5045152, void, WeaponmasterItem_DoPurchase, (__int64 item, __int64 context), {
    //Weaponmasteritem$$DoPurchase
    weaponmasterPurchaseInProgress = true;
    auto abilityType = getWeaponMasterAbilityItemGranted(item);
    if ((int)abilityType != -1)
        csharp_lib->call<void, char>("OpherBuyWeapon", abilityType);
    else {
        char requiredType = getWeaponMasterAbilityItemRequired(item);
        if ((int)requiredType == -1) // fast travel; 255, 255 -> 105, 0
            csharp_lib->call<void, char>("OpherBuyWeapon", 105);
        else {
            csharp_lib->call<void, char>("OpherBuyUpgrade", requiredType);
            weaponmasterPurchaseInProgress = false; // so upgrade buying isn't no-opped
        }
    }
    WeaponmasterItem_DoPurchase(item, context);
    weaponmasterPurchaseInProgress = false;
});

//MapmakerScreen_o* mapMakerPtr = nullptr;
//bool pretendHandToHandNotCompleted = false;

INTERCEPT(6951632, int32_t, MapmakerItem__GetCost, (MapmakerItem_o* this_ptr), {
    return csharp_lib->call<int, int>("LupoUpgradeCost", this_ptr->UberState->UberIDOwnerSO_m_id->m_id);
});

bool preventMapSafeguard = false;

INTERCEPT(6954992, void, MapmakerScreen__Show, (MapmakerScreen_o* this_ptr), {
    preventMapSafeguard = true;
    MapmakerScreen__Show(this_ptr);
    preventMapSafeguard = false;
});
INTERCEPT(27748336, bool, Moon_SerializedBooleanUberState__get_Value, (Moon_SerializedBooleanUberState_o* this_ptr), {
    if (preventMapSafeguard && this_ptr->UberIDOwnerSO_m_id->m_id == 35534) {
        return false;
    }
    return Moon_SerializedBooleanUberState__get_Value(this_ptr);
});
