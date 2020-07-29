#include <dll_main.h>

#include <csharp_bridge.h>
#include <uber_states/uber_state_manager.h>

#include <Il2CppModLoader/il2cpp_internals.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <functional>
#include <set>

using namespace modloader;

namespace
{
    BINDING(9970752, bool, SeinCharacter_get_Active, (int64_t));
    //SeinCharacter$$get_Active - Also used by stuff like IsActive, or get_IsShopOpen. It's a magical binding
    BINDING(5047120, int64_t, WeaponmasterScreen_get_Instance, (int64_t)); //WeaponmasterScreen$$get_Instance
    BINDING(10013424, bool, GameController_get_GameInTitleScreen, (app::GameController*)); //GameController$$get_GameInTitleScreen

    BINDING(5042560, bool, WeaponmasterItem_get_IsLocked, (app::WeaponmasterItem*)); //WeaponmasterItem$$get_IsLocked
    BINDING(4151120, bool, WeaponmasterItem_get_IsVisible, (app::WeaponmasterItem*)); //WeaponmasterItem$$get_IsVisible
    BINDING(5043600, bool, WeaponmasterItem_get_IsAffordable, (app::WeaponmasterItem*)); //WeaponmasterItem$$get_IsAffordable

    bool weaponmaster_purchase_in_progress = false;
    const std::set<char> TWILLEN_SHARDS{ 1, 2, 3, 5, 19, 22, 26, 40 };

    bool is_twillen_shard(const uint8_t shard)
    {
        return TWILLEN_SHARDS.find(shard) != TWILLEN_SHARDS.end();
    }

    bool is_in_shop_screen()
    {
        const auto gameController = get_game_controller();
        if (!gameController || GameController_get_GameInTitleScreen(gameController))
            return false;

        const auto weaponmasterScreen = WeaponmasterScreen_get_Instance(0);
        if (weaponmasterScreen && SeinCharacter_get_Active(weaponmasterScreen))
            return true;

        auto* const shop_screen = il2cpp::get_class<app::SpiritShardsShopScreen__Class>("", "SpiritShardsShopScreen");
        const auto spiritShardsShopScreen = shop_screen->static_fields->Instance;
        if (spiritShardsShopScreen && SeinCharacter_get_Active(reinterpret_cast<int64_t>(spiritShardsShopScreen)))
            return true;

        auto* const mapmaker_screen_class = il2cpp::get_class<app::MapmakerScreen__Class>("", "MapmakerScreen");
        auto* const mapmaker_screen = mapmaker_screen_class->static_fields->Instance;
        if (mapmaker_screen && SeinCharacter_get_Active(reinterpret_cast<int64_t>(mapmaker_screen)))
            return true;

        return false;
    };

    BINDING(14042272, int64_t, getSelectedShard, (int64_t spiritShardShopScreen)) //SpiritShardsShopScreen$$get_SelectedSpiritShard
        INTERCEPT(14054576, bool, canShardPurchase, (int64_t spiritShardShopScreen))
    {
        //SpiritShardsShopScreen$$CanPurchase
        const auto result = canShardPurchase(spiritShardShopScreen);
        return result;
    }


    BINDING(14046576, void, SpiritShardsShopScreen_UpdateContextCanvasShards, (int64_t)) //SpiritShardsShopScreen$$UpdateContextCanvasShards
        BINDING(17918112, void, PlayerUberStateShards_Shard_RunSetDirtyCallback, (int64_t))
        //Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$RunSetDirtyCallback

        INTERCEPT(14055664, void, completeShardPurchase, (int64_t spiritShardShopScreen))
    {
        //SpiritShardsShopScreen$$CompletePurchase
        //save shard new/purchased state
        const auto shard = getSelectedShard(spiritShardShopScreen);
        const auto first = *reinterpret_cast<bool*>(shard + 24);
        const auto second = *reinterpret_cast<bool*>(shard + 25);

        completeShardPurchase(spiritShardShopScreen);

        // rollback vanilla purchase 
        *reinterpret_cast<bool*>(shard + 24) = first;
        *reinterpret_cast<bool*>(shard + 25) = second;

        // do the rando purchase /after/ rollback, xem ;3
        auto shard_type = *reinterpret_cast<uint8_t*>(shard + 0x10);
        csharp_bridge::twillen_buy_shard(static_cast<csharp_bridge::ShardType>(shard_type));

        PlayerUberStateShards_Shard_RunSetDirtyCallback(shard);
        SpiritShardsShopScreen_UpdateContextCanvasShards(spiritShardShopScreen);
    }


