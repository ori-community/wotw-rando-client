#include <dll_main.h>
#include <Common/ext.h>
#include <csharp_bridge.h>
#include <uber_states/uber_state_manager.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <functional>
#include <set>
#include <map>

using namespace modloader;

namespace
{
    STATIC_IL2CPP_BINDING(, WeaponmasterScreen, app::WeaponmasterScreen*, get_Instance, ());

    IL2CPP_BINDING(, SeinCharacter, bool, get_Active, (app::SeinCharacter*));
    IL2CPP_BINDING(, GameController, bool, get_GameInTitleScreen, (app::GameController*));
    IL2CPP_BINDING(, PurchaseThingScreen, bool, get_IsShopOpen, (app::PurchaseThingScreen*));

    bool weaponmaster_purchase_in_progress = false;
    const std::set<char> TWILLEN_SHARDS{ 1, 2, 3, 5, 19, 22, 26, 40 };
    std::unordered_map<uint16_t, int> opher_weapon_costs;
    std::unordered_map<uint8_t, int> twillen_shard_costs;

    uint16_t opher_key(int acq, int req) {
        return static_cast<uint16_t>(acq & 0xFF) | (static_cast<uint16_t>(req & 0xFF) << 8);
    }

    bool is_twillen_shard(const uint8_t shard)
    {
        return TWILLEN_SHARDS.find(shard) != TWILLEN_SHARDS.end();
    }

    bool is_in_shop_screen()
    {
        const auto gameController = get_game_controller();
        if (!gameController || GameController::get_GameInTitleScreen(gameController))
            return false;

        const auto weaponmasterScreen = WeaponmasterScreen::get_Instance();
        if (weaponmasterScreen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(weaponmasterScreen)))
            return true;

