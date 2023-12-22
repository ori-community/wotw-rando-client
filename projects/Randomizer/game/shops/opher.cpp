#include <Randomizer/game/shops/shop.h>

#include <Core/api/game/player.h>

#include <Modloader/app/methods/DesiredUberStateComposite.h>
#include <Modloader/app/methods/Moon/ConditionUberState.h>
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

namespace {
    using namespace modloader;
    using namespace app::classes;
    using namespace randomizer::game::shops;

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, get_IsOwned, (app::WeaponmasterItem * item)) {
        if (is_in_shop(ShopType::Opher)) {
            auto key = std::make_pair(
                item->fields.Upgrade->fields.AcquiredAbilityType,
                item->fields.Upgrade->fields.RequiredAbility
            );

            return is_owned(*opher_shop().slot(key));
        }

        return next::WeaponmasterItem::get_IsOwned(item);
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, int, GetCostForLevel, (app::WeaponmasterItem * item, int level)) {
        if (is_in_shop(ShopType::Opher)) {
            auto key = std::make_pair(
                item->fields.Upgrade->fields.AcquiredAbilityType,
                item->fields.Upgrade->fields.RequiredAbility
            );

            return opher_shop().slot(key)->cost.get<int>();
        }

        return next::WeaponmasterItem::GetCostForLevel(item, level);
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, void, DoPurchase, (app::WeaponmasterItem * this_ptr, app::PurchaseContext* context)) {
        auto level = Moon::SerializedByteUberState::get_Value(this_ptr->fields.Upgrade->fields.UpgradeLevel);
        if (level == 0) {
            DesiredUberStateComposite::WriteDesiredStates(this_ptr->fields.Upgrade->fields.ChangeStateOnPurchase);
        }

        auto ui_experience = il2cpp::unity::get_component_in_children<app::SpellUIExperience>(
            il2cpp::unity::get_game_object(types::UI::get_class()->static_fields->SeinUI),
            types::SpellUIExperience::get_class()
        );
        SpellUIExperience::Spend(ui_experience, WeaponmasterItem::GetCostForLevel(this_ptr, level));

        // TODO: Make uber states for context->ForceHideScreenOnPurchase to be able to hide the screen after purchase via headers
        // The commented code below is vanilla behavior and not suitable for rando.
        //
        // if (this_ptr->fields.Upgrade->fields.DiscountCondition != nullptr && !Moon::ConditionUberState::EvaluateConditions(this_ptr->fields.Upgrade->fields.DiscountCondition)) {
        //     context->ForceHideScreenOnPurchase = true;
        //     context->Result = app::PurchaseResult__Enum::UsedUpDiscount;
        // }

        auto key = std::make_pair(
            this_ptr->fields.Upgrade->fields.AcquiredAbilityType,
            this_ptr->fields.Upgrade->fields.RequiredAbility
        );

        buy_item(*opher_shop().slot(key));
    }

    IL2CPP_INTERCEPT(UpgradableShardItem, bool, get_IsVisible, (app::UpgradableShardItem * z)) {
        // TODO: Is this needed?
        return true;
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, get_IsVisible, (app::WeaponmasterItem * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::WeaponmasterItem::get_class()) && this_ptr->fields.Upgrade != nullptr) {
            auto key = std::make_pair(
                this_ptr->fields.Upgrade->fields.AcquiredAbilityType,
                this_ptr->fields.Upgrade->fields.RequiredAbility
            );

            return opher_shop().slot(key)->visibility() == SlotVisibility::Visible;
        }

        return true; // get_IsVisible(this_ptr);
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, get_IsLocked, (app::WeaponmasterItem * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::WeaponmasterItem::get_class()) && this_ptr->fields.Upgrade != nullptr) {
            auto key = std::make_pair(
                this_ptr->fields.Upgrade->fields.AcquiredAbilityType,
                this_ptr->fields.Upgrade->fields.RequiredAbility
            );

            return opher_shop().slot(key)->visibility() == SlotVisibility::Locked;
        }

        return false; // get_IsLocked(this_ptr);
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, get_UsesEnergy, (app::WeaponmasterItem * this_ptr)) {
        auto key = std::make_pair(
            this_ptr->fields.Upgrade->fields.AcquiredAbilityType,
            this_ptr->fields.Upgrade->fields.RequiredAbility
        );

        return opher_shop().slot(key)->uses_energy;
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, get_IsAffordable, (app::WeaponmasterItem * this_ptr)) {
        auto key = std::make_pair(
            this_ptr->fields.Upgrade->fields.AcquiredAbilityType,
            this_ptr->fields.Upgrade->fields.RequiredAbility
        );

        return core::api::game::player::spirit_light().get() >= opher_shop().slot(key)->cost.get<int>();
    }

    IL2CPP_INTERCEPT(WeaponmasterItem, bool, TryPurchase, (app::WeaponmasterItem * this_ptr, app::Action_1_MessageProvider_* show_hint, app::UISoundSettingsAsset* sounds, app::ShopKeeperHints* hints)) {
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