    INTERCEPT(17916336, bool, PlayerUberStateShards_Shard_Get_PurchasableInShop, (int64_t shard))
    {
        //Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$get_PurchasableInShop
        auto shardType = *reinterpret_cast<unsigned __int8*>(shard + 0x10);
        return true;
    }

    void for_each_indexed(const int64_t list, const std::function<void(int64_t, int)> fun)
    {
        const auto ptr = reinterpret_cast<void*>(list);
        if (ptr == nullptr)
            return;

        const int size = static_cast<int>(il2cpp::invoke<app::Int64__Boxed>(ptr, "get_Count")->fields);
        for (int i = 0; i < size; i++)
            fun(reinterpret_cast<int64_t>(il2cpp::invoke<>(ptr, "get_Item", &i)), i);
    }

    void initShardDescription(unsigned __int8 shard, int64_t spiritShardDescription)
    {
        //Set purchase cost (normal):
        if (!is_twillen_shard(shard))
            return;
        *reinterpret_cast<int*>(spiritShardDescription + 0x38) = csharp_bridge::twillen_shard_cost(static_cast<csharp_bridge::ShardType>(shard));

        const auto upgradable_ability_list = *reinterpret_cast<int64_t*>(spiritShardDescription + 0x40);
        for_each_indexed(
            upgradable_ability_list,
            [shard](int64_t upgradableAbilityLevel, int index) -> void
        {
            if (upgradableAbilityLevel)
            {
                //Set upgrade cost (normal):
                // *(int*)(upgradableAbilityLevel + 0x18) = 10;// 1337 * 2;
                //TODO: @Eiko: Get this from c# too
            }
        }
        );
    }

    INTERCEPT(31416864, int64_t, enumDictGetValue, (int64_t dict, unsigned __int8 enumKey, int64_t impl))
    {
        //EnumDictionary<ENUMTYPE, VALUETYPE>$$GetValue
        const int64_t value = enumDictGetValue(dict, enumKey, impl);

        //Method$EnumDictionary<SpiritShardType, SpiritShardDescription>.GetValue()
        //Also, this should do like... nothing? But hey, it works, so I won't touch it until something breaks
        if (impl == *reinterpret_cast<int64_t*>(intercept::resolve_rva(71639080)))
            if (value)
                initShardDescription(enumKey, value);

        return value;
    }

    INTERCEPT(17914496, int, getCostForLevel, (int64_t shardPointer, int level))
    {
        //Moon.uberSerializationWisp.PlayerUberStateShards.Shard$$GetCostForLevel - For whenever we want random upgrade costs
        return getCostForLevel(shardPointer, level);
    }

    INTERCEPT(17706592, bool, PlayerSpiritShards_HasShard, (int64_t spiritShards, unsigned __int8 shardType))
    {
        //PlayerSpiritShards$$HasShard
        if (is_in_shop_screen() && is_twillen_shard(shardType))
        {
            return csharp_bridge::twillen_bought_shard(static_cast<csharp_bridge::ShardType>(shardType));
            //TODO: @Eiko - Call C# using shardType, return true if the player has *purchased* the slot before
        }
        return PlayerSpiritShards_HasShard(spiritShards, shardType);
    }

    int purchases = 0;

    bool hasBeenPurchasedBefore(app::WeaponmasterItem* item)
    {
        const app::AbilityType__Enum granted_type = item->fields.Upgrade->fields.AcquiredAbilityType;
        const app::AbilityType__Enum required_type = item->fields.Upgrade->fields.RequiredAbility;
        if (granted_type != app::AbilityType__Enum_None)
            return csharp_bridge::opher_bought_weapon(granted_type);

        if (required_type == app::AbilityType__Enum_None) // fast travel; 255, 255 -> 105, 0
            return csharp_bridge::opher_bought_weapon(app::AbilityType__Enum_TeleportSpell);

        return csharp_bridge::opher_bought_upgrade(required_type);
    }

    bool purchasable(app::WeaponmasterItem* weaponmasterItem)
    {
        return !hasBeenPurchasedBefore(weaponmasterItem) && !WeaponmasterItem_get_IsLocked(weaponmasterItem) &&
            WeaponmasterItem_get_IsVisible(weaponmasterItem) && WeaponmasterItem_get_IsAffordable(weaponmasterItem);
    }

