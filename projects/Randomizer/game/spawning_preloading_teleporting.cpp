#include <game/teleport.h>
#include <randomizer.h>

#include <Core/api/faderb.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/game_event.h>

#include <Common/ext.h>

#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/GameplayCamera.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAreaMapInformation.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/methods/SaveSlotUI.h>
#include <Modloader/app/methods/SaveSlotsManager.h>
#include <Modloader/app/methods/SaveSlotsUI.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/TitleScreenManager.h>
#include <Modloader/app/methods/WaitAction.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/GameStateMachine.h>
#include <Modloader/app/types/QuestsUI.h>
#include <Modloader/app/types/SaveSlotsUI.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/app/types/WaitAction.h>
#include <Modloader/app/types/FaderBFadeInAction.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>

using namespace modloader;
using namespace app::classes;
using modloader::win::console::console_send;

namespace randomizer::game {
    namespace {
        enum class TeleportState {
            None,
            Teleport,
            PostTeleport,
        };

        TeleportState teleport_state = TeleportState::None;
        app::Vector3 teleport_position;
        bool handling_start = false;

        IL2CPP_INTERCEPT(SeinCharacter, void, FixedUpdate, (app::SeinCharacter * this_ptr)) {
            // Don't teleport during cutscene skips, causes crashes.
            if (teleport_state == TeleportState::Teleport) {
                SeinCharacter::set_Position(this_ptr, teleport_position);
                teleport_state = TeleportState::PostTeleport;
            } else if (teleport_state == TeleportState::PostTeleport) {
                core::api::game::player::snap_camera();

                ScenesManager::EnableDisabledScenesAtPosition(core::api::scenes::get_scenes_manager(), false, false);
                SeinCharacter::set_Position(this_ptr, teleport_position);

                if (handling_start) {
                    handling_start = false;
                    core::api::faderb::fade_out(0.3f);
                }

                teleport_state = TeleportState::None;

                auto area_map_ui = types::AreaMapUI::get_class()->static_fields->Instance;
                auto quests_ui = types::QuestsUI::get_class()->static_fields->Instance;
                AreaMapNavigation::SetLocationPlayer(area_map_ui->fields._Navigation_k__BackingField);
                QuestsUI::UpdateDescriptionUI_2(quests_ui, nullptr);
            }

            next::SeinCharacter::FixedUpdate(this_ptr);
        }

        core::api::uber_states::UberState intro_cutscene(static_cast<UberStateGroup>(21786), 48748);

        IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation, void, SetAreaState, (app::PlayerUberStateAreaMapInformation * this_ptr, app::GameWorldAreaID__Enum area_id, int index, app::WorldMapAreaState__Enum state, app::Vector3 position)) {
            if (handling_start && state == app::WorldMapAreaState__Enum::Visited) {
                state = app::WorldMapAreaState__Enum::Discovered;
            }

            next::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation::SetAreaState(this_ptr, area_id, index, state, position);
        }

        // Dont cancel loads during teleportation.
        IL2CPP_INTERCEPT(ScenesManager, bool, CancelScene, (app::ScenesManager * this_ptr, app::SceneManagerScene* scene)) {
            if (teleport_state != TeleportState::Teleport) {
                return next::ScenesManager::CancelScene(this_ptr, scene);
            }

            return false;
        }

        // The game calls set_CurrentSlotIndex on startup. We set this variable to true
        // for this to not start preloading too early.
        bool prevent_preload_on_selecting_empty_save = false;

        // region Preload when selecting empty save slot
        app::SaveSlotsUI* get_save_slots_ui() {
            auto save_slots_ui_klass = types::SaveSlotsUI::get_class();
            return save_slots_ui_klass->static_fields->Instance;
        }

        IL2CPP_INTERCEPT(TitleScreenManager, void, SetScreen, (app::TitleScreenManager_Screen__Enum screen)) {
            next::TitleScreenManager::SetScreen(screen);

            if (screen == app::TitleScreenManager_Screen__Enum::SaveSlots) {
                auto save_slots_ui = get_save_slots_ui();
                if (save_slots_ui != nullptr) {
                    auto save_slot_ui = SaveSlotsUI::get_CurrentSaveSlot(save_slots_ui);
                    SaveSlotUI::SetBusy(save_slot_ui, false);
                }
            }
        }

