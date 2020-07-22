#include <interception_macros.h>
#include <dll_main.h>
#include <il2cpp_helpers.h>

#include <csharp_bridge.h>

#include <functional>
#include <set>

namespace
{
    BINDING(9970752, bool, SeinCharacter_get_Active, (int64_t)) //SeinCharacter$$get_Active - Also used by stuff like IsActive, or get_IsShopOpen. It's a magical binding
        BINDING(5047120, int64_t, WeaponmasterScreen_get_Instance, (int64_t)) //WeaponmasterScreen$$get_Instance
        BINDING(10013424, bool, GameController_get_GameInTitleScreen, (app::GameController*)) //GameController$$get_GameInTitleScreen

        BINDING(5042560, bool, WeaponmasterItem_get_IsLocked, (app::WeaponmasterItem*))       //WeaponmasterItem$$get_IsLocked
        BINDING(4151120, bool, WeaponmasterItem_get_IsVisible, (app::WeaponmasterItem*))      //WeaponmasterItem$$get_IsVisible
        BINDING(5043600, bool, WeaponmasterItem_get_IsAffordable, (app::WeaponmasterItem*))   //WeaponmasterItem$$get_IsAffordable

        bool weaponmasterPurchaseInProgress = false;
    const std::set<char> twillenShards{ 1, 2, 3, 5, 19, 22, 26, 40 };
    bool isTwillenShard(char shard) {
        return twillenShards.find(shard) != twillenShards.end();
    }

    bool is_in_shop_screen() {
        const auto  gameController = get_game_controller();
        if (!gameController || GameController_get_GameInTitleScreen(gameController))
            return false;

        const auto weaponmasterScreen = WeaponmasterScreen_get_Instance(0);
        if (weaponmasterScreen && SeinCharacter_get_Active(weaponmasterScreen))
            return true;

        auto shop_screen = il2cpp::get_class<app::SpiritShardsShopScreen__Class>("", "SpiritShardsShopScreen");
        const auto spiritShardsShopScreen = shop_screen->static_fields->Instance;
        if (spiritShardsShopScreen && SeinCharacter_get_Active((int64_t)spiritShardsShopScreen))
            return true;

        auto mapmaker_screen = il2cpp::get_class<app::MapmakerScreen__Class>("", "MapmakerScreen");
        const auto mapmakerScreen = mapmaker_screen->static_fields->Instance;
        if (mapmakerScreen && SeinCharacter_get_Active((int64_t)mapmakerScreen))
            return true;

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
        bool first = *(bool*)(shard + 24);
        bool second = *(bool*)(shard + 25);

        completeShardPurchase(spiritShardShopScreen);

        // rollback vanilla purchase 
        *(bool*)(shard + 24) = first;
        *(bool*)(shard + 25) = second;

        // do the rando purchase /after/ rollback, xem ;3
        auto shardType = *(uint8_t*)(shard + 0x10);
        csharp_bridge::twillen_buy_shard(static_cast<csharp_bridge::ShardType>(shardType));

        PlayerUberStateShards_Shard_RunSetDirtyCallback(shard);
        SpiritShardsShopScreen_UpdateContextCanvasShards(spiritShardShopScreen);
    }


    INTERCEPT(17916336, bool, PlayerUberStateShards_Shard_Get_PurchasableInShop, (int64_t shard)) {
        //Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$get_PurchasableInShop
        auto shardType = *(unsigned __int8*)(shard + 0x10);
        return true;
    }

    void forEachIndexed(int64_t list, std::function<void(int64_t, int)> fun)
    {
        auto ptr = reinterpret_cast<void*>(list);
        if (ptr == nullptr)
            return;

        int size = static_cast<int>(il2cpp::invoke<app::Int64__Boxed>(ptr, "get_Count")->fields);
        for (int i = 0; i < size; i++)
            fun(reinterpret_cast<int64_t>(il2cpp::invoke<>(ptr, "get_Item", &i)), i);
    }

    void initShardDescription(unsigned __int8 shard, int64_t spiritShardDescription)
    {
        //Set purchase cost (normal):
        if (!isTwillenShard(shard))
            return;
        *(int*)(spiritShardDescription + 0x38) = csharp_bridge::twillen_shard_cost(static_cast<csharp_bridge::ShardType>(shard));

        auto upgradableAbilityList = *(int64_t*)(spiritShardDescription + 0x40);
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
        if (impl == *(int64_t*)intercept::resolve_rva(71639080))
            if (value)
                initShardDescription(enumKey, value);

        return value;
    }

