#include <Randomizer/game/shops/shop.h>
#include <Randomizer/game/shops/tuley.h>

#include <Core/api/game/player.h>
#include <Core/api/game/ui.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/text/text_database.h>

#include <Modloader/app/methods/GardenerEntity.h>
#include <Modloader/app/methods/GardenerScreen.h>
#include <Modloader/app/methods/GardenerItem.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/ShopkeeperScreen.h>
#include <Modloader/app/methods/UISoundSettingsAsset.h>
#include <Modloader/app/types/GardenerItem.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>


namespace randomizer::game::shops::tuley {
    using namespace modloader;
    using namespace app::classes;
    using namespace randomizer::game::shops;

    app::MoonTimeline* offer_accepted_timeline = nullptr;
    app::MoonTimeline* purchase_failed_timeline = nullptr;

    core::api::uber_states::UberState get_slot_uber_state_from_vanilla_uber_state(const app::SerializedByteUberState* vanilla_uber_state) {
        return core::api::uber_states::UberState(UberStateGroup::TuleyShop, vanilla_uber_state->fields._.m_id->fields.m_id);
    }

    ShopCollection::tuley_shop_t::slot_t& get_slot(const app::SerializedByteUberState* vanilla_state) {
        const auto slot = shops()->tuley_shop().slot(get_slot_uber_state_from_vanilla_uber_state(vanilla_state));

        if (!slot.has_value()) {
            throw std::exception("Missing Tuley shop slot");
        }

        return slot.value().get();
    }