        std::set<std::string> pending_scenes_to_preload;
        std::set<std::string> scenes_to_preload;

        void on_scene_loading(std::string_view scene_name, app::SceneState__Enum state, app::GameObject* scene_root) {
            if (state == app::SceneState__Enum::Loaded || state == app::SceneState__Enum::LoadingCancelled) {
                if (!pending_scenes_to_preload.erase(scene_name.data())) {
                    return;
                }

                if (pending_scenes_to_preload.empty()) {
                    auto save_slots_ui = get_save_slots_ui();

                    if (save_slots_ui != nullptr) {
                        auto save_slot_ui = SaveSlotsUI::get_CurrentSaveSlot(save_slots_ui);
                        SaveSlotUI::SetBusy(save_slot_ui, false);
                    }
                }
            }
        }

        IL2CPP_INTERCEPT(SaveSlotsUI, void, OnEnable, (app::SaveSlotsUI * this_ptr)) {
            ScopedSetter setter(prevent_preload_on_selecting_empty_save, true);
            next::SaveSlotsUI::OnEnable(this_ptr);
        }

        IL2CPP_INTERCEPT(SaveSlotsManager, void, set_CurrentSlotIndex, (int index)) {
            next::SaveSlotsManager::set_CurrentSlotIndex(index);

            if (!prevent_preload_on_selecting_empty_save) {
                auto slot_info = SaveSlotsManager::SlotByIndex(index);

                if (slot_info == nullptr) {
                    console_send(fmt::format("Selected empty index {}", index));

                    auto save_slots_ui = get_save_slots_ui();

                    if (save_slots_ui != nullptr) {
                        auto save_slot_ui = SaveSlotsUI::get_CurrentSaveSlot(save_slots_ui);

                        auto scene_names = core::api::scenes::get_scenes_at_position(game_seed().info().start_position);

                        for (const auto& scene_name : scenes_to_preload) {
                            if (!scene_names.contains(scene_name)) {
                                core::api::scenes::unload_scene(scene_name, false);
                            }
                        }

                        pending_scenes_to_preload.clear();
                        for (const auto& scene_name : scene_names) {
                            if (!core::api::scenes::scene_is_loaded(scene_name)) {
                                pending_scenes_to_preload.emplace(scene_name);
                                scenes_to_preload.emplace(scene_name);
                                core::api::scenes::force_load_scene(scene_name, &on_scene_loading, true, true);
                            }
                        }

                        if (!pending_scenes_to_preload.empty()) {
                            SaveSlotUI::SetBusy(save_slot_ui, true);
                        }
                    }
                }
            }
        }
        // endregion

        app::WaitAction* empty_slot_pressed_wait = nullptr;

        IL2CPP_INTERCEPT(WaitAction, void, Perform, (app::WaitAction * this_ptr, app::IContext* context)) {
            next::WaitAction::Perform(this_ptr, context);

            // If this is the empty slot wait action, fade out
            if (this_ptr == empty_slot_pressed_wait) {
                core::api::faderb::fade_in(0.4f);
            }
        }