    INTERCEPT(5043504, bool, WeaponmasterItem_get_IsOwned, (app::WeaponmasterItem* item))
    {
        //WeaponmasterItem$$get_IsOwned
        if (is_in_shop_screen())
            return hasBeenPurchasedBefore(item);

        return WeaponmasterItem_get_IsOwned(item);
    }

    INTERCEPT(5046528, int, WeaponmasterItem_GetCostForLevel, (app::WeaponmasterItem* item, int level))
    {
        //WeaponmasterItem$$GetCostForLevel
        if (is_in_shop_screen())
        {
            const auto ability_type = item->fields.Upgrade->fields.AcquiredAbilityType;
            //TODO: @Eiko - you know what to do
            if (ability_type == app::AbilityType__Enum_None)
            {
                if (item->fields.Upgrade->fields.RequiredAbility == app::AbilityType__Enum_None) // fast travel; 255, 255 -> 105, 0
                    return csharp_bridge::opher_weapon_cost(app::AbilityType__Enum_TeleportSpell);

                return WeaponmasterItem_GetCostForLevel(item, level);
            }

            return csharp_bridge::opher_weapon_cost(ability_type);
        }

        return WeaponmasterItem_GetCostForLevel(item, level);
    }


    INTERCEPT(5044080, bool, WeaponmasterItem_TryPurchase, (app::WeaponmasterItem* pThis, int64_t hint, int64_t sounds, int64_t hints))
    {
        //WeaponmasterItem$$TryPurchase
        if (purchasable(pThis))
            return true;

        WeaponmasterItem_TryPurchase(pThis, hint, sounds, hints);
        return false;
    }


    INTERCEPT(11448960, int64_t, SpellInventory_AddNewSpellToInventory, (int64_t inv, unsigned int equipmentType, bool add))
    {
        //SpellInventory$$AddNewSpellToInventory
        if (weaponmaster_purchase_in_progress)
            return 0;

        const int64_t result = SpellInventory_AddNewSpellToInventory(inv, equipmentType, add);
        return result;
    }

    INTERCEPT(27750528, void, SerializedByteUberState_SetValue, (app::SerializedByteUberState* this_ptr, uint8_t value))
    {
        //Moon.SerializedByteUberState$$set_Value
        if (weaponmaster_purchase_in_progress)
            return;

        SerializedByteUberState_SetValue(this_ptr, value);
    }

    INTERCEPT(5045152, void, WeaponmasterItem_DoPurchase, (app::WeaponmasterItem* item, int64_t context))
    {
        //Weaponmasteritem$$DoPurchase
        //Do the rando purchase /after/ rollback, eiko ;3
        const auto ability_type = item->fields.Upgrade->fields.AcquiredAbilityType;
        if (ability_type != app::AbilityType__Enum_None)
        {
            csharp_bridge::opher_buy_weapon(ability_type);
            weaponmaster_purchase_in_progress = true;
        }
        else
        {
            const auto required_type = item->fields.Upgrade->fields.RequiredAbility;
            if (required_type == app::AbilityType__Enum_None) // fast travel; 255, 255 -> 105, 0
            {
                csharp_bridge::opher_buy_weapon(app::AbilityType__Enum_TeleportSpell);
                weaponmaster_purchase_in_progress = true;
            }
            else
            {
                csharp_bridge::opher_buy_upgrade(required_type);
                weaponmaster_purchase_in_progress = false; // so upgrade buying isn't no-opped
            }
        }

        WeaponmasterItem_DoPurchase(item, context);
        weaponmaster_purchase_in_progress = false;
    }

    //MapmakerScreen* mapMakerPtr = nullptr;
    //bool pretendHandToHandNotCompleted = false;

    INTERCEPT(6951632, int32_t, MapmakerItem__GetCost, (app::MapmakerItem* this_ptr))
    {
        return csharp_bridge::lupo_upgrade_cost(this_ptr->fields.UberState->fields._.m_id->fields.m_id);
    }

    bool prevent_map_safeguard = false;

    INTERCEPT(6954992, void, MapmakerScreen__Show, (app::MapmakerScreen* this_ptr))
    {
        prevent_map_safeguard = true;
        MapmakerScreen__Show(this_ptr);
        prevent_map_safeguard = false;
    }