    INTERCEPT(17914496, int, getCostForLevel, (int64_t shardPointer, int level)) {
        //Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$GetCostForLevel - For whenever we want random upgrade costs
        return getCostForLevel(shardPointer, level);
    }

    INTERCEPT(17706592, bool, PlayerSpiritShards_HasShard, (int64_t spiritShards, unsigned __int8 shardType)) {
        //PlayerSpiritShards$$HasShard
        if (is_in_shop_screen() && isTwillenShard(shardType))
        {
            return csharp_bridge::twillen_bought_shard(static_cast<csharp_bridge::ShardType>(shardType));
            //TODO: @Eiko - Call C# using shardType, return true if the player has *purchased* the slot before
        }
        return PlayerSpiritShards_HasShard(spiritShards, shardType);
    }

    int purchases = 0;

    bool hasBeenPurchasedBefore(app::WeaponmasterItem* item)
    {
        app::AbilityType__Enum grantedType = item->fields.Upgrade->fields.AcquiredAbilityType;
        app::AbilityType__Enum requiredType = item->fields.Upgrade->fields.RequiredAbility;
        if (grantedType != app::AbilityType__Enum_None)
            return csharp_bridge::opher_bought_weapon(grantedType);

        if (requiredType == app::AbilityType__Enum_None) // fast travel; 255, 255 -> 105, 0
            return csharp_bridge::opher_bought_weapon(app::AbilityType__Enum_TeleportSpell);

        return csharp_bridge::opher_bought_upgrade(requiredType);
    }

    bool purchasable(app::WeaponmasterItem* weaponmasterItem)
    {
        return !hasBeenPurchasedBefore(weaponmasterItem) && !WeaponmasterItem_get_IsLocked(weaponmasterItem) &&
            WeaponmasterItem_get_IsVisible(weaponmasterItem) && WeaponmasterItem_get_IsAffordable(weaponmasterItem);

    }

    INTERCEPT(5043504, bool, WeaponmasterItem_get_IsOwned, (app::WeaponmasterItem* item)) {
        //WeaponmasterItem$$get_IsOwned
        if (is_in_shop_screen())
        {
            return hasBeenPurchasedBefore(item);
        }
        return WeaponmasterItem_get_IsOwned(item);
    }

    INTERCEPT(5046528, int, WeaponmasterItem_GetCostForLevel, (app::WeaponmasterItem* item, int level)) {
        //WeaponmasterItem$$GetCostForLevel
        if (is_in_shop_screen())
        {
            auto abilityType = item->fields.Upgrade->fields.AcquiredAbilityType;
            //TODO: @Eiko - you know what to do
            if (abilityType == app::AbilityType__Enum_None)
            {
                if (item->fields.Upgrade->fields.RequiredAbility == app::AbilityType__Enum_None) // fast travel; 255, 255 -> 105, 0
                    return csharp_bridge::opher_weapon_cost(app::AbilityType__Enum_TeleportSpell);

                return WeaponmasterItem_GetCostForLevel(item, level);
            }

            return csharp_bridge::opher_weapon_cost(abilityType);
        }

        return WeaponmasterItem_GetCostForLevel(item, level);
    }


    INTERCEPT(5044080, bool, WeaponmasterItem_TryPurchase, (app::WeaponmasterItem* pThis, int64_t hint, int64_t sounds, int64_t hints)) {
        //WeaponmasterItem$$TryPurchase
        if (purchasable(pThis))
            return true;

        WeaponmasterItem_TryPurchase(pThis, hint, sounds, hints);
        return false;
    }


    INTERCEPT(11448960, int64_t, SpellInventory_AddNewSpellToInventory, (int64_t inv, unsigned int equipmentType, bool add)) {
        //SpellInventory$$AddNewSpellToInventory
        if (weaponmasterPurchaseInProgress)
            return 0;

        int64_t result = SpellInventory_AddNewSpellToInventory(inv, equipmentType, add);
        return result;
    }

