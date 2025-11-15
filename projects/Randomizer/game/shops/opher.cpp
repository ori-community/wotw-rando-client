#include <Randomizer/game/shops/opher.h>
#include <Randomizer/game/shops/shop.h>

#include <Core/api/game/player.h>

#include <Modloader/app/methods/DesiredUberStateComposite.h>
#include <Modloader/app/methods/Moon/SerializedByteUberState.h>
#include <Modloader/app/methods/SpellUIExperience.h>
#include <Modloader/app/methods/UISoundSettingsAsset.h>
#include <Modloader/app/methods/UpgradableShardItem.h>
#include <Modloader/app/methods/WeaponmasterItem.h>
#include <Modloader/app/types/PurchaseContext.h>
#include <Modloader/app/types/SpellUIExperience.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/app/types/WeaponmasterItem.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <set>

namespace randomizer::game::shops::opher {
    core::api::uber_states::UberState get_slot_key_for_ability_types(app::AbilityType__Enum acquired_ability_type, app::AbilityType__Enum required_ability) {
        switch (acquired_ability_type) {
            case app::AbilityType__Enum::WaterBreath:
            case app::AbilityType__Enum::SpiritSpearSpell:
            case app::AbilityType__Enum::Hammer:
            case app::AbilityType__Enum::ChakramSpell:
            case app::AbilityType__Enum::Blaze:
            case app::AbilityType__Enum::TurretSpell:
                return {UberStateGroup::OpherShop, static_cast<int>(acquired_ability_type)};
            default:;
        }

        switch (required_ability) {
            case app::AbilityType__Enum::SpiritSpearSpell:
            case app::AbilityType__Enum::Hammer:
            case app::AbilityType__Enum::ChakramSpell:
            case app::AbilityType__Enum::Blaze:
            case app::AbilityType__Enum::TurretSpell:
                return {UberStateGroup::OpherShop, 1000 + static_cast<int>(required_ability)};
            default:;
        }

        // Fast Travel
        if (
            acquired_ability_type == app::AbilityType__Enum::None &&
            required_ability == app::AbilityType__Enum::None
        ) {
            return {UberStateGroup::OpherShop, 105};
        }

        throw std::exception("Unknown Opher ability type combination for Opher shop");
    }

    ShopCollection::opher_shop_t::slot_t& get_slot(app::AbilityType__Enum acquired_ability_type, app::AbilityType__Enum required_ability) {
        const auto slot = shops().opher_shop().slot(get_slot_key_for_ability_types(acquired_ability_type, required_ability));

        if (!slot.has_value()) {
            throw std::exception("Missing Opher shop slot");
        }

        return slot.value().get();
    }

    namespace {
        using namespace modloader;
        using namespace app::classes;
        using namespace randomizer::game::shops;

        IL2CPP_INTERCEPT(bool, WeaponmasterItem, get_IsOwned, app::WeaponmasterItem* item) {
            if (is_in_shop(ShopType::Opher)) {
                return is_owned(get_slot(item->fields.Upgrade->fields.AcquiredAbilityType, item->fields.Upgrade->fields.RequiredAbility));
            }

            return next::WeaponmasterItem::get_IsOwned(item);
        }

        IL2CPP_INTERCEPT(int, WeaponmasterItem, GetCostForLevel, app::WeaponmasterItem* item, int level) {
            if (is_in_shop(ShopType::Opher)) {
                const auto& slot = get_slot(item->fields.Upgrade->fields.AcquiredAbilityType, item->fields.Upgrade->fields.RequiredAbility);

                return slot.cost.get();
            }

            return next::WeaponmasterItem::GetCostForLevel(item, level);
        }