        void on_scene_load(core::api::scenes::SceneLoadEventMetadata* metadata) {
            if (metadata->scene_name == "wotwTitleScreen" && metadata->state == app::SceneState__Enum::Loaded) {
                auto scene_root = metadata->scene->fields.SceneRoot;
                auto scene_root_go = il2cpp::unity::get_game_object(scene_root);

                std::vector<std::vector<std::string>> game_objects_to_nuke{
                    { "titleScreen (new)", "startGameSequence", "02. Set Game Mode To Prologue Action" },
                    { "titleScreen (new)", "startGameSequence", "03. Play Sound: Unknown Wise Event" },
                    { "titleScreen (new)", "startGameSequence", "05. Play External Timeline Action" },
                    { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "03. Play Sound: mainMenuPressNewGameSoundProvider" },
                    { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "06. Wait 2 seconds" },
                    { "titleScreen (new)", "ui", "group", "actions", "usedSlotPressed (part2)", "05. Wait 1 second"},
                };

                for (const auto& path : game_objects_to_nuke) {
                    auto target_go = il2cpp::unity::find_child(scene_root_go, path);
                    if (il2cpp::unity::is_valid(target_go)) {
                        il2cpp::unity::destroy_object(target_go);
                    }
                }

                // We shorten the wait time to 0.4s. We use that time to fade to black.
                auto empty_slot_pressed_wait_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "04. Wait 1.5 seconds" });
                empty_slot_pressed_wait = il2cpp::unity::get_component<app::WaitAction>(empty_slot_pressed_wait_go, types::WaitAction::get_class());
                empty_slot_pressed_wait->fields.Duration = 0.4f;

                // Make QTMs faster
                auto qtm_fade_to_black_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "actions", "usedSlotPressed (part2)", "06. FadeToBlack over 5 seconds"} );
                auto qtm_fade_to_black = il2cpp::unity::get_component<app::FaderBFadeInAction>(qtm_fade_to_black_go, types::FaderBFadeInAction::get_class());
                qtm_fade_to_black->fields.FadeInDuration = 2.f;

                auto qtm_wait_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "actions", "usedSlotPressed (part2)", "07. Wait 5 seconds"} );
                auto qtm_wait = il2cpp::unity::get_component<app::WaitAction>(qtm_wait_go, types::WaitAction::get_class());
                qtm_wait->fields.Duration = 2.f;
            }
        }

        common::registration_handle on_new_game_late_initialization_handle;
        void on_new_game_late_initialization(GameEvent, EventTiming) {
            if (!core::api::scenes::is_in_game()) {
                return;
            }

            core::api::game::event_bus().trigger_event(GameEvent::NewGameInitialized, EventTiming::Before);
            core::api::game::event_bus().trigger_event(GameEvent::NewGameInitialized, EventTiming::After);
            on_new_game_late_initialization_handle = nullptr;
        }

        void on_new_game(GameEvent event, EventTiming timing) {
            auto game_state_machine = types::GameStateMachine::get_class()->static_fields->m_instance;

            auto camera = types::UI_Cameras::get_class()->static_fields->Current;
            GameplayCamera::DisableGoThroughScrollLocks(camera, reinterpret_cast<app::Object_1*>(game_state_machine));
            ScenesManager::ClearPreventUnloading(core::api::scenes::get_scenes_manager());

            handling_start = true;
            intro_cutscene.set(1);
            for (const auto& scene_name : pending_scenes_to_preload) {
                core::api::scenes::force_load_scene(scene_name, nullptr, true, false);
            }

            teleport(game_seed().info().start_position, true);
            on_new_game_late_initialization_handle =
                core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, on_new_game_late_initialization);

            GameStateMachine::SetToGame(game_state_machine);
            core::api::game::player::set_ability(app::AbilityType__Enum::SpiritMagnet, false);
        }

        void on_finished_loading_save(GameEvent event, EventTiming timing) {
            for (const auto& scene_name : scenes_to_preload) {
                core::api::scenes::allow_unload_scene(scene_name);
            }

            scenes_to_preload.clear();
        }

        auto on_scene_load_handle = core::api::scenes::event_bus().register_handler(&on_scene_load);
        auto on_new_game_handle = core::api::game::event_bus().register_handler(GameEvent::NewGame, EventTiming::After, &on_new_game);
        auto on_finished_loading_save_handle = core::api::game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, &on_finished_loading_save);
    } // namespace

    void teleport(app::Vector3 position, bool wait_for_load) {
        teleport_state = TeleportState::Teleport;
        teleport_position = position;
        modloader::trace(MessageType::Info, 3, "teleport", fmt::format("Teleport to ({}, {}, {}) initiated", position.x, position.y, position.z));
        if (wait_for_load) {
            ScenesManager::LoadScenesAtPosition(core::api::scenes::get_scenes_manager(), position, false, false, true, true, true);
        }
    }
} // namespace randomizer::game