    INTERCEPT(27748336, bool, Moon_SerializedBooleanUberState__get_Value, (app::SerializedBooleanUberState* this_ptr))
    {
        if (prevent_map_safeguard && this_ptr->fields._.m_id->fields.m_id == 35534)
            return false;

        return Moon_SerializedBooleanUberState__get_Value(this_ptr);
    }

    constexpr float NORMAL_PURCHASE_TIME = 0.4f;
    constexpr float FAST_PURCHASE_TIME = 0.01f;

    IL2CPP_INTERCEPT(, PurchaseThingScreen, void, PurchaseInput, (app::PurchaseThingScreen* this_ptr))
    {
        this_ptr->fields.PurchaseCooldown = 0.1f;
        this_ptr->fields.PurchaseTime = NORMAL_PURCHASE_TIME;
        auto* const input_cmd = il2cpp::get_nested_class<app::Input_Cmd__Class>("Core", "Input", "Cmd");
        if (input_cmd->static_fields->DialogueOption1 != nullptr &&
            input_cmd->static_fields->DialogueOption1->fields.IsPressed)
        {
            this_ptr->fields.PurchaseTime = FAST_PURCHASE_TIME;
        }

        PurchaseThingScreen::PurchaseInput(this_ptr);
    }

    app::MessageProvider* create_message_provider(Il2CppString* message)
    {
        auto* const provider = il2cpp::unity::create_scriptable_object<app::TranslatedMessageProvider>("", "TranslatedMessageProvider");
        il2cpp::invoke(provider, ".ctor");
        // TODO: Add input provider and message provider with different color.

        auto* item = il2cpp::create_object<app::TranslatedMessageProvider_MessageItem>("", "TranslatedMessageProvider", "MessageItem");
        item->fields.English = reinterpret_cast<app::String*>(message);
        item->fields.Sound = nullptr;
        item->fields.WWiseEvent = nullptr;
        item->fields.Emotion = app::EmotionType__Enum_Neutral;
        il2cpp::invoke(provider->fields.Messages, "Add", item);
        return reinterpret_cast<app::MessageProvider*>(provider);
    }

    struct ShopItem
    {
        uint32_t name = 0;
        uint32_t description = 0;
        uint32_t locked = 0;
        bool uses_energy = false;
    };

    std::unordered_map<uint16_t, ShopItem> opher_overrides;
    std::unordered_map<uint8_t, ShopItem> twillen_overrides;
    std::unordered_map<uint64_t, ShopItem> lupo_overrides;

    // Lupo --------------------------------

    IL2CPP_INTERCEPT(, MapmakerUIItem, void, UpdateMapmakerItem, (app::MapmakerUIItem* this_ptr, app::MapmakerItem* item))
    {
        const auto state_id = item->fields.UberState->fields._.m_id->fields.m_id;
        const auto group_id = item->fields.UberState->fields.Group->fields._.m_id->fields.m_id;
        const auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
        const auto it = lupo_overrides.find(key);
        if (it != lupo_overrides.end())
        {
            item->fields.Name = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
            item->fields.Description = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
        }

        MapmakerUIItem::UpdateMapmakerItem(this_ptr, item);
    }

    // Opher --------------------------------

    IL2CPP_BINDING(, ShopkeeperScreen, app::ShopkeeperItem*, get_SelectedUpgradeItem, (app::ShopkeeperScreen* this_ptr));

    uint16_t get_key(app::WeaponmasterItem* item)
    {
        const auto acquired = static_cast<uint16_t>(item->fields.Upgrade->fields.AcquiredAbilityType);
        const auto required = static_cast<uint16_t>(item->fields.Upgrade->fields.RequiredAbility) << 8;
        return acquired | required;
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, get_IsVisible, (app::WeaponmasterItem* this_ptr))
    {
        if (il2cpp::is_assignable(this_ptr, "", "WeaponmasterItem") && this_ptr->fields.Upgrade != nullptr)
        {
            const auto acquired = this_ptr->fields.Upgrade->fields.AcquiredAbilityType;
            const auto required = this_ptr->fields.Upgrade->fields.RequiredAbility;
            if (acquired == app::AbilityType__Enum_WaterBreath && required == app::AbilityType__Enum_None)
                return uber_states::get_uber_state_value(37858, 10720) > 1.5f; // Watermill escape.
        }

        return get_IsVisible(this_ptr);
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, get_IsLocked, (app::WeaponmasterItem* this_ptr))
    {
        if (il2cpp::is_assignable(this_ptr, "", "WeaponmasterItem") && this_ptr->fields.Upgrade != nullptr)
        {
            const auto acquired = this_ptr->fields.Upgrade->fields.AcquiredAbilityType;
            const auto required = this_ptr->fields.Upgrade->fields.RequiredAbility;
            if (acquired == app::AbilityType__Enum_WaterBreath && required == app::AbilityType__Enum_None)
                return uber_states::get_uber_state_value(37858, 10720) < 1.5f; // Watermill escape.
        }

        return get_IsLocked(this_ptr);
    }

