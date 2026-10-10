#include <Core/api/game/player.h>
#include <Core/api/game/ui.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/GardenerEntity.h>
#include <Modloader/app/methods/GardenerItem.h>
#include <Modloader/app/methods/GardenerScreen.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/ShopkeeperScreen.h>
#include <Modloader/app/methods/UISoundSettingsAsset.h>
#include <Modloader/app/types/GardenerItem.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/game/shops/tuley.h>

#include <Core/api/system/message_provider.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace randomizer::game::shops::tuley {
    using namespace modloader;
    using namespace app::classes;
    using namespace randomizer::game::shops;

    app::MoonTimeline* offer_accepted_timeline = nullptr;
    app::MoonTimeline* purchase_failed_timeline = nullptr;

    ShopSlot::is_purchased_state_id_t get_slot_uber_state_id_from_vanilla_uber_state(const app::SerializedByteUberState* vanilla_uber_state) {
        switch (vanilla_uber_state->fields._.m_id->fields.m_id) {
            case 16254:
                return uber_states::state<"tuleyShop", "selaFlowers">();
            case 33011:
                return uber_states::state<"tuleyShop", "blueMoon">();
            case 38393:
                return uber_states::state<"tuleyShop", "springPlants">();
            case 40006:
                return uber_states::state<"tuleyShop", "lastTree">();
            case 47651:
                return uber_states::state<"tuleyShop", "lightcatchers">();
            case 64583:
                return uber_states::state<"tuleyShop", "stickyGrass">();
            default:
                throw std::runtime_error(std::format("Invalid Tuley shop slot vanilla state: {}", vanilla_uber_state->fields._.m_id->fields.m_id));
        }
    }

    ShopCollection::tuley_shop_t::slot_t& get_slot(const app::SerializedByteUberState* vanilla_state) {
        const auto slot = shops()->tuley_shop().slot(get_slot_uber_state_id_from_vanilla_uber_state(vanilla_state));

        if (!slot.has_value()) {
            throw std::exception("Missing Tuley shop slot");
        }

        return slot.value().get();
    }

    ShopCollection::tuley_shop_t::slot_t& get_slot(const app::GardenerItem* gardener_item) {
        return get_slot(gardener_item->fields.Project->fields.UberState);
    }

    ShopkeeperItemRuntimeAttributes get_slot_attributes(ShopCollection::tuley_shop_t::slot_t& slot) {
        const auto cost = slot.cost.get();
        return {
            .visibility = slot.visibility(),
            .is_affordable = core::api::game::player::spirit_light().get() >= cost,
            .is_owned = is_owned(slot),
            .cost = cost,
            .name_message_provider = core::api::system::create_message_provider(slot.name),
            .description_message_provider = core::api::system::create_message_provider(slot.description),
            .shop_type = ShopType::Tuley,
        };
    }

    namespace {
        [[maybe_unused]]
        auto on_hub_setups_loaded = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>("wellspringGladesHubSetups", [](const auto& event) {
            if (event.state != app::SceneState__Enum::Loaded) {
                return;
            }

            const auto offer_ability_upgrade_dialog_go = il2cpp::unity::find_child(
                event.scene->fields.SceneRoot,
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

        core::api::uber_states::UberState<core::api::uber_states::UberStateType::SerializedBooleanUberState> get_cutscene_state(const app::NpcProjectItem* project) {
            switch (const auto project_id = project->fields.UberState->fields._.m_id->fields.m_id) {
                case 47651: return uber_states::state<"randoConfig", "lightcatchersPlayCutscene">();
                case 16254: return uber_states::state<"randoConfig", "selaFlowersPlayCutscene">();
                case 33011: return uber_states::state<"randoConfig", "blueMoonPlayCutscene">();
                case 64583: return uber_states::state<"randoConfig", "stickyGrassPlayCutscene">();
                case 38393: return uber_states::state<"randoConfig", "springPlantsPlayCutscene">();
                case 40006: return uber_states::state<"randoConfig", "lastTreePlayCutscene">();
                default: throw std::runtime_error(std::format("No cutscene state exists for Glades project {}", project_id));
            }
        }

        IL2CPP_INTERCEPT(void, GardenerItem, DoPurchase, app::GardenerItem* this_ptr, app::PurchaseContext* context) {
            if (get_cutscene_state(this_ptr->fields.Project).get()) {
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

            auto& slot = get_slot(this_ptr);
            buy_item(slot);
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
            app::MessageProvider* selected_hint;
            const auto attributes = get_slot_attributes(get_slot(this_ptr));

            if (attributes.visibility == SlotVisibility::Hidden) {
                selected_hint = hints->fields.ShardNotDiscovered;
            } else if (attributes.visibility == SlotVisibility::Locked) {
                selected_hint = hints->fields.IsLocked;
            } else if (attributes.is_owned) {
                selected_hint = hints->fields.MaxedOut;
            } else if (!attributes.is_affordable) {
                selected_hint = hints->fields.NotEnoughSpiritLight;
            } else {
                return true;
            }

            il2cpp::invoke(show_hint_action, "Invoke", selected_hint);
            if (sounds != nullptr) {
                UISoundSettingsAsset::PlaySoundEvent(sounds, sounds->fields.InvalidItem);
            }

            return false;
        }

        IL2CPP_INTERCEPT(void, GardenerScreen, CompletePurchase, app::GardenerScreen* this_ptr) {
            const auto shopkeeper_screen = reinterpret_cast<app::ShopkeeperScreen*>(this_ptr);
            const auto item = reinterpret_cast<app::GardenerItem*>(ShopkeeperScreen::get_SelectedUpgradeItem(shopkeeper_screen));
            const auto should_play_cutscene = get_cutscene_state(item->fields.Project).get();
            shopkeeper_screen->fields.HideScreenAfterPurchase = should_play_cutscene;
            next::GardenerScreen::CompletePurchase(this_ptr);
            if (!should_play_cutscene) {
                core::api::uber_states::UberState<core::api::uber_states::UberStateType::SerializedByteUberState>(item->fields.Project->fields.UberState).set(3);
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
    }
} // namespace
