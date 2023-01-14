#include <game/shops/shop.h>

#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/text/text_database.h>

#include <Modloader/app/methods/BuilderItem.h>
#include <Modloader/app/methods/BuilderScreen.h>
#include <Modloader/app/methods/SpellUISeeds.h>
#include <Modloader/app/methods/UISoundSettingsAsset.h>
#include <Modloader/app/types/BuilderItem.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <set>

namespace {
    using namespace modloader;
    using namespace app::classes;
    using namespace randomizer::game::shops;

    // Why ores are treated as seeds, nobody knows.
    core::api::uber_states::UberState ore_spent(UberStateGroup::RandoState, 6);
    IL2CPP_INTERCEPT(SpellUISeeds, bool, Spend, (app::SpellUISeeds * this_ptr, int amount)) {
        bool worked = next::SpellUISeeds::Spend(this_ptr, amount);
        if (worked) {
            ore_spent.set(amount + ore_spent.get());
        }

        return worked;
    }

    IL2CPP_INTERCEPT(BuilderItem, int, GetCostForLevel, (app::BuilderItem * this_ptr, int level)) {
        if (il2cpp::is_assignable(this_ptr, types::BuilderItem::get_class())) {
            auto slot = grom_shop().slot(this_ptr->fields.Project->fields.UberState);
            return slot != nullptr ? slot->cost.get<int>() : 0;
        } else {
            return next::BuilderItem::GetCostForLevel(this_ptr, level);
        }
    }

    IL2CPP_INTERCEPT(BuilderItem, bool, get_IsVisible, (app::BuilderItem * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::BuilderItem::get_class())) {
            auto slot = grom_shop().slot(this_ptr->fields.Project->fields.UberState);
            return slot != nullptr && slot->visibility == SlotVisibility::Visible;
        } else {
            return next::BuilderItem::get_IsVisible(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(BuilderItem, bool, get_IsLocked, (app::BuilderItem * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::BuilderItem::get_class())) {
            auto slot = grom_shop().slot(this_ptr->fields.Project->fields.UberState);
            return slot != nullptr && slot->visibility == SlotVisibility::Locked;
        } else {
            return next::BuilderItem::get_IsLocked(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(BuilderItem, bool, get_IsAffordable, (app::BuilderItem * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::BuilderItem::get_class())) {
            return core::api::game::player::ore().get() >= BuilderItem::GetCostForLevel(this_ptr, 1);
        } else {
            return next::BuilderItem::get_IsAffordable(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(BuilderItem, bool, get_IsOwned, (app::BuilderItem * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::BuilderItem::get_class())) {
            auto slot = grom_shop().slot(this_ptr->fields.Project->fields.UberState);
            return slot != nullptr && is_owned(*slot);
        } else {
            return next::BuilderItem::get_IsOwned(this_ptr);
        }
    }

    bool show_hint(void* show_hint_action, app::UISoundSettingsAsset* sounds, app::MessageProvider* provider) {
        il2cpp::invoke(show_hint_action, "Invoke", provider);
        if (sounds != nullptr) {
            UISoundSettingsAsset::PlaySoundEvent(sounds, sounds->fields.InvalidItem);
        }

        return false;
    }

    IL2CPP_INTERCEPT(BuilderItem, bool, TryPurchase, (app::BuilderItem * this_ptr, app::Action_1_MessageProvider_* show_hint_action, app::UISoundSettingsAsset* sounds, app::ShopKeeperHints* hints)) {
        if (BuilderItem::get_IsVisible(this_ptr)) {
            return show_hint(show_hint_action, sounds, hints->fields.ShardNotDiscovered);
        } else if (BuilderItem::get_IsLocked(this_ptr)) {
            return show_hint(show_hint_action, sounds, hints->fields.IsLocked);
        } else if (BuilderItem::get_IsOwned(this_ptr)) {
            return show_hint(show_hint_action, sounds, hints->fields.MaxedOut);
        } else if (BuilderItem::GetCostForLevel(this_ptr, 1) > core::api::game::player::ore().get()) {
            return show_hint(show_hint_action, sounds, hints->fields.NotEnoughOre);
        } else {
            return true;
        }
    }

    IL2CPP_INTERCEPT(BuilderScreen, void, CompletePurchase, (app::BuilderScreen * this_ptr)) {
        // May want to call ShopkeeperScreen::CompletePurchase instead to prevent PurchasedProject being set on BuilderEntity.
        // ShopkeeperScreen::CompletePurchase(reinterpret_cast<app::ShopkeeperScreen*>(this_ptr));
        BuilderScreen::CompletePurchase(this_ptr);
    }

} // namespace
