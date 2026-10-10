#include <Core/api/game/player.h>
#include <Core/api/game/ui.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/BuilderEntity.h>
#include <Modloader/app/methods/BuilderItem.h>
#include <Modloader/app/methods/BuilderScreen.h>
#include <Modloader/app/methods/Moon/Timeline/TimelineEntity.h>
#include <Modloader/app/methods/ShopkeeperScreen.h>
#include <Modloader/app/methods/SpellUISeeds.h>
#include <Modloader/app/methods/UISoundSettingsAsset.h>
#include <Modloader/app/types/BuilderItem.h>
#include <Modloader/app/types/ChangeStateOnCondition.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/app/types/SpellUISeeds.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/game/shops/grom.h>
#include <Core/api/system/message_provider.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace randomizer::game::shops::grom {
    using namespace modloader;
    using namespace app::classes;
    using namespace randomizer::game::shops;

    app::MoonTimeline* offer_accepted_timeline = nullptr;
    app::MoonTimeline* purchase_failed_timeline = nullptr;

    ShopSlot::is_purchased_state_id_t get_slot_uber_state_from_vanilla_uber_state(const app::SerializedByteUberState* vanilla_uber_state) {
        switch (vanilla_uber_state->fields._.m_id->fields.m_id) {
            case 15068:
                return uber_states::state<"gromShop", "theGorlekTouch">();
            case 16586:
                return uber_states::state<"gromShop", "clearTheCaveEntrance">();
            case 16825:
                return uber_states::state<"gromShop", "repairTheSpiritWell">();
            case 18751:
                return uber_states::state<"gromShop", "thornySituation">();
            case 23607:
                return uber_states::state<"gromShop", "roofsOverHeads">();
            case 40448:
                return uber_states::state<"gromShop", "onwardsAndUpwards">();
            case 51230:
                return uber_states::state<"gromShop", "dwellingRepairs">();
            default:
                throw std::runtime_error(std::format("Invalid Grom shop slot vanilla state: {}", vanilla_uber_state->fields._.m_id->fields.m_id));
        }
    }

    ShopCollection::grom_shop_t::slot_t& get_slot(const app::SerializedByteUberState* vanilla_state) {
        const auto slot = shops()->grom_shop().slot(get_slot_uber_state_from_vanilla_uber_state(vanilla_state));

        if (!slot.has_value()) {
            throw std::exception("Missing Grom shop slot");
        }

        return slot.value().get();
    }

    ShopCollection::grom_shop_t::slot_t& get_slot(const app::BuilderItem* builder_item) {
        return shops()->grom_shop().slot(get_slot_uber_state_from_vanilla_uber_state(builder_item->fields.Project->fields.UberState)).value().get();
    }

    ShopkeeperItemRuntimeAttributes get_slot_attributes(ShopCollection::grom_shop_t::slot_t& slot) {
        const auto cost = slot.cost.get();
        return {
            .visibility = slot.visibility(),
            .is_affordable = core::api::game::player::ore().get() >= cost,
            .is_owned = slot.is_purchased_state.get(),
            .cost = cost,
            .name_message_provider = core::api::system::create_message_provider(slot.name),
            .description_message_provider = core::api::system::create_message_provider(slot.description),
            .shop_type = ShopType::Grom,
        };
    }

    namespace {
        [[maybe_unused]]
        auto on_hub_setups_loaded = core::api::scenes::event_bus().on<core::api::scenes::events::SceneStateChanged>("wellspringGladesHubSetups", [](const auto& event) {
            if (event.state != app::SceneState__Enum::Loaded) {
                return;
            }

            auto projects = il2cpp::unity::find_child(event.scene->fields.SceneRoot, std::vector<std::string>{"interactives", "builderProjects"});
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

            const auto offer_ability_upgrade_dialog_go = il2cpp::unity::find_child(
                event.scene->fields.SceneRoot,
                std::vector<std::string>{
                    "interactives",
                    "NPCs",
                    "builder",
                    "minerBuilderEntity(Clone)",
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
                case 16825: return uber_states::state<"randoConfig", "spiritWellPlayCutscene">();
                case 51230: return uber_states::state<"randoConfig", "housesAPlayCutscene">();
                case 23607: return uber_states::state<"randoConfig", "housesBPlayCutscene">();
                case 40448: return uber_states::state<"randoConfig", "housesCPlayCutscene">();
                case 18751: return uber_states::state<"randoConfig", "removeThornsPlayCutscene">();
                case 16586: return uber_states::state<"randoConfig", "openCavePlayCutscene">();
                case 15068: return uber_states::state<"randoConfig", "beautifyPlayCutscene">();
                default: throw std::runtime_error(std::format("No cutscene state exists for Glades project {}", project_id));
            }
        }

        IL2CPP_INTERCEPT(void, BuilderItem, DoPurchase, app::BuilderItem* this_ptr, app::PurchaseContext* context) {
            if (get_cutscene_state(this_ptr->fields.Project).get()) {
                // The normal method calls a DelayedAction.Action to play the cutscene
                next::BuilderItem::DoPurchase(this_ptr, context);
                return;
            }

            auto& slot = get_slot(this_ptr);
            const auto cost = BuilderItem::GetCostForLevel(this_ptr, 1);
            const auto seed_ui = core::api::game::ui::get()->static_fields->SeinUI->fields.SeedsUI;
            SpellUISeeds::Spend(il2cpp::unity::get_component_in_children<app::SpellUISeeds>(seed_ui, types::SpellUISeeds::get_class()), cost);
            buy_item(slot);
        }

        IL2CPP_INTERCEPT(
            bool,
            BuilderItem,
            TryPurchase,
            app::BuilderItem* this_ptr,
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
                selected_hint = hints->fields.NotEnoughOre;
            } else {
                return true;
            }

            il2cpp::invoke(show_hint_action, "Invoke", selected_hint);
            if (sounds != nullptr) {
                UISoundSettingsAsset::PlaySoundEvent(sounds, sounds->fields.InvalidItem);
            }

            return false;
        }

        IL2CPP_INTERCEPT(void, BuilderScreen, CompletePurchase, app::BuilderScreen* this_ptr) {
            const auto shopkeeper_screen = reinterpret_cast<app::ShopkeeperScreen*>(this_ptr);
            const auto item = reinterpret_cast<app::BuilderItem*>(ShopkeeperScreen::get_SelectedUpgradeItem(shopkeeper_screen));
            const auto should_play_cutscene = get_cutscene_state(item->fields.Project).get();
            shopkeeper_screen->fields.HideScreenAfterPurchase = should_play_cutscene;
            next::BuilderScreen::CompletePurchase(this_ptr);
            if (!should_play_cutscene) {
                core::api::uber_states::UberState<core::api::uber_states::UberStateType::SerializedByteUberState>(item->fields.Project->fields.UberState).set(3);
                ShopkeeperScreen::UpdateContextCanvasShards(reinterpret_cast<app::ShopkeeperScreen*>(this_ptr));
            }
        }

        IL2CPP_INTERCEPT_WITH_ORDER(0, void, Moon::Timeline::TimelineEntity, StartPlayback_2, app::TimelineEntity* this_ptr, app::IContext* context) {
            // If we skip the cutscenes, Grom never gets into the "purchase successful" state, hence
            // he always complains about you when leaving him even though you purchased something.
            // This fix plays the correct timeline instead if you purchased something from Grom
            // and leave.

            if (this_ptr == reinterpret_cast<app::TimelineEntity*>(purchase_failed_timeline)) {
                const auto builder_entity_instance = BuilderEntity::get_Instance();

                if (il2cpp::unity::is_valid(builder_entity_instance) && builder_entity_instance->fields.PurchasedProject) {
                    this_ptr = reinterpret_cast<app::TimelineEntity*>(offer_accepted_timeline);
                }
            }

            next::Moon::Timeline::TimelineEntity::StartPlayback_2(this_ptr, context);
        }

        // Force project order because we disable SortByCost on shops
        IL2CPP_INTERCEPT_WITH_ORDER(10, void, BuilderScreen, Init, app::BuilderScreen* this_ptr) {
            this_ptr->fields._.SortedByCost = false;

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
} // namespace randomizer::game::shops::grom