    INTERCEPT(27750528, void, SerializedByteUberState_SetValue, (app::SerializedByteUberState* this_ptr, uint8_t value)) {
        //Moon.SerializedByteUberState$$set_Value
        if (weaponmasterPurchaseInProgress)
            return;

        SerializedByteUberState_SetValue(this_ptr, value);
    }

    INTERCEPT(5045152, void, WeaponmasterItem_DoPurchase, (app::WeaponmasterItem* item, int64_t context)) {
        //Weaponmasteritem$$DoPurchase
        //Do the rando purchase /after/ rollback, eiko ;3
        auto abilityType = item->fields.Upgrade->fields.AcquiredAbilityType;
        if (abilityType != app::AbilityType__Enum_None)
        {
            csharp_bridge::opher_buy_weapon(abilityType);
            weaponmasterPurchaseInProgress = true;
        }
        else
        {
            auto requiredType = item->fields.Upgrade->fields.RequiredAbility;
            if (requiredType == app::AbilityType__Enum_None) // fast travel; 255, 255 -> 105, 0
            {
                csharp_bridge::opher_buy_weapon(app::AbilityType__Enum_TeleportSpell);
                weaponmasterPurchaseInProgress = true;
            }
            else
            {
                csharp_bridge::opher_buy_upgrade(requiredType);
                weaponmasterPurchaseInProgress = false; // so upgrade buying isn't no-opped
            }
        }

        WeaponmasterItem_DoPurchase(item, context);
        weaponmasterPurchaseInProgress = false;
    }

    //MapmakerScreen* mapMakerPtr = nullptr;
    //bool pretendHandToHandNotCompleted = false;

    INTERCEPT(6951632, int32_t, MapmakerItem__GetCost, (app::MapmakerItem* this_ptr)) {
        return csharp_bridge::lupo_upgrade_cost(this_ptr->fields.UberState->fields._.m_id->fields.m_id);
    }

    bool preventMapSafeguard = false;

    INTERCEPT(6954992, void, MapmakerScreen__Show, (app::MapmakerScreen* this_ptr)) {
        preventMapSafeguard = true;
        MapmakerScreen__Show(this_ptr);
        preventMapSafeguard = false;
    }

    INTERCEPT(27748336, bool, Moon_SerializedBooleanUberState__get_Value, (app::SerializedBooleanUberState* this_ptr)) {
        if (preventMapSafeguard && this_ptr->fields._.m_id->fields.m_id == 35534)
            return false;

        return Moon_SerializedBooleanUberState__get_Value(this_ptr);
    }

    constexpr float NORMAL_PURCHASE_TIME = 0.4f;
    constexpr float FAST_PURCHASE_TIME = 0.01f;

    IL2CPP_INTERCEPT(, PurchaseThingScreen, void, PurchaseInput, (app::PurchaseThingScreen* this_ptr)) {
        this_ptr->fields.PurchaseTime = NORMAL_PURCHASE_TIME;
        auto input_cmd = il2cpp::get_nested_class<app::Input_Cmd__Class>("Core", "Input", "Cmd");
        if (input_cmd->static_fields->DialogueOption1 != nullptr &&
            input_cmd->static_fields->DialogueOption1->fields.IsPressed)
            this_ptr->fields.PurchaseTime = FAST_PURCHASE_TIME;

        PurchaseThingScreen::PurchaseInput(this_ptr);
    }

    app::MessageProvider* create_message_provider(Il2CppString* message)
    {
        auto provider = il2cpp::unity::create_scriptable_object<app::TranslatedMessageProvider>("", "TranslatedMessageProvider");
        il2cpp::invoke(provider, ".ctor");
        // TODO: Add input provider and message provider with different color.

        auto item = il2cpp::create_object<app::TranslatedMessageProvider_MessageItem>("", "TranslatedMessageProvider", "MessageItem");
        item->fields.English = reinterpret_cast<app::String*>(message);
        item->fields.Sound = nullptr;
        item->fields.WWiseEvent = nullptr;
        item->fields.Emotion = app::EmotionType__Enum_Neutral;
        il2cpp::invoke(provider->fields.Messages, "Add", item);
        return reinterpret_cast<app::MessageProvider*>(provider);
    }

    struct ShopItem
    {
        uint32_t name;
        uint32_t description;
        bool uses_energy;
    };

    std::unordered_map<uint16_t, ShopItem> opher_overrides;
    std::unordered_map<uint8_t, ShopItem> twillen_overrides;
    std::unordered_map<uint64_t, ShopItem> lupo_overrides;

