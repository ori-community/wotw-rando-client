#include <Common/ext.h>
#include <game/pickups/shops/general.h>
#include <interop/csharp_bridge.h>
#include <randomizer/render/textures.h>
#include <uber_states/uber_state_helper.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/app/methods/Moon/SerializedByteUberState.h>
#include <Il2CppModLoader/app/methods/SpellInventory.h>
#include <Il2CppModLoader/app/methods/UISoundSettingsAsset.h>
#include <Il2CppModLoader/app/methods/UpgradableShardItem.h>
#include <Il2CppModLoader/app/methods/WeaponmasterItem.h>
#include <Il2CppModLoader/app/types/WeaponmasterItem.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

#include <functional>
#include <set>

using namespace modloader;
using namespace app::classes;

namespace {
    bool weaponmaster_purchase_in_progress = false;
    uint16_t opher_key(int acq, int req) {
        return static_cast<uint16_t>(acq & 0xFF) | (static_cast<uint16_t>(req & 0xFF) << 8);
    }

    uint16_t opher_key(app::AbilityType__Enum acq, int req) {
        return opher_key(static_cast<int>(acq), req);
    }

    uint16_t opher_key(int acq, app::AbilityType__Enum req) {
        return opher_key(acq, static_cast<int>(req));
    }

    uint16_t opher_key(app::AbilityType__Enum acq, app::AbilityType__Enum req) {
        return opher_key(static_cast<int>(acq), static_cast<int>(req));
    }