        auto* const shop_screen = il2cpp::get_class<app::SpiritShardsShopScreen__Class>("", "SpiritShardsShopScreen");
        const auto spiritShardsShopScreen = shop_screen->static_fields->Instance;
        if (spiritShardsShopScreen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(spiritShardsShopScreen)))
            return true;

        auto* const mapmaker_screen_class = il2cpp::get_class<app::MapmakerScreen__Class>("", "MapmakerScreen");
        auto* const mapmaker_screen = mapmaker_screen_class->static_fields->Instance;
        if (mapmaker_screen && PurchaseThingScreen::get_IsShopOpen(reinterpret_cast<app::PurchaseThingScreen*>(mapmaker_screen)))
            return true;

        return false;
    };
    
    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, bool, CanPurchase, (app::SpiritShardsShopScreen* this_ptr))
    {
        //SpiritShardsShopScreen$$CanPurchase
        const auto result = SpiritShardsShopScreen::CanPurchase(this_ptr);
        return result;
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

    INTERNAL_INTERCEPT(27145792, int64_t, enumDictGetValue, (int64_t dict, unsigned __int8 enumKey, int64_t impl))
    {
        //EnumDictionary<ENUMTYPE, VALUETYPE>$$GetValue
        const int64_t value = enumDictGetValue(dict, enumKey, impl);

        //Method$EnumDictionary<SpiritShardType, SpiritShardDescription>.GetValue()
        //Also, this should do like... nothing? But hey, it works, so I won't touch it until something breaks
        //update: something broke! It's been touched
        //if (impl == *reinterpret_cast<int64_t*>(intercept::resolve_rva(74897664)))
        if (value)
            initShardDescription(enumKey, value);

        return value;
    }

    NESTED_IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, int, GetCostForLevel, (app::PlayerUberStateShards_Shard* this_ptr, int level))
    {
        // For whenever we want random upgrade costs
        return PlayerUberStateShards::Shard::GetCostForLevel(this_ptr, level);
    }

    IL2CPP_INTERCEPT(, PlayerSpiritShards, bool, HasShard, (app::PlayerSpiritShards* this_ptr, app::SpiritShardType__Enum shardType))
    {
        if (is_in_shop_screen() && is_twillen_shard(shardType))
        {
            return csharp_bridge::twillen_bought_shard(static_cast<csharp_bridge::ShardType>(shardType));
            //TODO: @Eiko - Call C# using shardType, return true if the player has *purchased* the slot before
        }
        return PlayerSpiritShards::HasShard(this_ptr, shardType);
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

    bool purchasable(app::WeaponmasterItem* weaponmasterItem);

    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, get_IsOwned, (app::WeaponmasterItem* item))
    {
        if (is_in_shop_screen())
            return hasBeenPurchasedBefore(item);

        return WeaponmasterItem::get_IsOwned(item);
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, int, GetCostForLevel, (app::WeaponmasterItem* item, int level))
    {
        if (is_in_shop_screen())
        {
            const auto acq = static_cast<int>(item->fields.Upgrade->fields.AcquiredAbilityType);
            const auto req = static_cast<int>(item->fields.Upgrade->fields.RequiredAbility);
            const auto key = opher_key(acq, req);
            if(opher_weapon_costs.find(key) != opher_weapon_costs.end())
                return opher_weapon_costs[opher_key(acq, req)];
            return 300; // todo; maybe a bit smarter than this?
         }

        return WeaponmasterItem::GetCostForLevel(item, level);
    }

    IL2CPP_INTERCEPT(, SpellInventory, app::PlayerUberStateInventory_InventoryItem*, AddNewSpellToInventory, (app::SpellInventory* this_ptr, unsigned int equipmentType, bool add))
    {
        if (weaponmaster_purchase_in_progress)
            return NULL;

        const auto result = SpellInventory::AddNewSpellToInventory(this_ptr, equipmentType, add);
        return result;
    }

    IL2CPP_INTERCEPT(Moon, SerializedByteUberState, void, set_Value, (app::SerializedByteUberState* this_ptr, uint8_t value))
    {
        if (weaponmaster_purchase_in_progress)
            return;

        SerializedByteUberState::set_Value(this_ptr, value);
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, void, DoPurchase, (app::WeaponmasterItem* item, int64_t context))
    {
        //Weaponmasteritem$$DoPurchase
        const auto ability_type = item->fields.Upgrade->fields.AcquiredAbilityType;
        if (ability_type != app::AbilityType__Enum_None)
        {
            weaponmaster_purchase_in_progress = true;
            WeaponmasterItem::DoPurchase(item, context); // purchase first for keystone price purposes
            weaponmaster_purchase_in_progress = false;
            csharp_bridge::opher_buy_weapon(ability_type);
        }
        else
        {
            const auto required_type = item->fields.Upgrade->fields.RequiredAbility;
            if (required_type == app::AbilityType__Enum_None) // fast travel; 255, 255 -> 105, 0
            {
                weaponmaster_purchase_in_progress = true;
                WeaponmasterItem::DoPurchase(item, context); // purchase first for keystone purposes
                weaponmaster_purchase_in_progress = false;
                csharp_bridge::opher_buy_weapon(app::AbilityType__Enum_TeleportSpell);
            }
            else
            {
                WeaponmasterItem::DoPurchase(item, context); // purchase first for keystone purposes
                csharp_bridge::opher_buy_upgrade(required_type);
            }
        }

    }

    //MapmakerScreen* mapMakerPtr = nullptr;
    //bool pretendHandToHandNotCompleted = false;

    IL2CPP_INTERCEPT(, MapmakerItem, int32_t, GetCost, (app::MapmakerItem* this_ptr))
    {
        return csharp_bridge::lupo_upgrade_cost(this_ptr->fields.UberState->fields._.m_id->fields.m_id);
    }

    bool prevent_map_safeguard = false;

    IL2CPP_INTERCEPT(, MapmakerScreen, void, Show, (app::MapmakerScreen* this_ptr))
    {
        prevent_map_safeguard = true;
        csharp_bridge::update_shop_data();
        MapmakerScreen::Show(this_ptr);
        prevent_map_safeguard = false;
    }

    IL2CPP_INTERCEPT(Moon, SerializedBooleanUberState, bool, get_Value, (app::SerializedBooleanUberState* this_ptr))
    {
        if (prevent_map_safeguard && this_ptr->fields._.m_id->fields.m_id == 35534)
            return false;

        return SerializedBooleanUberState::get_Value(this_ptr);
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

    IL2CPP_INTERCEPT(, UpgradableShardItem, bool, get_IsVisible, (app::UpgradableShardItem* z)) {
        return true;
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

        return true; //get_IsVisible(this_ptr);
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

        return false; // get_IsLocked(this_ptr);
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

    NESTED_IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_VisibleInShop, (app::PlayerUberStateShards_Shard* this_ptr))
    {
        return true;
    }

    NESTED_IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, bool, get_PurchasableInShop, (app::PlayerUberStateShards_Shard* this_ptr))
    {
        return true;
    }

    IL2CPP_BINDING(, SpiritShardsShopScreen, app::PlayerUberStateShards_Shard*, get_SelectedSpiritShard, (app::SpiritShardsShopScreen* this_ptr));
    
    bool overwrite_shard_text = false;
    app::PlayerUberStateShards_Shard* selected_shard;
    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, UpdateContextCanvasShards, (app::SpiritShardsShopScreen* this_ptr))
    {
        if (this_ptr == 0) {
            info("shards", "pointer was 0??");
            return;
        }
        overwrite_shard_text = true;
        selected_shard = get_SelectedSpiritShard(this_ptr);
        UpdateContextCanvasShards(this_ptr);
        overwrite_shard_text = false;
    }

    NESTED_IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateShards, Shard, void, RunSetDirtyCallback, (app::PlayerUberStateShards_Shard* this_ptr));
    IL2CPP_INTERCEPT(, SpiritShardsShopScreen, void, CompletePurchase, (app::SpiritShardsShopScreen* this_ptr))
    {
        //SpiritShardsShopScreen$$CompletePurchase
        //save shard new/purchased state
        auto* const shard = get_SelectedSpiritShard(this_ptr);
        const auto first = shard->fields.m_isNew;
        const auto second = shard->fields.m_gained;

        CompletePurchase(this_ptr);

        // rollback vanilla purchase 
        shard->fields.m_isNew = first;
        shard->fields.m_gained = second;

        il2cpp::invoke(get_sein()->fields.PlayerSpiritShards->fields.OnInventoryUpdated, "Invoke", shard);

        // do the rando purchase /after/ rollback, xem ;3
        csharp_bridge::twillen_buy_shard(static_cast<csharp_bridge::ShardType>(shard->fields.m_type));

        PlayerUberStateShards::Shard::RunSetDirtyCallback(shard);
        UpdateContextCanvasShards(this_ptr);
    }

    IL2CPP_BINDING(, SpiritShardUIShardDetails, void, UpdateUpgradeDetails, (app::SpiritShardUIShardDetails* this_ptr));

    bool locked_shard_overwrite = false;
    IL2CPP_INTERCEPT(, SpiritShardUIShardDetails, void, UpdateDetails, (app::SpiritShardUIShardDetails* this_ptr))
    {
        app::MessageProvider* name_provider = nullptr;
        app::MessageProvider* description_provider = nullptr;
        app::MessageProvider* locked_provider = nullptr;

        auto* const item = overwrite_shard_text ? selected_shard : this_ptr->fields.m_item;
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
            UpdateUpgradeDetails(this_ptr);

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
                this_ptr->fields.m_item = selected_shard;
                UpdateDetails_intercept(this_ptr);
                this_ptr->fields.m_item = nullptr;
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
    IL2CPP_INTERCEPT(, SpellUIExperience, bool, Spend, (app::SpellUIExperience* this_ptr, int amount)) {
        bool worked = SpellUIExperience::Spend(this_ptr, amount);
        if (worked)
            uber_states::set_uber_state_value(6, 4, amount + uber_states::get_uber_state_value(6, 4));
        return worked;
    };
    IL2CPP_INTERCEPT(, SpellUISeeds, bool, Spend, (app::SpellUISeeds* this_ptr, int amount)) {
        bool worked = SpellUISeeds::Spend(this_ptr, amount);
        if (worked)
            uber_states::set_uber_state_value(6, 6, amount + uber_states::get_uber_state_value(6, 6));
        return worked;
    };

    IL2CPP_BINDING(, UISoundSettingsAsset, bool, PlaySoundEvent, (app::UISoundSettingsAsset* this_ptr, app::Event_1* sound_event));
    IL2CPP_BINDING(, WeaponmasterItem, bool, get_IsAffordable, (app::WeaponmasterItem* this_ptr));
    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, TryPurchase, (app::WeaponmasterItem* this_ptr, app::Action_1_MessageProvider_* show_hint, app::UISoundSettingsAsset* sounds, app::ShopKeeperHints* hints))
    {
        app::MessageProvider* selected_hint;
        if (hasBeenPurchasedBefore(this_ptr))
            selected_hint = hints->fields.AlreadyOwned;
        else if (get_IsLocked_intercept(this_ptr))
            selected_hint = hints->fields.ShardNotDiscovered;
        else if (!get_IsVisible_intercept(this_ptr))
            selected_hint = hints->fields.ShardNotDiscovered;
        else if (!get_IsAffordable(this_ptr))
            selected_hint = hints->fields.NotEnoughSpiritLight;
        else
            return true;

        il2cpp::invoke(show_hint, "Invoke", selected_hint);
        if (sounds != nullptr)
            UISoundSettingsAsset::PlaySoundEvent(sounds, sounds->fields.InvalidItem);

        return false;
    }
}