    uint16_t get_key(app::WeaponmasterItem* item)
    {
        auto acquired = static_cast<uint16_t>(item->fields.Upgrade->fields.AcquiredAbilityType);
        auto required = static_cast<uint16_t>(item->fields.Upgrade->fields.RequiredAbility) << 8;
        return acquired | required;
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, app::MessageProvider*, get_ItemName, (app::WeaponmasterItem* this_ptr)) {
        auto key = get_key(this_ptr);
        auto it = opher_overrides.find(key);
        if (it == opher_overrides.end())
            return WeaponmasterItem::get_ItemName(this_ptr);
        else
            return reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, app::MessageProvider*, get_ItemDescription, (app::WeaponmasterItem* this_ptr)) {
        auto key = get_key(this_ptr);
        auto it = opher_overrides.find(key);
        if (it == opher_overrides.end())
            return WeaponmasterItem::get_ItemDescription(this_ptr);
        else
            return reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
    }

    // When does this happen?
    IL2CPP_INTERCEPT(, WeaponmasterItem, app::MessageProvider*, get_ItemNextLevelDescription, (app::WeaponmasterItem* this_ptr)) {
        return WeaponmasterItem::get_ItemNextLevelDescription(this_ptr);
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, get_UsesEnergy, (app::WeaponmasterItem* this_ptr)) {
        auto key = get_key(this_ptr);
        auto it = opher_overrides.find(key);
        if (it == opher_overrides.end())
            return WeaponmasterItem::get_UsesEnergy(this_ptr);
        else
            return it->second.uses_energy;
    }

    IL2CPP_INTERCEPT(, MapmakerUIItem, void, UpdateMapmakerItem, (app::MapmakerUIItem* this_ptr, app::MapmakerItem* item)) {
        auto state_id = item->fields.UberState->fields._.m_id->fields.m_id;
        auto group_id = item->fields.UberState->fields.Group->fields._.m_id->fields.m_id;
        auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
        auto it = lupo_overrides.find(key);
        if (it != lupo_overrides.end())
        {
            item->fields.Name = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
            item->fields.Description = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
        }

        MapmakerUIItem::UpdateMapmakerItem(this_ptr, item);
    }

    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetTexture, (app::Renderer* renderer, app::UberShaderProperty_Texture__Enum prop, app::Texture* texture));
    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox* this_ptr, app::String* replace, app::String* with));
    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_Upgradable, (app::PlayerUberStateShards_Shard* this_ptr));
    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_UpgradeAffordable, (app::PlayerUberStateShards_Shard* this_ptr));
    IL2CPP_BINDING(, SpellUIShardEquipStatus, void, SetEquipment, (app::SpellUIShardEquipStatus* this_ptr, app::EquipmentType__Enum type));

    bool overwrite_shard_text = false;
    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, UpdateContextCanvasShards, (app::SpiritShardsShopScreen* this_ptr)) {
        overwrite_shard_text = true;
        SpiritShardsShopScreen::UpdateContextCanvasShards(this_ptr);
        overwrite_shard_text = false;
    }

    IL2CPP_BINDING(, SpiritShardUIShardDetails, void, UpdateUpgradeDetails, (app::SpiritShardUIShardDetails* this_ptr));
    IL2CPP_INTERCEPT(, SpiritShardUIShardDetails, void, UpdateDetails, (app::SpiritShardUIShardDetails* this_ptr)) {
        app::MessageProvider* name_provider = nullptr;
        app::MessageProvider* description_provider = nullptr;

        auto item = this_ptr->fields.m_item;
        auto type = item->fields.m_type;
        if (overwrite_shard_text)
        {
            auto it = twillen_overrides.find(static_cast<uint8_t>(type));
            if (it != twillen_overrides.end())
            {
                name_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
                description_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
            }
        }

        auto settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;

        auto description = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &type);
        auto renderer_components = il2cpp::unity::get_components<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
        auto renderer = renderer_components[0];
        if (!(item->fields.m_gained || !this_ptr->fields.RequireOwned))
            type = app::SpiritShardType__Enum_None;

        if (settings != nullptr)
        {
            auto empty_str = reinterpret_cast<app::String*>(il2cpp::string_new(""));
            auto icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &type);
            UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, reinterpret_cast<app::Texture*>(icons->fields.HeaderIcon));

            auto message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.NameGO, "", "MessageBox");
            auto name_box = message_box_components[0];

            message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.DescriptionGO, "", "MessageBox");
            auto description_box = message_box_components[0];

            if (type == 0)
            {
                name_box->fields.MessageProvider = this_ptr->fields.LockedName;
                description_box->fields.MessageProvider = this_ptr->fields.LockedDescription;
            }
            else
            {
                name_box->fields.MessageProvider = name_provider == nullptr ? description->fields.Name : name_provider;
                auto property_levels = description->fields.UpgradablePropertyLevels;
                auto property_level = property_levels->fields._items->vector[item->fields.m_level];
                description_box->fields.MessageProvider = description_provider == nullptr ? property_level->fields.Description : description_provider;
            }

            MessageBox::RefreshText(name_box, empty_str, empty_str);
            MessageBox::RefreshText(description_box, empty_str, empty_str);
            SpiritShardUIShardDetails::UpdateUpgradeDetails(this_ptr);

            auto active = false;
            il2cpp::invoke(this_ptr->fields.LevelNextGO, "SetActive", &active);
            il2cpp::invoke(this_ptr->fields.LevelNextDescriptionGO, "SetActive", &active);

            if (this_ptr->fields.ShowEquipStatus)
                SpellUIShardEquipStatus::SetEquipment(this_ptr->fields.m_equipStatus, app::EquipmentType__Enum_None);
        }
    }

    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, Show, (app::SpiritShardsShopScreen* this_ptr)) {
        csharp_bridge::update_shop_data();
        SpiritShardsShopScreen::Show(this_ptr);
    }

    IL2CPP_INTERCEPT(, ShopkeeperScreen, void, Show, (app::ShopkeeperScreen* this_ptr)) {
        csharp_bridge::update_shop_data();
        ShopkeeperScreen::Show(this_ptr);
    }

    IL2CPP_INTERCEPT(, MapmakerScreen, void, Show, (app::MapmakerScreen* this_ptr)) {
        csharp_bridge::update_shop_data();
        MapmakerScreen::Show(this_ptr);
    }
}

