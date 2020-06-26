#include <interception_macros.h>
#include <dll_main.h>

#include <csharp_bridge.h>

#include <functional>
#include <set>

BINDING(9970752, bool, SeinCharacter_get_Active, (int64_t)) //SeinCharacter$$get_Active - Also used by stuff like IsActive, or get_IsShopOpen. It's a magical binding
BINDING(5047120, int64_t, WeaponmasterScreen_get_Instance, (int64_t)) //WeaponmasterScreen$$get_Instance
BINDING(10013424, bool, GameController_get_GameInTitleScreen, (GameController_o*)) //GameController$$get_GameInTitleScreen

BINDING(5042560, bool, WeaponmasterItem_get_IsLocked, (int64_t))       //WeaponmasterItem$$get_IsLocked
BINDING(4151120, bool, WeaponmasterItem_get_IsVisible, (int64_t))      //WeaponmasterItem$$get_IsVisible
BINDING(5043600, bool, WeaponmasterItem_get_IsAffordable, (int64_t))   //WeaponmasterItem$$get_IsAffordable

bool weaponmasterPurchaseInProgress = false;
const std::set<char> twillenShards{1, 2, 3, 5, 19, 22, 26, 40};
bool isTwillenShard(char shard){
	return twillenShards.find(shard) != twillenShards.end();
}


bool is_in_shop_screen(){
	if(g_game_controller_is_valid())
		return false;

	const auto  gameController = g_game_controller->static_fields->Instance;
	if(!gameController || GameController_get_GameInTitleScreen(gameController))
		return false;

	const auto weaponmasterScreen = WeaponmasterScreen_get_Instance(0);
	if(weaponmasterScreen && SeinCharacter_get_Active(weaponmasterScreen))
		return true;

    INLINE_STATIC_CLASS(71589120, SpiritShardsShopScreen_c*, shop_screen);
	if(shop_screen_is_valid())
	{
		const auto spiritShardsShopScreen = shop_screen->static_fields->Instance;
		if(spiritShardsShopScreen && SeinCharacter_get_Active((int64_t) spiritShardsShopScreen))
			return true;
	}

    INLINE_STATIC_CLASS(71472816, MapmakerScreen_c*, mapmaker_screen);
    if (shop_screen_is_valid()) {
        const auto mapmakerScreen = mapmaker_screen->static_fields->Instance;
        if (mapmakerScreen && SeinCharacter_get_Active((int64_t)mapmakerScreen))
            return true;
    }

	return false;
};

BINDING(14042272, int64_t, getSelectedShard, (int64_t spiritShardShopScreen))//SpiritShardsShopScreen$$get_SelectedSpiritShard
INTERCEPT(14054576, bool, canShardPurchase, (int64_t spiritShardShopScreen)) {
	//SpiritShardsShopScreen$$CanPurchase
	auto result = canShardPurchase(spiritShardShopScreen);
	return result;
}


BINDING(14046576, void, SpiritShardsShopScreen_UpdateContextCanvasShards, (int64_t))//SpiritShardsShopScreen$$UpdateContextCanvasShards
BINDING(17918112, void, PlayerUberStateShards_Shard_RunSetDirtyCallback, (int64_t))//Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$RunSetDirtyCallback

INTERCEPT(14055664, void, completeShardPurchase, (int64_t spiritShardShopScreen)) {
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
    auto shardType = *(uint8_t*)(shard + 0x10);
    csharp_bridge::twillen_buy_shard(static_cast<csharp_bridge::ShardType>(shardType));

	PlayerUberStateShards_Shard_RunSetDirtyCallback(shard);
	SpiritShardsShopScreen_UpdateContextCanvasShards(spiritShardShopScreen);
 }


INTERCEPT(17916336, bool, PlayerUberStateShards_Shard_Get_PurchasableInShop, (int64_t shard)) {
	//Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$get_PurchasableInShop
	auto shardType = *(unsigned __int8*) (shard + 0x10);
	return true;
}

#pragma warning(disable: 4244)
BINDING(46026576, int64_t, List_getItem, (int64_t list, int index)) //System.Collections.Generic.List<T>$$get_Item
BINDING(6113952, int64_t, List_getCount, (int64_t list)) //System.Collections.Generic.List<T>$$get_Count