        IL2CPP_INTERCEPT(void, WeaponmasterItem, DoPurchase, app::WeaponmasterItem* this_ptr, app::PurchaseContext* context) {
            auto level = Moon::SerializedByteUberState::get_Value(this_ptr->fields.Upgrade->fields.UpgradeLevel);
            if (level == 0) {
                DesiredUberStateComposite::WriteDesiredStates(this_ptr->fields.Upgrade->fields.ChangeStateOnPurchase);
            }

            auto ui_experience = il2cpp::unity::get_component_in_children<app::SpellUIExperience>(
                il2cpp::unity::get_game_object(types::UI::get_class()->static_fields->SeinUI), types::SpellUIExperience::get_class()
            );
            SpellUIExperience::Spend(ui_experience, WeaponmasterItem::GetCostForLevel(this_ptr, level));

            // TODO: Make uber states for context->ForceHideScreenOnPurchase to be able to hide the screen after purchase via headers
            // The commented code below is vanilla behavior and not suitable for rando.
            //
            // if (this_ptr->fields.Upgrade->fields.DiscountCondition != nullptr &&
            // !Moon::ConditionUberState::EvaluateConditions(this_ptr->fields.Upgrade->fields.DiscountCondition)) {
            //     context->ForceHideScreenOnPurchase = true;
            //     context->Result = app::PurchaseResult__Enum::UsedUpDiscount;
            // }

            const auto& slot = get_slot(this_ptr->fields.Upgrade->fields.AcquiredAbilityType, this_ptr->fields.Upgrade->fields.RequiredAbility);

            buy_item(slot);
        }

        IL2CPP_INTERCEPT(bool, UpgradableShardItem, get_IsVisible, app::UpgradableShardItem* z) {
            // TODO: Is this needed?
            return true;
        }

        IL2CPP_INTERCEPT_WITH_ORDER(10, bool, WeaponmasterItem, get_IsVisible, app::WeaponmasterItem* this_ptr) {
            if (il2cpp::is_assignable(this_ptr, types::WeaponmasterItem::get_class()) && this_ptr->fields.Upgrade != nullptr) {
                auto& slot = get_slot(this_ptr->fields.Upgrade->fields.AcquiredAbilityType, this_ptr->fields.Upgrade->fields.RequiredAbility);

                return slot.visibility() == SlotVisibility::Visible;
            }

            return next::WeaponmasterItem::get_IsVisible(this_ptr);
        }

        IL2CPP_INTERCEPT(bool, WeaponmasterItem, get_IsLocked, app::WeaponmasterItem* this_ptr) {
            if (il2cpp::is_assignable(this_ptr, types::WeaponmasterItem::get_class()) && this_ptr->fields.Upgrade != nullptr) {
                auto& slot = get_slot(this_ptr->fields.Upgrade->fields.AcquiredAbilityType, this_ptr->fields.Upgrade->fields.RequiredAbility);

                return slot.visibility() == SlotVisibility::Locked;
            }

            return false; // get_IsLocked(this_ptr);
        }

        // Hide the "Uses Energy" label in the shop screen as it's easily replacable with a colored description.
        IL2CPP_INTERCEPT(bool, WeaponmasterItem, get_UsesEnergy, app::WeaponmasterItem* this_ptr) { return false; }

        IL2CPP_INTERCEPT(bool, WeaponmasterItem, get_IsAffordable, app::WeaponmasterItem* this_ptr) {
            auto& slot = get_slot(this_ptr->fields.Upgrade->fields.AcquiredAbilityType, this_ptr->fields.Upgrade->fields.RequiredAbility);

            return core::api::game::player::spirit_light().get() >= slot.cost.get();
        }

        IL2CPP_INTERCEPT(
            bool,
            WeaponmasterItem,
            TryPurchase,
            app::WeaponmasterItem* this_ptr,
            app::Action_1_MessageProvider_* show_hint,
            app::UISoundSettingsAsset* sounds,
            app::ShopKeeperHints* hints
        ) {
            app::MessageProvider* selected_hint;
            if (!WeaponmasterItem::get_IsVisible(this_ptr)) {
                selected_hint = hints->fields.ShardNotDiscovered;
            } else if (WeaponmasterItem::get_IsLocked(this_ptr)) {
                selected_hint = hints->fields.ShardNotDiscovered;
            } else if (WeaponmasterItem::get_IsOwned(this_ptr)) {
                selected_hint = hints->fields.AlreadyOwned;
            } else if (!WeaponmasterItem::get_IsAffordable(this_ptr)) {
                selected_hint = hints->fields.NotEnoughSpiritLight;
            } else {
                return true;
            }

            il2cpp::invoke(show_hint, "Invoke", selected_hint);
            if (sounds != nullptr) {
                UISoundSettingsAsset::PlaySoundEvent(sounds, sounds->fields.InvalidItem);
            }

            return false;
        }
    } // namespace
} // namespace randomizer::game::shops::opher