INJECT_C_DLLEXPORT void set_opher_item(int acquired, int required, const wchar_t* name, const wchar_t* description, const wchar_t* locked, bool uses_energy, int cost) {
    const auto key = opher_key(acquired, required);
    auto& item = opher_overrides[key];
    set_item(item, name, description, locked, uses_energy);
    opher_weapon_costs[key] = cost;
}

INJECT_C_DLLEXPORT void set_opher_cost(int acquired, int required, int cost) { // TODO: remove once the vanilla upgrades are their own items and set via header, probably?
    const auto key = opher_key(acquired, required);
    opher_weapon_costs[key] = cost;
}


INJECT_C_DLLEXPORT void set_twillen_item(int shard, const wchar_t* name, const wchar_t* description, const wchar_t* locked, int cost)
{
    const auto key = static_cast<uint8_t>(shard);
    auto& item = twillen_overrides[key];
    set_item(item, name, description, locked, false);
    twillen_shard_costs[key] = cost;
}

INJECT_C_DLLEXPORT void set_lupo_item(int group_id, int state_id, const wchar_t* name, const wchar_t* description, const wchar_t* locked)
{
    const auto key = static_cast<uint64_t>(group_id & 0xFFFFFFFF) | (static_cast<uint64_t>(state_id & 0xFFFFFFFF) << 8);
    const auto it = lupo_overrides.find(key);
    auto& item = lupo_overrides[key];
    set_item(item, name, description, locked, false);
}