void forEachIndexed(int64_t list, std::function<void(int64_t, int)> fun)
{
	if(!list)
		return;

	int size = List_getCount(list);
	for(int i = 0; i < size; i++)
	{
		fun(List_getItem(list, i), i);
	}
}
#pragma warning(default: 4244)

void initShardDescription(unsigned __int8 shard, int64_t spiritShardDescription)
{
	//Set purchase cost (normal):
	if(!isTwillenShard(shard))
		return;
	*(int*) (spiritShardDescription + 0x38) = csharp_bridge::twillen_shard_cost(static_cast<csharp_bridge::ShardType>(shard));

	auto upgradableAbilityList = *(int64_t*) (spiritShardDescription + 0x40);
    forEachIndexed(upgradableAbilityList, [shard](int64_t upgradableAbilityLevel, int index) -> void {
        if (upgradableAbilityLevel)
        {
            //Set upgrade cost (normal):
            // *(int*)(upgradableAbilityLevel + 0x18) = 10;// 1337 * 2;
            //TODO: @Eiko: Get this from c# too
        }
    });
}

INTERCEPT(31416864, int64_t, enumDictGetValue, (int64_t dict, unsigned __int8 enumKey, int64_t impl)) {
	//EnumDictionary<ENUMTYPE, VALUETYPE>$$GetValue
	int64_t value = enumDictGetValue(dict, enumKey, impl);

    //Method$EnumDictionary<SpiritShardType, SpiritShardDescription>.GetValue()
    //Also, this should do like... nothing? But hey, it works, so I won't touch it until something breaks
    if(impl == *(int64_t*) resolve_rva(71639080))
    {
    if(value)
	    initShardDescription(enumKey, value);
    }
    return value;
}

INTERCEPT(17914496, int, getCostForLevel, (int64_t shardPointer, int level)) {
	//Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$GetCostForLevel - For whenever we want random upgrade costs
	return getCostForLevel(shardPointer, level);
}

INTERCEPT(17706592, bool, PlayerSpiritShards_HasShard, (int64_t spiritShards, unsigned __int8 shardType)) {
	//PlayerSpiritShards$$HasShard
	if(is_in_shop_screen() && isTwillenShard(shardType))
	{
		return csharp_bridge::twillen_bought_shard(static_cast<csharp_bridge::ShardType>(shardType));
		//TODO: @Eiko - Call C# using shardType, return true if the player has *purchased* the slot before
	}
	return PlayerSpiritShards_HasShard(spiritShards, shardType);
}


char getWeaponMasterAbilityItemGranted(int64_t weaponmasterItem)
{
	return  *(char*) ((*(int64_t*) (weaponmasterItem + 0x10)) + 0x39);
}

char getWeaponMasterAbilityItemRequired(int64_t weaponmasterItem)
{
	return  *(char*) ((*(int64_t*) (weaponmasterItem + 0x10)) + 0x38);
}

int purchases = 0;

bool hasBeenPurchasedBefore(int64_t weaponMasterItem)
{
	char grantedType = getWeaponMasterAbilityItemGranted(weaponMasterItem);
	char requiredType = getWeaponMasterAbilityItemRequired(weaponMasterItem);
	if((int) grantedType != -1)
		return csharp_bridge::opher_bought_weapon(static_cast<csharp_bridge::AbilityType>(grantedType));

	if((int) requiredType == -1) // fast travel; 255, 255 -> 105, 0
		return csharp_bridge::opher_bought_weapon(static_cast<csharp_bridge::AbilityType>(105));

	return csharp_bridge::opher_bought_upgrade(static_cast<csharp_bridge::AbilityType>(requiredType));
}

bool purchasable(int64_t weaponmasterItem)
{
	return !hasBeenPurchasedBefore(weaponmasterItem) && !WeaponmasterItem_get_IsLocked(weaponmasterItem) &&
		WeaponmasterItem_get_IsVisible(weaponmasterItem) && WeaponmasterItem_get_IsAffordable(weaponmasterItem);

}

INTERCEPT(5043504, bool, WeaponmasterItem_get_IsOwned, (int64_t item)) {
	//WeaponmasterItem$$get_IsOwned
	if(is_in_shop_screen())
	{
		return hasBeenPurchasedBefore(item);
	}
	return WeaponmasterItem_get_IsOwned(item);
}

