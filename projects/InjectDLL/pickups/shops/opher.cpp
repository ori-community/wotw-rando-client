#include <dll_main.h>
#include <Common/ext.h>
#include <csharp_bridge.h>
#include <pickups/shops/general.h>
#include <system\textures.h>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_manager.h>
#include <utils\messaging.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <functional>
#include <set>
#include <map>

using namespace modloader;

namespace
{
    IL2CPP_BINDING(, SeinCharacter, bool, get_Active, (app::SeinCharacter*));

    bool weaponmaster_purchase_in_progress = false;
    uint16_t opher_key(int acq, int req) {
        return static_cast<uint16_t>(acq & 0xFF) | (static_cast<uint16_t>(req & 0xFF) << 8);
    }

    std::unordered_map<uint16_t, int> opher_weapon_costs{
        { opher_key(app::AbilityType__Enum_WaterBreath, 255), 10023 },          // Water breath
        { opher_key(app::AbilityType__Enum_SpiritSpearSpell, 255), 10074 },     // Spike
        { opher_key(app::AbilityType__Enum_Hammer, 255), 10098 },               // Hammer
        { opher_key(255, 255), 10105 },                                         // Fast Travel
        { opher_key(app::AbilityType__Enum_ChakramSpell, 255), 10106 },         // Shuriken
        { opher_key(app::AbilityType__Enum_Blaze, 255), 10115 },                // Blaze
        { opher_key(app::AbilityType__Enum_TurretSpell, 255), 10116 },          // Sentry
        { opher_key(255, app::AbilityType__Enum_SpiritSpearSpell), 11074 },     // Exploding Spike
        { opher_key(255, app::AbilityType__Enum_Hammer), 11098 },               // Shock Smash
        { opher_key(255, app::AbilityType__Enum_ChakramSpell), 11106 },         // Static Shuriken
        { opher_key(255, app::AbilityType__Enum_Blaze), 11115 },                // Charged Blaze
        { opher_key(255, app::AbilityType__Enum_TurretSpell), 11116 },          // Rapid Sentry
    };

    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, get_IsOwned, (app::WeaponmasterItem* item))
    {
        if (shops::is_in_shop(shops::ShopType::Opher))
        {
            const app::AbilityType__Enum granted_type = item->fields.Upgrade->fields.AcquiredAbilityType;
            const app::AbilityType__Enum required_type = item->fields.Upgrade->fields.RequiredAbility;
            if (granted_type != app::AbilityType__Enum_None)
                return csharp_bridge::opher_bought_weapon(granted_type);

            if (required_type == app::AbilityType__Enum_None) // fast travel; 255, 255 -> 105, 0
                return csharp_bridge::opher_bought_weapon(app::AbilityType__Enum_TeleportSpell);

            return csharp_bridge::opher_bought_upgrade(required_type);
        }

        return WeaponmasterItem::get_IsOwned(item);
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, int, GetCostForLevel, (app::WeaponmasterItem* item, int level))
    {
        if (shops::is_in_shop(shops::ShopType::Opher))
        {
            const auto acq = static_cast<int>(item->fields.Upgrade->fields.AcquiredAbilityType);
            const auto req = static_cast<int>(item->fields.Upgrade->fields.RequiredAbility);
            const auto key = opher_key(acq, req);
            if (opher_weapon_costs.find(key) != opher_weapon_costs.end())
                return uber_states::get_uber_state_value(uber_states::constants::OPHER_WEAPON_GROUP_ID, opher_weapon_costs[opher_key(acq, req)]);

            return 300; // todo; maybe a bit smarter than this?
        }

        return WeaponmasterItem::GetCostForLevel(item, level);
    }

    IL2CPP_INTERCEPT(, SpellInventory, app::PlayerUberStateInventory_InventoryItem*, AddNewSpellToInventory, (app::SpellInventory* this_ptr, unsigned int equipmentType, bool add))
    {
        if (weaponmaster_purchase_in_progress)
            return nullptr;

        const auto result = SpellInventory::AddNewSpellToInventory(this_ptr, equipmentType, add);
        return result;
    }

    IL2CPP_INTERCEPT(Moon, SerializedByteUberState, void, set_Value, (app::SerializedByteUberState* this_ptr, uint8_t value))
    {
        if (weaponmaster_purchase_in_progress)
            return;

        SerializedByteUberState::set_Value(this_ptr, value);
    }

    // TODO: Maybe rewrite to do it ourselves.
    IL2CPP_INTERCEPT(, WeaponmasterItem, void, DoPurchase, (app::WeaponmasterItem* item, int64_t context))
    {
        weaponmaster_purchase_in_progress = true;
        WeaponmasterItem::DoPurchase(item, context); // purchase first for keystone purposes
        weaponmaster_purchase_in_progress = false;
        //Weaponmasteritem$$DoPurchase
        const auto ability_type = item->fields.Upgrade->fields.AcquiredAbilityType;
        if (ability_type != app::AbilityType__Enum_None) {
            csharp_bridge::opher_buy_weapon(ability_type);
        }
        else {
            const auto required_type = item->fields.Upgrade->fields.RequiredAbility;
            if (required_type == app::AbilityType__Enum_None) // fast travel; 255, 255 -> 105, 0
                csharp_bridge::opher_buy_weapon(app::AbilityType__Enum_TeleportSpell);
            else
                csharp_bridge::opher_buy_upgrade(required_type);
        }
    }

    std::unordered_map<uint16_t, shops::ShopItem> opher_overrides;

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
            const auto key = get_key(this_ptr);
            const auto it = opher_overrides.find(key);
            if (it != opher_overrides.end() && it->second.texture_data != nullptr)
                return it->second.is_visible;
        }

        return true; //get_IsVisible(this_ptr);
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, get_IsLocked, (app::WeaponmasterItem* this_ptr))
    {
        if (il2cpp::is_assignable(this_ptr, "", "WeaponmasterItem") && this_ptr->fields.Upgrade != nullptr)
        {
            const auto key = get_key(this_ptr);
            const auto it = opher_overrides.find(key);
            if (it != opher_overrides.end() && it->second.texture_data != nullptr)
                return it->second.is_locked;
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

    IL2CPP_BINDING(UnityEngine, GameObject, void, SetActive, (app::GameObject* this_ptr, bool value));
    IL2CPP_BINDING(UnityEngine, GameObject, bool, get_activeSelf, (app::GameObject* this_ptr));
    IL2CPP_BINDING(, CleverMenuItem, void, set_IsDisabled, (app::CleverMenuItem* this_ptr, bool disabled));
    IL2CPP_BINDING(CatlikeCoding.TextBox, TextBox, void, RenderText, (app::TextBox* this_ptr));
    IL2CPP_BINDING_OVERLOAD(CatlikeCoding.TextBox, TextBox, void, SetText, (app::TextBox* this_ptr, app::String* text), (System:String));
    IL2CPP_BINDING(, SpiritShardUIShardBackdrop, void, SetUpgradeCount, (app::SpiritShardUIShardBackdrop* this_ptr, int actual, int total));
    IL2CPP_INTERCEPT(, ShopkeeperUISubItem, void, UpdateItem, (app::ShopkeeperUISubItem* this_ptr)) {
        if (shops::is_in_shop(shops::ShopType::Opher))
        {
            auto menu_item = il2cpp::unity::get_component<app::CleverMenuItem>(this_ptr, "", "CleverMenuItem");
            auto renderer = il2cpp::unity::get_component<app::Renderer>(this_ptr->fields.IconGO, "UnityEngine", "Renderer");
            auto texture_data = shops::get_icon(shops::ShopType::Opher, this_ptr->fields.m_item);
            texture_data->apply(renderer);
            if (this_ptr->fields.m_item == nullptr)
            {
                CleverMenuItem::set_IsDisabled(menu_item, true);
                return;
            }

            auto is_owned = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsOwned")->fields;
            auto is_max_level = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsMaxLevel")->fields;
            if (is_max_level)
            {
                is_owned = true;
                if (il2cpp::unity::is_valid(this_ptr->fields.SpiritLightGO))
                    GameObject::SetActive(this_ptr->fields.SpiritLightGO, false);

                if (il2cpp::unity::is_valid(this_ptr->fields.OreGO))
                    GameObject::SetActive(this_ptr->fields.OreGO, false);
            }

            auto value = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_item, "get_ItemCurrentLevel")->fields;
            auto max_level = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_item, "get_ItemMaxLevel")->fields;
            if (max_level < value)
                value = max_level;

            if (il2cpp::unity::is_valid(this_ptr->fields.Backdrop))
                SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr->fields.Backdrop, 0, 0);
                //SpiritShardUIShardBackdrop::SetUpgradeCount(this_ptr->fields.Backdrop, value, max_level);

            auto cost = il2cpp::invoke<app::Int32__Boxed>(this_ptr->fields.m_item, "GetCostForLevel", &value)->fields;
            if (cost == 0)
            {
                if (il2cpp::unity::is_valid(this_ptr->fields.SpiritLightGO))
                    GameObject::SetActive(this_ptr->fields.SpiritLightGO, false);

                if (il2cpp::unity::is_valid(this_ptr->fields.OreGO))
                    GameObject::SetActive(this_ptr->fields.OreGO, false);
            }
            else
            {
                if (il2cpp::unity::is_valid(this_ptr->fields.SpiritLightGO))
                    GameObject::SetActive(this_ptr->fields.SpiritLightGO, !this_ptr->fields.ShowOre);

                if (il2cpp::unity::is_valid(this_ptr->fields.OreGO))
                    GameObject::SetActive(this_ptr->fields.OreGO, this_ptr->fields.ShowOre);
            }

            if (il2cpp::unity::is_valid(this_ptr->fields.CostGO) && GameObject::get_activeSelf(this_ptr->fields.CostGO))
            {
                auto text = il2cpp::string_new(std::to_string(cost));
                auto text_box = il2cpp::unity::get_component<app::TextBox>(this_ptr->fields.CostGO, "CatlikeCoding.TextBox", "TextBox");
                TextBox::SetText(text_box, text);
                TextBox::RenderText(text_box);
            }

            auto is_affordable = il2cpp::invoke<app::Boolean__Boxed>(this_ptr->fields.m_item, "get_IsAffordable")->fields;
            CleverMenuItem::set_IsDisabled(menu_item, is_owned || !is_affordable);
        }
        else
            ShopkeeperUISubItem::UpdateItem(this_ptr);
    }

    bool has_been_purchased_before(app::WeaponmasterItem* item)
    {
        const app::AbilityType__Enum granted_type = item->fields.Upgrade->fields.AcquiredAbilityType;
        const app::AbilityType__Enum required_type = item->fields.Upgrade->fields.RequiredAbility;
        if (granted_type != app::AbilityType__Enum_None)
            return csharp_bridge::opher_bought_weapon(granted_type);

        if (required_type == app::AbilityType__Enum_None) // fast travel; 255, 255 -> 105, 0
            return csharp_bridge::opher_bought_weapon(app::AbilityType__Enum_TeleportSpell);

        return csharp_bridge::opher_bought_upgrade(required_type);
    }

    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, get_IsAffordable, (app::WeaponmasterItem* this_ptr)) {
        const auto key = get_key(this_ptr);
        const auto it = opher_weapon_costs.find(key);
        if (it != opher_weapon_costs.end())
        {
            auto cost = uber_states::get_uber_state_value(uber_states::constants::OPHER_WEAPON_GROUP_ID, it->second);
            return get_experience() >= cost;
        }

        return WeaponmasterItem::get_IsAffordable(this_ptr);
    }

    IL2CPP_BINDING(, UISoundSettingsAsset, bool, PlaySoundEvent, (app::UISoundSettingsAsset* this_ptr, app::Event_1* sound_event));
    IL2CPP_INTERCEPT(, WeaponmasterItem, bool, TryPurchase, (app::WeaponmasterItem* this_ptr, app::Action_1_MessageProvider_* show_hint, app::UISoundSettingsAsset* sounds, app::ShopKeeperHints* hints)) {
        app::MessageProvider* selected_hint;
        if (has_been_purchased_before(this_ptr))
            selected_hint = hints->fields.AlreadyOwned;
        else if (get_IsLocked_intercept(this_ptr))
            selected_hint = hints->fields.ShardNotDiscovered;
        else if (!get_IsVisible_intercept(this_ptr))
            selected_hint = hints->fields.ShardNotDiscovered;
        else if (!get_IsAffordable_intercept(this_ptr))
            selected_hint = hints->fields.NotEnoughSpiritLight;
        else
            return true;

        il2cpp::invoke(show_hint, "Invoke", selected_hint);
        if (sounds != nullptr)
            UISoundSettingsAsset::PlaySoundEvent(sounds, sounds->fields.InvalidItem);

        return false;
    }

    IL2CPP_INTERCEPT(, ShopkeeperUIItem, void, UpdateItem, (app::ShopkeeperUIItem* this_ptr, app::ShopkeeperItem* upgrade_item)) {
        if (shops::is_in_shop(shops::ShopType::Opher))
        {
            auto is_max_level = il2cpp::invoke<app::Boolean__Boxed>(upgrade_item, "get_IsMaxLevel")->fields;
            auto is_affordable = il2cpp::invoke<app::Boolean__Boxed>(upgrade_item, "get_IsAffordable")->fields;
            auto is_visible = il2cpp::invoke<app::Boolean__Boxed>(upgrade_item, "get_IsVisible")->fields;
            auto is_locked = il2cpp::invoke<app::Boolean__Boxed>(upgrade_item, "get_IsLocked")->fields;
            auto already_owned = has_been_purchased_before(reinterpret_cast<app::WeaponmasterItem*>(upgrade_item));

            auto available = is_visible && !is_locked && !is_max_level;
            GameObject::SetActive(this_ptr->fields.LockedGO, is_locked || !is_visible);
            GameObject::SetActive(this_ptr->fields.AlreadyOwnedGO, already_owned);
            GameObject::SetActive(this_ptr->fields.AvailableToBuyGO, available && is_affordable);
            GameObject::SetActive(this_ptr->fields.TooExpensiveGO, available && !is_affordable);

            auto ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.AvailableToBuyGO, "", "ShopkeeperUISubItem");
            ui_sub_item->fields.m_item = upgrade_item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);

            ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.AlreadyOwnedGO, "", "ShopkeeperUISubItem");
            ui_sub_item->fields.m_item = upgrade_item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);

            ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.AlreadyOwnedGO, "", "ShopkeeperUISubItem");
            ui_sub_item->fields.m_item = upgrade_item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);

            ui_sub_item = il2cpp::unity::get_component<app::ShopkeeperUISubItem>(this_ptr->fields.LockedGO, "", "ShopkeeperUISubItem");
            ui_sub_item->fields.m_item = upgrade_item;
            ShopkeeperUISubItem::UpdateItem(ui_sub_item);
        }
        else
            ShopkeeperUIItem::UpdateItem(this_ptr, upgrade_item);
    }
}

namespace shops
{
    void set_opher_providers(app::ShopkeeperItem* shop_item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider, app::MessageProvider*& locked_provider)
    {
        auto* const item = reinterpret_cast<app::WeaponmasterItem*>(shop_item);
        const auto key = get_key(item);
        const auto it = opher_overrides.find(key);
        if (it != opher_overrides.end())
        {
            name_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
            description_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
            locked_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.locked));
        }
    }

    std::shared_ptr<textures::TextureData> get_opher_icon(app::WeaponmasterItem* shop_item)
    {
        const auto key = get_key(shop_item);
        const auto it = opher_overrides.find(key);
        if (it != opher_overrides.end() && it->second.texture_data != nullptr)
            return it->second.texture_data;

        return nullptr;
    }
}

INJECT_C_DLLEXPORT void set_opher_item(int acquired, int required, const wchar_t* name, const wchar_t* description, const wchar_t* texture, const wchar_t* locked, bool uses_energy, bool is_locked, bool is_visible) {
    const auto key = opher_key(acquired, required);
    auto& item = opher_overrides[key];
    set_item(item, name, description, texture, locked, uses_energy, is_locked, is_visible);
}