    // When does this happen?
    IL2CPP_INTERCEPT(, WeaponmasterItem, app::MessageProvider*, get_ItemNextLevelDescription, (app::WeaponmasterItem* this_ptr))
    {
        return WeaponmasterItem::get_ItemNextLevelDescription(this_ptr);
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, get_UsesEnergy, (app::WeaponmasterItem* this_ptr))
    {
        const auto key = get_key(this_ptr);
        const auto it = opher_overrides.find(key);
        if (it == opher_overrides.end())
            return WeaponmasterItem::get_UsesEnergy(this_ptr);

        return it->second.uses_energy;
    }

    // Generic --------------------------------

    STATIC_IL2CPP_BINDING(, UberShaderAPI, void, SetTexture, (app::Renderer* renderer, app::UberShaderProperty_Texture__Enum prop, app::Texture* texture));

    IL2CPP_BINDING(, MessageBox, void, RefreshText, (app::MessageBox* this_ptr, app::String* replace, app::String* with));

    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));

    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_Upgradable, (app::PlayerUberStateShards_Shard* this_ptr));

    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_UpgradeAffordable, (app::PlayerUberStateShards_Shard* this_ptr));

    IL2CPP_BINDING(, SpellUIShardEquipStatus, void, SetEquipment, (app::SpellUIShardEquipStatus* this_ptr, app::EquipmentType__Enum type));

    enum class ShopTypeOverwrite
    {
        None,
        Opher,
        Tuley,
        Grom
    };

    ShopTypeOverwrite overwrite_shop_text = ShopTypeOverwrite::None;
    app::ShopkeeperItem* selected_item;
    IL2CPP_INTERCEPT(, ShopkeeperScreen, void, UpdateContextCanvasShards, (app::ShopkeeperScreen* this_ptr))
    {
        if (il2cpp::is_assignable(this_ptr, "", "WeaponmasterScreen"))
            overwrite_shop_text = ShopTypeOverwrite::Opher;

        selected_item = get_SelectedUpgradeItem(this_ptr);
        UpdateContextCanvasShards(this_ptr);
        overwrite_shop_text = ShopTypeOverwrite::None;
    }

    IL2CPP_BINDING(, ShopkeeperUIDetails, void, UpdateDetails2, (app::ShopkeeperUIDetails* this_ptr));

    void set_providers(app::MessageProvider*& name_provider, app::MessageProvider*& description_provider, app::MessageProvider*& locked_provider)
    {
        switch (overwrite_shop_text)
        {
        case ShopTypeOverwrite::Opher:
        {
            auto* const item = reinterpret_cast<app::WeaponmasterItem*>(selected_item);
            const auto key = get_key(item);
            const auto it = opher_overrides.find(key);
            if (it != opher_overrides.end())
            {
                name_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
                description_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
                locked_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.locked));
            }
            break;
        }
        default:
            break;
        }
    }

    bool locked_shop_overwrite = false;
    IL2CPP_INTERCEPT(, ShopkeeperUIDetails, void, UpdateDetails, (app::ShopkeeperUIDetails* this_ptr))
    {
        app::MessageProvider* name_provider = nullptr;
        app::MessageProvider* description_provider = nullptr;
        app::MessageProvider* locked_provider = nullptr;

        set_providers(name_provider, description_provider, locked_provider);

        auto renderer_components = il2cpp::unity::get_components<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
        auto* const renderer = renderer_components[0];
        auto* const texture = il2cpp::invoke<app::Texture>(this_ptr->fields.m_item, "get_ItemIcon");

        UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, texture);

        auto message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.NameGO, "", "MessageBox");
        auto* const name_box = message_box_components[0];

        message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.DescriptionGO, "", "MessageBox");
        auto* const description_box = message_box_components[0];

        const auto locked = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsLocked")->fields;
        auto* const empty_str = reinterpret_cast<app::String*>(il2cpp::string_new(""));

        if (locked || locked_shop_overwrite)
        {
            name_box->fields.MessageProvider = this_ptr->fields.LockedName;
            description_box->fields.MessageProvider = locked_provider == nullptr ? this_ptr->fields.LockedDescription : locked_provider;
        }
        else
        {
            name_box->fields.MessageProvider = name_provider == nullptr ? il2cpp::invoke<app::MessageProvider>(this_ptr->fields.m_item, "get_ItemName") : name_provider;
            description_box->fields.MessageProvider = description_provider == nullptr ? il2cpp::invoke<app::MessageProvider>(this_ptr->fields.m_item, "get_ItemDescription") : description_provider;
        }

        MessageBox::RefreshText(name_box, empty_str, empty_str);
        MessageBox::RefreshText(description_box, empty_str, empty_str);

        // Need to do this as UpdateDetails2 overwrites the messageprovider.
        auto* const temp = this_ptr->fields.LockedDescription;
        if (locked || locked_shop_overwrite)
            this_ptr->fields.LockedDescription = description_box->fields.MessageProvider;

        UpdateDetails2(this_ptr);
        description_box->fields.MessageProvider = temp;

        if (this_ptr->fields.ShowEquipStatus != false)
            SpellUIShardEquipStatus::SetEquipment(this_ptr->fields.m_equipStatus, app::EquipmentType__Enum_None);
    }

    IL2CPP_INTERCEPT(, ShopkeeperUIDetails, void, ShowEmptyDetails, (app::ShopkeeperUIDetails* this_ptr))
    {
        if (overwrite_shop_text != ShopTypeOverwrite::None && selected_item != nullptr)
        {
            locked_shop_overwrite = true;
            UpdateDetails_intercept(this_ptr);
            locked_shop_overwrite = false;
        }
        else
            ShowEmptyDetails(this_ptr);
    }

    // Twillen --------------------------------

    IL2CPP_BINDING(, SpiritShardsShopScreen, app::PlayerUberStateShards_Shard*, get_SelectedSpiritShard, (app::SpiritShardsShopScreen* this_ptr));

    bool overwrite_shard_text = false;
    app::PlayerUberStateShards_Shard* selected_shard;
    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, UpdateContextCanvasShards, (app::SpiritShardsShopScreen* this_ptr))
    {
        overwrite_shard_text = true;
        selected_shard = SpiritShardsShopScreen::get_SelectedSpiritShard(this_ptr);
        SpiritShardsShopScreen::UpdateContextCanvasShards(this_ptr);
        overwrite_shard_text = false;
    }

    IL2CPP_BINDING(, SpiritShardUIShardDetails, void, UpdateUpgradeDetails, (app::SpiritShardUIShardDetails* this_ptr));

    bool locked_shard_overwrite = false;
    IL2CPP_INTERCEPT(, SpiritShardUIShardDetails, void, UpdateDetails, (app::SpiritShardUIShardDetails* this_ptr))
    {
        app::MessageProvider* name_provider = nullptr;
        app::MessageProvider* description_provider = nullptr;
        app::MessageProvider* locked_provider = nullptr;

        auto* const item = selected_shard;
        auto type = item->fields.m_type;
        if (overwrite_shard_text)
        {
            const auto it = twillen_overrides.find(static_cast<uint8_t>(type));
            if (it != twillen_overrides.end())
            {
                name_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
                description_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
                locked_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.locked));
            }
        }

        auto* const settings = il2cpp::get_class<app::SpiritShardSettings__Class>("", "SpiritShardSettings")->static_fields->Instance;

        auto* const description = il2cpp::invoke<app::SpiritShardDescription>(settings->fields.Descriptions, "GetValue", &type);
        auto renderer_components = il2cpp::unity::get_components<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
        auto* const renderer = renderer_components[0];
        if (!(item->fields.m_gained || !this_ptr->fields.RequireOwned) || locked_shard_overwrite)
            type = app::SpiritShardType__Enum_None;

        if (settings != nullptr)
        {
            auto* const empty_str = reinterpret_cast<app::String*>(il2cpp::string_new(""));
            auto* const icons = il2cpp::invoke<app::SpiritShardIconsCollection_Icons__Boxed>(settings->fields.Icons, "GetValue", &type);
            UberShaderAPI::SetTexture(renderer, app::UberShaderProperty_Texture__Enum_MainTexture, reinterpret_cast<app::Texture*>(icons->fields.HeaderIcon));

            auto message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.NameGO, "", "MessageBox");
            auto* const name_box = message_box_components[0];

            message_box_components = il2cpp::unity::get_components<app::MessageBox>(this_ptr->fields.DescriptionGO, "", "MessageBox");
            auto* const description_box = message_box_components[0];

            if (type == 0)
            {
                name_box->fields.MessageProvider = this_ptr->fields.LockedName;
                description_box->fields.MessageProvider = locked_provider == nullptr ? this_ptr->fields.LockedDescription : locked_provider;
            }
            else
            {
                name_box->fields.MessageProvider = name_provider == nullptr ? description->fields.Name : name_provider;
                auto* const property_levels = description->fields.UpgradablePropertyLevels;
                auto* const property_level = property_levels->fields._items->vector[item->fields.m_level];
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

    IL2CPP_INTERCEPT(, SpiritShardUIShardDetails, void, ShowEmptyDetails, (app::SpiritShardUIShardDetails* this_ptr))
    {
        if (overwrite_shard_text && selected_shard != nullptr)
        {
            const auto it = twillen_overrides.find(static_cast<uint8_t>(selected_shard->fields.m_type));
            if (it != twillen_overrides.end())
            {
                locked_shard_overwrite = true;
                UpdateDetails_intercept(this_ptr);
                locked_shard_overwrite = false;
                return;
            }
        }

        ShowEmptyDetails(this_ptr);
    }

    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, Show, (app::SpiritShardsShopScreen* this_ptr))
    {
        csharp_bridge::update_shop_data();
        SpiritShardsShopScreen::Show(this_ptr);
    }

    IL2CPP_INTERCEPT(, ShopkeeperScreen, void, Show, (app::ShopkeeperScreen* this_ptr))
    {
        csharp_bridge::update_shop_data();
        ShopkeeperScreen::Show(this_ptr);
    }

    IL2CPP_INTERCEPT(, MapmakerScreen, void, Show, (app::MapmakerScreen* this_ptr))
    {
        csharp_bridge::update_shop_data();
        MapmakerScreen::Show(this_ptr);
    }

    void set_item(ShopItem& item, const wchar_t* name, const wchar_t* description, const wchar_t* locked, bool uses_energy)
    {
        if (item.name != 0)
            il2cpp::gchandle_free(item.name);
        if (item.description != 0)
            il2cpp::gchandle_free(item.description);
        if (item.locked != 0)
            il2cpp::gchandle_free(item.locked);

        auto* provider = create_message_provider(il2cpp::string_new(name));
        item.name = il2cpp::gchandle_new(provider, false);
        provider = create_message_provider(il2cpp::string_new(description));
        item.description = il2cpp::gchandle_new(provider, false);
        provider = create_message_provider(il2cpp::string_new(locked));
        item.locked = il2cpp::gchandle_new(provider, false);
        item.uses_energy = uses_energy;
    }
}

INJECT_C_DLLEXPORT void set_opher_item(int acquired, int required, const wchar_t* name, const wchar_t* description, const wchar_t* locked, bool uses_energy)
{
    const auto key = static_cast<uint16_t>(acquired & 0xFF) | (static_cast<uint16_t>(required & 0xFF) << 8);
    auto& item = opher_overrides[key];
    set_item(item, name, description, locked, uses_energy);
}

INJECT_C_DLLEXPORT void set_twillen_item(int shard, const wchar_t* name, const wchar_t* description, const wchar_t* locked)
{
    const auto key = static_cast<uint8_t>(shard);
    auto& item = twillen_overrides[key];
    set_item(item, name, description, locked, false);
}

INJECT_C_DLLEXPORT void set_lupo_item(int group_id, int state_id, const wchar_t* name, const wchar_t* description, const wchar_t* locked)
{
    const auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
    const auto it = lupo_overrides.find(key);
    auto& item = lupo_overrides[key];
    set_item(item, name, description, locked, false);
}
