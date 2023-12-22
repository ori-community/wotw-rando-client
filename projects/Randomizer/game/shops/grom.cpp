#include <Randomizer/game/shops/shop.h>

#include <Core/api/game/player.h>
#include <Core/api/game/ui.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/text/text_database.h>

#include <Modloader/app/methods/BuilderEntity.h>
#include <Modloader/app/methods/BuilderItem.h>
#include <Modloader/app/methods/BuilderScreen.h>
#include <Modloader/app/methods/EquipmentUIInventoryGrid.h>
#include <Modloader/app/methods/ShopkeeperScreen.h>
#include <Modloader/app/methods/SpellUISeeds.h>
#include <Modloader/app/methods/UISoundSettingsAsset.h>
#include <Modloader/app/types/BuilderItem.h>
#include <Modloader/app/types/ChangeStateOnCondition.h>
#include <Modloader/app/types/SpellUISeeds.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

namespace {
    using namespace modloader;
    using namespace app::classes;
    using namespace randomizer::game::shops;

    auto scene = core::api::scenes::single_event_bus().register_handler("wellspringGladesHubSetups", [](auto metadata, auto) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        auto projects = il2cpp::unity::find_child(metadata->scene->fields.SceneRoot, std::vector<std::string>{"interactives", "builderProjects"});
        auto huts_a = il2cpp::unity::find_child(projects, "mokiHutsSetup");
        for (auto component:
            il2cpp::unity::get_components<app::ChangeStateOnCondition>(huts_a, reinterpret_cast<Il2CppClass*>(types::ChangeStateOnCondition::get_class()))) {
            const auto state_data = component->fields.StateChange->fields._._.StateData->fields._items->vector[0];
            if (state_data->fields.m_desiredValue < 2) {
                il2cpp::unity::destroy_object(component);
            }
        }

        auto huts_b = il2cpp::unity::find_child(projects, "mokiHutsBSetup");
        for (auto component:
            il2cpp::unity::get_components<app::ChangeStateOnCondition>(huts_b, reinterpret_cast<Il2CppClass*>(types::ChangeStateOnCondition::get_class()))) {
            const auto state_data = component->fields.StateChange->fields._._.StateData->fields._items->vector[0];
            if (state_data->fields.m_desiredValue < 2) {
                il2cpp::unity::destroy_object(component);
            }
        }
    });

    // Why ores are treated as seeds, nobody knows.
    core::api::uber_states::UberState ore_spent(UberStateGroup::RandoStats, 6);
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
            return slot != nullptr && slot->visibility() == SlotVisibility::Visible;
        } else {
            return next::BuilderItem::get_IsVisible(this_ptr);
        }
    }

    IL2CPP_INTERCEPT(BuilderItem, bool, get_IsLocked, (app::BuilderItem * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::BuilderItem::get_class())) {
            auto slot = grom_shop().slot(this_ptr->fields.Project->fields.UberState);
            return slot != nullptr && slot->visibility() == SlotVisibility::Locked;
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
            const auto state = core::api::uber_states::UberState(this_ptr->fields.Project->fields.UberState);
            return state.get<int>() >= 3;
        }

        return next::BuilderItem::get_IsOwned(this_ptr);
    }

    bool show_hint(void* show_hint_action, app::UISoundSettingsAsset* sounds, app::MessageProvider* provider) {
        il2cpp::invoke(show_hint_action, "Invoke", provider);
        if (sounds != nullptr) {
            UISoundSettingsAsset::PlaySoundEvent(sounds, sounds->fields.InvalidItem);
        }

        return false;
    }

    IL2CPP_INTERCEPT(BuilderItem, void, DoPurchase, (app::BuilderItem * this_ptr, app::PurchaseContext* context)) {
        const auto cutscene_state = 2 + this_ptr->fields.Project->fields.UberState->fields.m_value;
        if (core::api::uber_states::UberState(UberStateGroup::GromShop, cutscene_state).get<bool>()) {
            // The normal method calls a DelayedAction.Action
            next::BuilderItem::DoPurchase(this_ptr, context);
            return;
        }

        const auto cost = BuilderItem::GetCostForLevel(this_ptr, 1);
        const auto seed_ui = core::api::game::ui::get()->static_fields->SeinUI->fields.SeedsUI;
        SpellUISeeds::Spend(il2cpp::unity::get_component_in_children<app::SpellUISeeds>(seed_ui, types::SpellUISeeds::get_class()), cost);
        core::api::uber_states::UberState(this_ptr->fields.Project->fields.UberState).set(2);
    }

    IL2CPP_INTERCEPT(
        BuilderItem,
        bool,
        TryPurchase,
        (app::BuilderItem * this_ptr, app::Action_1_MessageProvider_* show_hint_action, app::UISoundSettingsAsset* sounds, app::ShopKeeperHints* hints)
    ) {
        if (!BuilderItem::get_IsVisible(this_ptr)) {
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

    IL2CPP_INTERCEPT(EquipmentUIInventoryGrid, void, UpdateItemProperties, (app::EquipmentUIInventoryGrid * this_ptr, app::Object* context)) {
        next::EquipmentUIInventoryGrid::UpdateItemProperties(this_ptr, context);
    }

    IL2CPP_INTERCEPT(BuilderScreen, void, CompletePurchase, (app::BuilderScreen * this_ptr)) {
        const auto shopkeeper_screen = reinterpret_cast<app::ShopkeeperScreen*>(this_ptr);
        const auto item = reinterpret_cast<app::BuilderItem*>(ShopkeeperScreen::get_SelectedUpgradeItem(shopkeeper_screen));
        const auto cutscene_state = 200000 + item->fields.Project->fields.UberState->fields._.m_id->fields.m_id;
        const auto should_play_cutscene = core::api::uber_states::UberState(UberStateGroup::GromShop, cutscene_state).get<bool>();
        shopkeeper_screen->fields.HideScreenAfterPurchase = should_play_cutscene;
        next::BuilderScreen::CompletePurchase(this_ptr);
        if (!should_play_cutscene) {
            BuilderEntity::get_Instance()->fields.PurchasedProject = false;
            core::api::uber_states::UberState(item->fields.Project->fields.UberState).set(3);
            ShopkeeperScreen::UpdateContextCanvasShards(reinterpret_cast<app::ShopkeeperScreen*>(this_ptr));
        }
    }

    // Force project order because we disable SortByCost on shops
    IL2CPP_INTERCEPT(BuilderScreen, void, Init, (app::BuilderScreen * this_ptr)) {
        const auto project_teleporter = this_ptr->fields.Projects->vector[0];
        const auto project_houses1 = this_ptr->fields.Projects->vector[1];
        const auto project_houses2 = this_ptr->fields.Projects->vector[2];
        const auto project_houses3 = this_ptr->fields.Projects->vector[3];
        const auto project_cave = this_ptr->fields.Projects->vector[4];
        const auto project_thorns = this_ptr->fields.Projects->vector[5];
        const auto project_beautify = this_ptr->fields.Projects->vector[6];

        this_ptr->fields.Projects->vector[0] = project_teleporter;
        this_ptr->fields.Projects->vector[1] = project_houses1;
        this_ptr->fields.Projects->vector[2] = project_thorns;
        this_ptr->fields.Projects->vector[3] = project_houses2;
        this_ptr->fields.Projects->vector[4] = project_cave;
        this_ptr->fields.Projects->vector[5] = project_houses3;
        this_ptr->fields.Projects->vector[6] = project_beautify;

        next::BuilderScreen::Init(this_ptr);
    }
} // namespace