    std::unordered_map<uint16_t, uber_states::UberState> opher_weapon_costs{
        { opher_key(app::AbilityType__Enum::WaterBreath, 255), uber_states::UberState(UberStateGroup::OpherWeapon, 10023) }, // Water breath
        { opher_key(app::AbilityType__Enum::SpiritSpearSpell, 255), uber_states::UberState(UberStateGroup::OpherWeapon, 10074) }, // Spike
        { opher_key(app::AbilityType__Enum::Hammer, 255), uber_states::UberState(UberStateGroup::OpherWeapon, 10098) }, // Hammer
        { opher_key(255, 255), uber_states::UberState(UberStateGroup::OpherWeapon, 10105) }, // Fast Travel
        { opher_key(app::AbilityType__Enum::ChakramSpell, 255), uber_states::UberState(UberStateGroup::OpherWeapon, 10106) }, // Shuriken
        { opher_key(app::AbilityType__Enum::Blaze, 255), uber_states::UberState(UberStateGroup::OpherWeapon, 10115) }, // Blaze
        { opher_key(app::AbilityType__Enum::TurretSpell, 255), uber_states::UberState(UberStateGroup::OpherWeapon, 10116) }, // Sentry
        { opher_key(255, app::AbilityType__Enum::SpiritSpearSpell), uber_states::UberState(UberStateGroup::OpherWeapon, 11074) }, // Exploding Spike
        { opher_key(255, app::AbilityType__Enum::Hammer), uber_states::UberState(UberStateGroup::OpherWeapon, 11098) }, // Shock Smash
        { opher_key(255, app::AbilityType__Enum::ChakramSpell), uber_states::UberState(UberStateGroup::OpherWeapon, 11106) }, // Static Shuriken
        { opher_key(255, app::AbilityType__Enum::Blaze), uber_states::UberState(UberStateGroup::OpherWeapon, 11115) }, // Charged Blaze
        { opher_key(255, app::AbilityType__Enum::TurretSpell), uber_states::UberState(UberStateGroup::OpherWeapon, 11116) }, // Rapid Sentry
    };

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, get_IsOwned, (app::WeaponmasterItem * item)) {
        if (shops::is_in_shop(shops::ShopType::Opher)) {
            const app::AbilityType__Enum granted_type = item->fields.Upgrade->fields.AcquiredAbilityType;
            const app::AbilityType__Enum required_type = item->fields.Upgrade->fields.RequiredAbility;
            if (granted_type != app::AbilityType__Enum::None)
                return csharp_bridge::opher_bought_weapon(granted_type);

            if (required_type == app::AbilityType__Enum::None) // fast travel; 255, 255 -> 105, 0
                return csharp_bridge::opher_bought_weapon(app::AbilityType__Enum::TeleportSpell);

            return csharp_bridge::opher_bought_upgrade(required_type);
        }

        return next::WeaponmasterItem::get_IsOwned(item);
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, int, GetCostForLevel, (app::WeaponmasterItem * item, int level)) {
        if (shops::is_in_shop(shops::ShopType::Opher)) {
            const auto acq = static_cast<int>(item->fields.Upgrade->fields.AcquiredAbilityType);
            const auto req = static_cast<int>(item->fields.Upgrade->fields.RequiredAbility);
            const auto key = opher_key(acq, req);
            if (opher_weapon_costs.find(key) != opher_weapon_costs.end())
                return opher_weapon_costs[opher_key(acq, req)].get<int>();

            return 300; // todo; maybe a bit smarter than this?
        }

        return next::WeaponmasterItem::GetCostForLevel(item, level);
    }

    IL2CPP_INTERCEPT(SpellInventory, app::PlayerUberStateInventory_InventoryItem*, AddNewSpellToInventory, (app::SpellInventory * this_ptr, app::EquipmentType__Enum type, bool adding)) {
        if (weaponmaster_purchase_in_progress)
            return nullptr;

        return next::SpellInventory::AddNewSpellToInventory(this_ptr, type, adding);
    }

    IL2CPP_INTERCEPT(Moon::SerializedByteUberState, void, set_Value, (app::SerializedByteUberState * this_ptr, uint8_t value)) {
        if (weaponmaster_purchase_in_progress)
            return;

        next::Moon::SerializedByteUberState::set_Value(this_ptr, value);
    }

    // TODO: Maybe rewrite to do it ourselves.
    IL2CPP_INTERCEPT(WeaponmasterItem, void, DoPurchase, (app::WeaponmasterItem * this_ptr, app::PurchaseContext* context)) {
        weaponmaster_purchase_in_progress = true;
        next::WeaponmasterItem::DoPurchase(this_ptr, context); // purchase first for keystone purposes
        weaponmaster_purchase_in_progress = false;
        // Weaponmasteritem$$DoPurchase
        const auto ability_type = this_ptr->fields.Upgrade->fields.AcquiredAbilityType;
        if (ability_type != app::AbilityType__Enum::None) {
            csharp_bridge::opher_buy_weapon(ability_type);
        } else {
            const auto required_type = this_ptr->fields.Upgrade->fields.RequiredAbility;
            if (required_type == app::AbilityType__Enum::None) { // fast travel; 255, 255 -> 105, 0
                csharp_bridge::opher_buy_weapon(app::AbilityType__Enum::TeleportSpell);
            } else
                csharp_bridge::opher_buy_upgrade(required_type);
        }
    }

    std::unordered_map<uint16_t, shops::ShopItem> opher_overrides;

    uint16_t get_key(app::WeaponmasterItem* item) {
        const auto acquired = static_cast<uint16_t>(item->fields.Upgrade->fields.AcquiredAbilityType);
        const auto required = static_cast<uint16_t>(item->fields.Upgrade->fields.RequiredAbility) << 8;
        return acquired | required;
    }

    IL2CPP_INTERCEPT(UpgradableShardItem, bool, get_IsVisible, (app::UpgradableShardItem * z)) {
        return true;
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, get_IsVisible, (app::WeaponmasterItem * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::WeaponmasterItem::get_class()) && this_ptr->fields.Upgrade != nullptr) {
            const auto key = get_key(this_ptr);
            const auto it = opher_overrides.find(key);
            if (it != opher_overrides.end())
                return it->second.is_visible;

            return false;
        }

        return true; // get_IsVisible(this_ptr);
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, get_IsLocked, (app::WeaponmasterItem * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::WeaponmasterItem::get_class()) && this_ptr->fields.Upgrade != nullptr) {
            const auto key = get_key(this_ptr);
            const auto it = opher_overrides.find(key);
            if (it != opher_overrides.end())
                return it->second.is_locked;

            return true;
        }

        return false; // get_IsLocked(this_ptr);
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, get_UsesEnergy, (app::WeaponmasterItem * this_ptr)) {
        const auto key = get_key(this_ptr);
        const auto it = opher_overrides.find(key);
        if (it == opher_overrides.end())
            return next::WeaponmasterItem::get_UsesEnergy(this_ptr);

        return it->second.uses_energy;
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, get_IsAffordable, (app::WeaponmasterItem * this_ptr)) {
        const auto key = get_key(this_ptr);
        const auto it = opher_weapon_costs.find(key);
        if (it != opher_weapon_costs.end()) {
            auto cost = it->second.get<int>();
            return get_experience() >= cost;
        }

        return next::WeaponmasterItem::get_IsAffordable(this_ptr);
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, TryPurchase, (app::WeaponmasterItem * this_ptr, app::Action_1_MessageProvider_* show_hint, app::UISoundSettingsAsset* sounds, app::ShopKeeperHints* hints)) {
        app::MessageProvider* selected_hint;
        if (!WeaponmasterItem::get_IsVisible(this_ptr))
            selected_hint = hints->fields.ShardNotDiscovered;
        else if (WeaponmasterItem::get_IsLocked(this_ptr))
            selected_hint = hints->fields.ShardNotDiscovered;
        else if (WeaponmasterItem::get_IsOwned(this_ptr))
            selected_hint = hints->fields.AlreadyOwned;
        else if (!WeaponmasterItem::get_IsAffordable(this_ptr))
            selected_hint = hints->fields.NotEnoughSpiritLight;
        else
            return true;

        il2cpp::invoke(show_hint, "Invoke", selected_hint);
        if (sounds != nullptr)
            UISoundSettingsAsset::PlaySoundEvent(sounds, sounds->fields.InvalidItem);

        return false;
    }
} // namespace

namespace shops {
    void set_opher_providers(app::WeaponmasterItem* item, app::MessageProvider*& name_provider, app::MessageProvider*& description_provider) {
        const auto key = get_key(item);
        const auto it = opher_overrides.find(key);
        if (it != opher_overrides.end()) {
            name_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.name));
            description_provider = reinterpret_cast<app::MessageProvider*>(il2cpp::gchandle_target(it->second.description));
        }
    }

    std::shared_ptr<randomizer::textures::TextureData> get_opher_icon(app::WeaponmasterItem* shop_item) {
        const auto key = get_key(shop_item);
        const auto it = opher_overrides.find(key);
        if (it != opher_overrides.end() && it->second.texture_data != nullptr)
            return it->second.texture_data;

        return nullptr;
    }
} // namespace shops

INJECT_C_DLLEXPORT void set_opher_item(int acquired, int required, const wchar_t* name, const wchar_t* description, const wchar_t* texture, bool uses_energy, bool is_locked, bool is_visible) {
    const auto key = opher_key(acquired, required);
    auto& item = opher_overrides[key];
    set_item(item, name, description, texture, uses_energy, is_locked, is_visible);
}