    [[maybe_unused]]
    auto on_hub_setups_loaded = core::api::scenes::single_event_bus().register_handler("wellspringGladesHubSetups", [](auto metadata, auto) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        const auto offer_ability_upgrade_dialog_go = il2cpp::unity::find_child(
            metadata->scene->fields.SceneRoot,
            std::vector<std::string>{
                "interactives",
                "gardenerSetup",
                "gardenerGroup",
                "gardenerEntity(Clone)",
                "dialogs",
                "offerAbilityUpgradeDialog",
            }
        );

        const auto offer_accepted_timeline_go = il2cpp::unity::find_child(
            offer_ability_upgrade_dialog_go,
            std::vector<std::string>{
                "farewellOfferAccepted",
                "farewellOfferAcceptedTimeline",
            }
        );

        const auto purchase_failed_timeline_go = il2cpp::unity::find_child(
            offer_ability_upgrade_dialog_go,
            std::vector<std::string>{
                "purchaseFailed",
                "purchaseFailedTimeline",
            }
        );

        offer_accepted_timeline = il2cpp::unity::get_component<app::MoonTimeline>(offer_accepted_timeline_go, types::MoonTimeline::get_class());
        purchase_failed_timeline = il2cpp::unity::get_component<app::MoonTimeline>(purchase_failed_timeline_go, types::MoonTimeline::get_class());
    });

    IL2CPP_INTERCEPT(int, GardenerItem, GetCostForLevel, app::GardenerItem* this_ptr, int level) {
        auto& slot = shops()->tuley_shop().slot(get_slot_uber_state_from_vanilla_uber_state(this_ptr->fields.Project->fields.UberState)).value().get();
        return slot.cost.get();
    }

    IL2CPP_INTERCEPT_WITH_ORDER(1, bool, GardenerItem, get_IsVisible, app::GardenerItem* this_ptr) {
        if (il2cpp::is_assignable(this_ptr, types::GardenerItem::get_class())) {
            auto& slot = shops()->tuley_shop().slot(get_slot_uber_state_from_vanilla_uber_state(this_ptr->fields.Project->fields.UberState)).value().get();
            return slot.visibility() == SlotVisibility::Visible;
        }

        return next::GardenerItem::get_IsVisible(this_ptr);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(1, bool, GardenerItem, get_IsLocked, app::GardenerItem* this_ptr) {
        if (il2cpp::is_assignable(this_ptr, types::GardenerItem::get_class())) {
            auto& slot = shops()->tuley_shop().slot(get_slot_uber_state_from_vanilla_uber_state(this_ptr->fields.Project->fields.UberState)).value().get();
            return slot.visibility() == SlotVisibility::Locked;
        }

        return next::GardenerItem::get_IsLocked(this_ptr);
    }

    IL2CPP_INTERCEPT(bool, GardenerItem, get_IsAffordable, app::GardenerItem* this_ptr) {
        return true;

        // TODO[TuleyCapitalism]:
        // return core::api::game::player::spirit_light().get() >= GardenerItem::GetCostForLevel(this_ptr, 1);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(1, bool, GardenerItem, get_IsOwned, app::GardenerItem* this_ptr) {
        if (il2cpp::is_assignable(this_ptr, types::GardenerItem::get_class())) {
            const auto state = get_slot_uber_state_from_vanilla_uber_state(this_ptr->fields.Project->fields.UberState);
            return state.get<bool>();
        }

        return next::GardenerItem::get_IsOwned(this_ptr);
    }

    bool show_hint(void* show_hint_action, app::UISoundSettingsAsset* sounds, app::MessageProvider* provider) {
        il2cpp::invoke(show_hint_action, "Invoke", provider);
        if (sounds != nullptr) {
            UISoundSettingsAsset::PlaySoundEvent(sounds, sounds->fields.InvalidItem);
        }

        return false;
    }

    core::api::uber_states::UberState get_cutscene_state(const app::NpcProjectItem* project) {
        switch (const auto project_id = project->fields.UberState->fields._.m_id->fields.m_id) {
            case 47651: return {UberStateGroup::RandoConfig, 510};
            case 16254: return {UberStateGroup::RandoConfig, 511};
            case 33011: return {UberStateGroup::RandoConfig, 512};
            case 64583: return {UberStateGroup::RandoConfig, 513};
            case 38393: return {UberStateGroup::RandoConfig, 514};
            case 40006: return {UberStateGroup::RandoConfig, 515};
            default: throw std::runtime_error(std::format("No cutscene state exists for Glades project {}", project_id));
        }
    }

    IL2CPP_INTERCEPT(void, GardenerItem, DoPurchase, app::GardenerItem* this_ptr, app::PurchaseContext* context) {
        if (get_cutscene_state(this_ptr->fields.Project).get<bool>()) {
            // The normal method calls a DelayedAction.Action to play the cutscene
            next::GardenerItem::DoPurchase(this_ptr, context);
            return;
        }

        // TODO[TuleyCapitalism]:
        // const auto cost = GardenerItem::GetCostForLevel(this_ptr, 1);
        // auto ui_experience = il2cpp::unity::get_component_in_children<app::SpellUIExperience>(
        //     il2cpp::unity::get_game_object(types::UI::get_class()->static_fields->SeinUI), types::SpellUIExperience::get_class()
        // );
        // SpellUIExperience::Spend(ui_experience, cost);

        get_slot_uber_state_from_vanilla_uber_state(this_ptr->fields.Project->fields.UberState).set(true);
    }

    IL2CPP_INTERCEPT(
        bool,
        GardenerItem,
        TryPurchase,
        app::GardenerItem* this_ptr,
        app::Action_1_MessageProvider_* show_hint_action,
        app::UISoundSettingsAsset* sounds,
        app::ShopKeeperHints* hints
    ) {
        if (!GardenerItem::get_IsVisible(this_ptr)) {
            return show_hint(show_hint_action, sounds, hints->fields.ShardNotDiscovered);
        }

        if (GardenerItem::get_IsLocked(this_ptr)) {
            return show_hint(show_hint_action, sounds, hints->fields.IsLocked);
        }

        if (GardenerItem::get_IsOwned(this_ptr)) {
            return show_hint(show_hint_action, sounds, hints->fields.MaxedOut);
        }

        if (GardenerItem::GetCostForLevel(this_ptr, 1) > core::api::game::player::spirit_light().get()) {
            return show_hint(show_hint_action, sounds, hints->fields.NotEnoughSpiritLight);
        }

        return true;
    }

    IL2CPP_INTERCEPT(void, GardenerScreen, CompletePurchase, app::GardenerScreen* this_ptr) {
        const auto shopkeeper_screen = reinterpret_cast<app::ShopkeeperScreen*>(this_ptr);
        const auto item = reinterpret_cast<app::GardenerItem*>(ShopkeeperScreen::get_SelectedUpgradeItem(shopkeeper_screen));
        const auto should_play_cutscene = get_cutscene_state(item->fields.Project).get<bool>();
        shopkeeper_screen->fields.HideScreenAfterPurchase = should_play_cutscene;
        next::GardenerScreen::CompletePurchase(this_ptr);
        if (!should_play_cutscene) {
            core::api::uber_states::UberState(item->fields.Project->fields.UberState).set(3);
            ShopkeeperScreen::UpdateContextCanvasShards(reinterpret_cast<app::ShopkeeperScreen*>(this_ptr));
        }
    }

    IL2CPP_INTERCEPT_WITH_ORDER(1, void, Moon::Timeline::TimelineEntity, StartPlayback_2, app::TimelineEntity* this_ptr, app::IContext* context) {
        // If we skip the cutscenes, Tuley never gets into the "purchase successful" state, hence
        // he always complains about you when leaving him even though you purchased something.
        // This fix plays the correct timeline instead if you purchased something from Tuley
        // and leave.

        if (this_ptr == reinterpret_cast<app::TimelineEntity*>(purchase_failed_timeline)) {
            const auto gardener_entity_instance = GardenerEntity::get_Instance();

            if (il2cpp::unity::is_valid(gardener_entity_instance) && gardener_entity_instance->fields.PurchasedProject) {
                this_ptr = reinterpret_cast<app::TimelineEntity*>(offer_accepted_timeline);
            }
        }

        next::Moon::Timeline::TimelineEntity::StartPlayback_2(this_ptr, context);
    }
} // namespace