INJECT_C_DLLEXPORT void set_opher_item(int acquired, int required, const wchar_t* name, const wchar_t* description, bool uses_energy)
{
    auto key = static_cast<uint16_t>(acquired & 0xFF) | (static_cast<uint16_t>(required & 0xFF) << 8);
    auto it = opher_overrides.find(key);
    if (it != opher_overrides.end())
    {
        il2cpp::gchandle_free(it->second.name);
        il2cpp::gchandle_free(it->second.description);
    }

    auto& item = opher_overrides[key];
    auto provider = create_message_provider(il2cpp::string_new(name));
    item.name = il2cpp::gchandle_new(provider, false);
    provider = create_message_provider(il2cpp::string_new(description));
    item.description = il2cpp::gchandle_new(provider, false);
    item.uses_energy = uses_energy;
}

INJECT_C_DLLEXPORT void set_twillen_item(int shard, const wchar_t* name, const wchar_t* description)
{
    auto key = static_cast<uint8_t>(shard);
    auto it = twillen_overrides.find(key);
    if (it != twillen_overrides.end())
    {
        il2cpp::gchandle_free(it->second.name);
        il2cpp::gchandle_free(it->second.description);
    }

    auto& item = twillen_overrides[key];
    auto provider = create_message_provider(il2cpp::string_new(name));
    item.name = il2cpp::gchandle_new(provider, false);
    provider = create_message_provider(il2cpp::string_new(description));
    item.description = il2cpp::gchandle_new(provider, false);
}

INJECT_C_DLLEXPORT void set_lupo_item(int group_id, int state_id, const wchar_t* name, const wchar_t* description)
{
    auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
    auto it = lupo_overrides.find(key);
    if (it != lupo_overrides.end())
    {
        il2cpp::gchandle_free(it->second.name);
        il2cpp::gchandle_free(it->second.description);
    }

    auto& item = lupo_overrides[key];
    auto provider = create_message_provider(il2cpp::string_new(name));
    item.name = il2cpp::gchandle_new(provider, false);
    provider = create_message_provider(il2cpp::string_new(description));
    item.description = il2cpp::gchandle_new(provider, false);
}