INTERCEPT(5046528, int, WeaponmasterItem_GetCostForLevel, (int64_t item, int level)) {
	//WeaponmasterItem$$GetCostForLevel
	if(is_in_shop_screen())
	{
		auto abilityType = static_cast<int>(getWeaponMasterAbilityItemGranted(item));
		//TODO: @Eiko - you know what to do
		if(abilityType == -1)
        {
			if((int) getWeaponMasterAbilityItemRequired(item) == -1) // fast travel; 255, 255 -> 105, 0
				return csharp_bridge::opher_weapon_cost(static_cast<csharp_bridge::AbilityType>(105));

			return WeaponmasterItem_GetCostForLevel(item, level);
		}

		return csharp_bridge::opher_weapon_cost(static_cast<csharp_bridge::AbilityType>(abilityType));
	}

	return WeaponmasterItem_GetCostForLevel(item, level);
}


INTERCEPT(5044080, bool, WeaponmasterItem_TryPurchase, (int64_t pThis, int64_t hint, int64_t sounds, int64_t hints)) {
	//WeaponmasterItem$$TryPurchase
	if(purchasable(pThis))
		return true;

	WeaponmasterItem_TryPurchase(pThis, hint, sounds, hints);
	return false;
}


INTERCEPT(11448960, int64_t, SpellInventory_AddNewSpellToInventory, (int64_t inv, unsigned int equipmentType, bool add)) {
	//SpellInventory$$AddNewSpellToInventory
	if(weaponmasterPurchaseInProgress)
		return 0;

	int64_t result = SpellInventory_AddNewSpellToInventory(inv, equipmentType, add);
	return result;
}

INTERCEPT(27750528, void, SerializedByteUberState_SetValue, (Moon_SerializedByteUberState_o* this_ptr, unsigned char value)) {
    //Moon.SerializedByteUberState$$set_Value
    if (weaponmasterPurchaseInProgress)
        return;

    SerializedByteUberState_SetValue(this_ptr, value);
}


INTERCEPT(5045152, void, WeaponmasterItem_DoPurchase, (int64_t item, int64_t context)) {
    //Weaponmasteritem$$DoPurchase
    //Do the rando purchase /after/ rollback, eiko ;3
    auto abilityType = getWeaponMasterAbilityItemGranted(item);
    if ((int)abilityType != -1)
    {
        csharp_bridge::opher_buy_weapon(static_cast<csharp_bridge::AbilityType>(abilityType));
        weaponmasterPurchaseInProgress = true;
    }
    else
    {
        char requiredType = getWeaponMasterAbilityItemRequired(item);
        if ((int)requiredType == -1) // fast travel; 255, 255 -> 105, 0
        {
            csharp_bridge::opher_buy_weapon(static_cast<csharp_bridge::AbilityType>(105));
            weaponmasterPurchaseInProgress = true;
        }
        else
        {
            csharp_bridge::opher_buy_upgrade(static_cast<csharp_bridge::AbilityType>(requiredType));
            weaponmasterPurchaseInProgress = false; // so upgrade buying isn't no-opped
        }
    }

    WeaponmasterItem_DoPurchase(item, context);
    weaponmasterPurchaseInProgress = false;
}

//MapmakerScreen_o* mapMakerPtr = nullptr;
//bool pretendHandToHandNotCompleted = false;

INTERCEPT(6951632, int32_t, MapmakerItem__GetCost, (MapmakerItem_o* this_ptr)) {
    return csharp_bridge::lupo_upgrade_cost(this_ptr->UberState->UberIDOwnerSO_m_id->m_id);
}

bool preventMapSafeguard = false;

INTERCEPT(6954992, void, MapmakerScreen__Show, (MapmakerScreen_o* this_ptr)) {
    preventMapSafeguard = true;
    MapmakerScreen__Show(this_ptr);
    preventMapSafeguard = false;
}

INTERCEPT(27748336, bool, Moon_SerializedBooleanUberState__get_Value, (Moon_SerializedBooleanUberState_o* this_ptr)) {
    if (preventMapSafeguard && this_ptr->UberIDOwnerSO_m_id->m_id == 35534)
        return false;

    return Moon_SerializedBooleanUberState__get_Value(this_ptr);
}
