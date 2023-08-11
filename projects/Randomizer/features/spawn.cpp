#include <Core/api/scenes/scene_load.h>
#include <features/spawn.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Randomizer/macros.h>
#include <Core/uber_states/uber_state_interface.h>

#include <Core/api/faderb.h>
#include <Common/ext.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/GameplayCamera.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAreaMapInformation.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/methods/SaveGameController.h>
#include <Modloader/app/methods/SaveSlotUI.h>
#include <Modloader/app/methods/SaveSlotsManager.h>
#include <Modloader/app/methods/SaveSlotsUI.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/TitleScreenManager.h>
#include <Modloader/app/methods/RunActionOnce.h>
#include <Modloader/app/methods/CleverMenuItemSelectionManager.h>
#include <Modloader/app/methods/ActionSequence.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/Core/Input_InputButtonProcessor.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/app/types/GameStateMachine.h>
#include <Modloader/app/types/SaveSlotsUI.h>
#include <Modloader/app/types/QuestsUI.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/WaitAction.h>
#include <Modloader/app/types/FaderBFadeInAction.h>
#include <Modloader/app/types/ActionSequence.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/app/types/CleverMenuItemSelectionManager.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <Core/enums/game_event.h>
#include <Core/utils/event_bus.h>
#include <Core/api/system/message_provider.h>
#include <Core/task.h>
#include <Core/api/messages/messages.h>
#include <Randomizer/interop/csharp_bridge.h>
#include <Randomizer/multiplayer.h>
#include <fmt/format.h>
#include <fmt/xchar.h>

using namespace modloader;
using namespace app::classes;
using modloader::win::console::console_send;

namespace randomizer::spawn {
    enum class TeleportState {
        None,
        Teleport,
        PostTeleport,
    };

    constexpr int MAX_DISPLAYED_WAITING_FOR_PLAYERS = 8;
    bool block_starting_new_game = false;
    bool is_in_lobby = false;
    bool is_starting_game = false;
    const app::Vector3 ORIGINAL_START = { -798.797058f, -4310.119141f, 0.f };
    app::Vector3 start_position = ORIGINAL_START;
    TeleportState teleport_state = TeleportState::None;
    app::Vector3 teleport_position;

    namespace {
        std::set<std::string> pending_scenes_to_preload;
        std::set<std::string> scenes_to_preload;

        std::optional<il2cpp::WeakGCRef<app::GameObject>> ui_go_handle;
        std::optional<il2cpp::WeakGCRef<app::ActionSequence>> start_game_sequence_handle;
        std::optional<il2cpp::WeakGCRef<app::CleverMenuItemSelectionManager>> full_game_main_menu_selection_manager_handle;
        std::optional<il2cpp::WeakGCRef<app::ActionSequence>> empty_slot_pressed_action_sequence_handle;
        std::optional<il2cpp::WeakGCRef<app::MessageBox>> easy_mode_text_handle;
        std::optional<il2cpp::WeakGCRef<app::MessageBox>> normal_mode_text_handle;
        std::optional<il2cpp::WeakGCRef<app::MessageBox>> hard_mode_text_handle;
        std::optional<int> lobby_status_text_box_id;
    }

    void set_full_game_main_menu_selection_manager_active(bool active) {
        if (full_game_main_menu_selection_manager_handle.has_value() && full_game_main_menu_selection_manager_handle->is_valid()) {
            CleverMenuItemSelectionManager::set_IsActive(**full_game_main_menu_selection_manager_handle, active);
            CleverMenuItemSelectionManager::set_IsLocked(**full_game_main_menu_selection_manager_handle, !active);
        }
    }

    void update_lobby_ui() {
        if (is_in_lobby && !is_starting_game) {
            auto id = lobby_status_text_box_id.has_value() ? *lobby_status_text_box_id : reserve_id();

            if (!lobby_status_text_box_id.has_value()) {
                text_box_create(id, 0.f, 0.f, false, false);
            }

            text_box_alignment(id, app::AlignmentMode__Enum::Center);
            text_box_anchor(id, app::HorizontalAnchorMode__Enum::Center, app::VerticalAnchorMode__Enum::Top);
            text_box_position(id, 0.f, 1.5f, 0.f, false);

            std::wstring text;

            if (!pending_scenes_to_preload.empty()) {
                text = L"<s_1.5>Waiting for spawn area to preload...</>";
            } else {
                text = L"<s_1.5>Waiting for players:</>";
                int displayed_waiting_for_players_count = 0;
                int total_waiting_for_players_count = 0;
                for (auto player: multiplayer::get_players()) {
                    if (!player.race_ready) {
                        if (displayed_waiting_for_players_count < MAX_DISPLAYED_WAITING_FOR_PLAYERS) {
                            text += fmt::format(L"\n{}", player.name);

                            if (!player.online) {
                                text += L" <s_0.8>(not connected)</>";
                            }

                            ++displayed_waiting_for_players_count;
                        }

                        ++total_waiting_for_players_count;
                    }
                }

                if (total_waiting_for_players_count > displayed_waiting_for_players_count) {
                    text += fmt::format(L"\n...and {} more", total_waiting_for_players_count - displayed_waiting_for_players_count);
                }

                if (total_waiting_for_players_count == 0) {
                    text = L"<s_1.5> </>\n\n";
                }
            }

            text += L"\n\nPress [MenuBack] to leave";

            text_box_text(id, text.c_str());
            text_box_visibility(id, true);

            lobby_status_text_box_id = id;
        } else if (lobby_status_text_box_id.has_value()) {
            text_box_destroy(*lobby_status_text_box_id);
            lobby_status_text_box_id.reset();
        }

        if (ui_go_handle.has_value() && ui_go_handle->is_valid()) {
            il2cpp::unity::set_active(**ui_go_handle, !is_in_lobby && !is_starting_game);
        }

        set_full_game_main_menu_selection_manager_active(!is_in_lobby);
    }

    void start_new_game() {
        if (start_game_sequence_handle.has_value()) {
            auto action = start_game_sequence_handle.value().ref();

            if (il2cpp::unity::is_valid(action)) {
                is_in_lobby = false;
                is_starting_game = true;
                faderb::fade_in(0.4f);
                core::task::schedule(0.4f, [action]() {
                    ActionSequence::Perform_1(action);
                });
            }
        }
    }

    void check_if_preloaded_and_report_ready() {
        if (pending_scenes_to_preload.empty()) {
            csharp_bridge::report_player_race_ready(true);
        }
    }

    void update_difficulty_text_boxes() {
        std::string prepend_to_difficulty = "";

        if (block_starting_new_game) {
            prepend_to_difficulty = "JOIN RACE in ";
        }

        if (easy_mode_text_handle.has_value() && **easy_mode_text_handle != nullptr) {
            (**easy_mode_text_handle)->fields.MessageProvider = utils::create_message_provider(fmt::format("{}EASY MODE", prepend_to_difficulty));
            MessageBox::RefreshText_1(**easy_mode_text_handle);
        }

        if (normal_mode_text_handle.has_value() && **normal_mode_text_handle != nullptr) {
            (**normal_mode_text_handle)->fields.MessageProvider = utils::create_message_provider(fmt::format("{}NORMAL MODE", prepend_to_difficulty));
            MessageBox::RefreshText_1(**normal_mode_text_handle);
        }

        if (hard_mode_text_handle.has_value() && **hard_mode_text_handle != nullptr) {
            (**hard_mode_text_handle)->fields.MessageProvider = utils::create_message_provider(fmt::format("{}HARD MODE", prepend_to_difficulty));
            MessageBox::RefreshText_1(**hard_mode_text_handle);
        }
    }

    void on_fixed_update(GameEvent event, EventTiming timing) {
        auto menu_back_input = types::Input_Cmd::get_class()->static_fields->MenuBack;

        if (!il2cpp::unity::is_valid(menu_back_input)) {
            return;
        }

        if (is_in_lobby && Core::Input_InputButtonProcessor::get_OnPressed(menu_back_input)) {
            is_in_lobby = false;
            csharp_bridge::report_player_race_ready(false);
            update_lobby_ui();
        }
    }

    namespace {
        bool handling_start = false;

        IL2CPP_INTERCEPT(SeinCharacter, void, FixedUpdate, (app::SeinCharacter * this_ptr)) {
            // Don't teleport during cutscene skips, causes crashes.
            if (teleport_state == TeleportState::Teleport) {
                SeinCharacter::set_Position(this_ptr, teleport_position);
                teleport_state = TeleportState::PostTeleport;

            } else if (teleport_state == TeleportState::PostTeleport) {
                game::player::snap_camera();

                ScenesManager::EnableDisabledScenesAtPosition(scenes::get_scenes_manager(), false, false);
                SeinCharacter::set_Position(this_ptr, teleport_position);

                if (handling_start) {
                    handling_start = false;
                    faderb::fade_out(0.3f);
                }

                teleport_state = TeleportState::None;

                auto area_map_ui = types::AreaMapUI::get_class()->static_fields->Instance;
                auto quests_ui = types::QuestsUI::get_class()->static_fields->Instance;
                AreaMapNavigation::SetLocationPlayer(area_map_ui->fields._Navigation_k__BackingField);
                QuestsUI::UpdateDescriptionUI_2(quests_ui, nullptr);
            }

            next::SeinCharacter::FixedUpdate(this_ptr);
        }

        uber_states::UberState intro_cutscene(static_cast<UberStateGroup>(21786), 48748);

        IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation, void, SetAreaState, (app::PlayerUberStateAreaMapInformation * this_ptr, app::GameWorldAreaID__Enum area_id, int index, app::WorldMapAreaState__Enum state, app::Vector3 position)) {
            if (handling_start && state == app::WorldMapAreaState__Enum::Visited)
                state = app::WorldMapAreaState__Enum::Discovered;

            next::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation::SetAreaState(this_ptr, area_id, index, state, position);
        }

        // Dont cancel loads during teleportation.
        IL2CPP_INTERCEPT(ScenesManager, bool, CancelScene, (app::ScenesManager * this_ptr, app::SceneManagerScene* scene)) {
            if (teleport_state != TeleportState::Teleport)
                return next::ScenesManager::CancelScene(this_ptr, scene);

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

                    // We loaded everything, check if we are ready and waiting...
                    if (is_in_lobby) {
                        check_if_preloaded_and_report_ready();
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

                        auto scene_names = scenes::get_scenes_at_position(start_position);

                        for (const auto& scene_name : scenes_to_preload) {
                            if (!scene_names.contains(scene_name)) {
                                scenes::unload_scene(scene_name, false);
                            }
                        }

                        pending_scenes_to_preload.clear();
                        for (const auto& scene_name : scene_names) {
                            if (!scenes::scene_is_loaded(scene_name)) {
                                pending_scenes_to_preload.emplace(scene_name);
                                scenes_to_preload.emplace(scene_name);
                                scenes::force_load_scene(scene_name, &on_scene_loading, true, true);
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

        IL2CPP_INTERCEPT(RunActionOnce, void, Perform, (app::RunActionOnce* this_ptr, app::IContext* context)) {
            // If the player started a new empty save slot...
            if (
                    empty_slot_pressed_action_sequence_handle.has_value() &&
                    reinterpret_cast<app::ActionMethod*>(this_ptr->fields.Action) == reinterpret_cast<app::ActionMethod*>(empty_slot_pressed_action_sequence_handle.value().ref()) &&
                    start_game_sequence_handle.has_value()
            ) {
                if (block_starting_new_game) {
                    is_in_lobby = true;
                    update_lobby_ui();
                    check_if_preloaded_and_report_ready();
                } else {
                    set_full_game_main_menu_selection_manager_active(false);
                    start_new_game();
                }
            } else {
                next::RunActionOnce::Perform(this_ptr, context);
            }
        }

        void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
            if (metadata->scene_name == "wotwTitleScreen" && metadata->state == app::SceneState__Enum::Loaded) {
                is_starting_game = false;

                auto scene_root = metadata->scene->fields.SceneRoot;
                auto scene_root_go = il2cpp::unity::get_game_object(scene_root);

                std::vector<std::vector<std::string>> game_objects_to_nuke{
                        { "titleScreen (new)", "startGameSequence", "02. Set Game Mode To Prologue Action" },
                        { "titleScreen (new)", "startGameSequence", "03. Play Sound: Unknown Wise Event" },
                        { "titleScreen (new)", "startGameSequence", "05. Play External Timeline Action" },
                        { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "01. Activate Menu Action" },
                        { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "02. Restart ui BaseAnimator" },
                        { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "03. Play Sound: mainMenuPressNewGameSoundProvider" },
                        { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "04. Wait 1.5 seconds" },
                        { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "05. Run startGameSequence action" },
                        { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "06. Wait 2 seconds" },
                        { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "07. Deactivate ui" },
                        { "titleScreen (new)", "ui", "group", "actions", "usedSlotPressed (part2)", "05. Wait 1 second"},
                };

                for (const auto& path : game_objects_to_nuke) {
                    auto target_go = il2cpp::unity::find_child(scene_root_go, path);
                    if (il2cpp::unity::is_valid(target_go)) {
                        il2cpp::unity::destroy_object(target_go);
                    }
                }

                // We shorten the wait time to 0.4s. We use that time to fade to black.
                auto empty_slot_pressed_action_sequence_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)" });
                auto empty_slot_pressed_action_sequence = il2cpp::unity::get_component<app::ActionSequence>(empty_slot_pressed_action_sequence_go, types::ActionSequence::get_class());
                empty_slot_pressed_action_sequence_handle = il2cpp::WeakGCRef(empty_slot_pressed_action_sequence);

                // Save handles
                ui_go_handle = il2cpp::WeakGCRef(il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui"} ));
                auto full_game_main_menu_go_handle = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu"} );
                full_game_main_menu_selection_manager_handle = il2cpp::WeakGCRef(
                        il2cpp::unity::get_component<app::CleverMenuItemSelectionManager>(
                                full_game_main_menu_go_handle, types::CleverMenuItemSelectionManager::get_class()
                        )
                );
                start_game_sequence_handle = il2cpp::WeakGCRef(
                        il2cpp::unity::get_component<app::ActionSequence>(
                                il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "startGameSequence"} ),
                                types::ActionSequence::get_class()
                        )
                );

                easy_mode_text_handle = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MessageBox>( il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "0. easyMode", "text"} ), types::MessageBox::get_class()));
                normal_mode_text_handle = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MessageBox>(il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "0. normalMode", "text"} ), types::MessageBox::get_class()));
                hard_mode_text_handle = il2cpp::WeakGCRef(il2cpp::unity::get_component<app::MessageBox>(il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "0. hardMode", "text"} ), types::MessageBox::get_class()));

                // Make QTMs faster
                auto qtm_fade_to_black_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "actions", "usedSlotPressed (part2)", "06. FadeToBlack over 5 seconds"} );
                auto qtm_fade_to_black = il2cpp::unity::get_component<app::FaderBFadeInAction>(qtm_fade_to_black_go, types::FaderBFadeInAction::get_class());
                qtm_fade_to_black->fields.FadeInDuration = 2.f;

                auto qtm_wait_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "actions", "usedSlotPressed (part2)", "07. Wait 5 seconds"} );
                auto qtm_wait = il2cpp::unity::get_component<app::WaitAction>(qtm_wait_go, types::WaitAction::get_class());
                qtm_wait->fields.Duration = 2.f;

                update_difficulty_text_boxes();
            }
        }

        void on_new_game(GameEvent event, EventTiming timing) {
            auto game_state_machine = types::GameStateMachine::get_class()->static_fields->m_instance;

            auto camera = types::UI_Cameras::get_class()->static_fields->Current;
            GameplayCamera::DisableGoThroughScrollLocks(camera, reinterpret_cast<app::Object_1*>(game_state_machine));
            ScenesManager::ClearPreventUnloading(scenes::get_scenes_manager());

            handling_start = true;
            intro_cutscene.set(1);

            for (const auto& scene_name : pending_scenes_to_preload) {
                scenes::force_load_scene(scene_name, nullptr, true, false);
            }

            teleport(start_position.x, start_position.y, true);

            csharp_bridge::new_game(SaveSlotsManager::get_CurrentSlotIndex());
            GameStateMachine::SetToGame(game_state_machine);

            game::player::set_ability(app::AbilityType__Enum::SpiritMagnet, false);
        }

        void on_finished_loading_save(GameEvent event, EventTiming timing) {
            for (const auto& scene_name : scenes_to_preload) {
                scenes::allow_unload_scene(scene_name);
            }

            scenes_to_preload.clear();
        }

        void initialize() {
            scenes::event_bus().register_handler(&on_scene_load);
            game::event_bus().register_handler(GameEvent::NewGame, EventTiming::After, &on_new_game);
            game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, &on_finished_loading_save);
            game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, &on_fixed_update);
            game::event_bus().register_handler(GameEvent::MultiverseUpdated, EventTiming::After, [](auto event, auto timing) {
                update_lobby_ui();
            });
        }

        CALL_ON_INIT(initialize);
    } // namespace
}

RANDOMIZER_C_DLLEXPORT void teleport(float x, float y, bool wait_for_load) {
    randomizer::spawn::teleport_position = { x, y, 0.f };
    randomizer::spawn::teleport_state = randomizer::spawn::TeleportState::Teleport;

    if (wait_for_load) {
        ScenesManager::LoadScenesAtPosition(scenes::get_scenes_manager(), randomizer::spawn::teleport_position, false, false, true, true, true);
    }
}

RANDOMIZER_C_DLLEXPORT void set_start_position(float x, float y) {
    randomizer::spawn::start_position = { x, y, 0.f };
}

RANDOMIZER_C_DLLEXPORT void set_block_starting_new_game(bool block_starting_new_game) {
    if (randomizer::spawn::block_starting_new_game != block_starting_new_game) {
        randomizer::spawn::block_starting_new_game = block_starting_new_game;

        core::task::schedule_for_next_update([]() {
            randomizer::spawn::update_difficulty_text_boxes();
        });

        modloader::win::console::console_send(fmt::format("Blocking new game: {}", block_starting_new_game ? "True" : "False"));

        if (!block_starting_new_game && randomizer::spawn::is_in_lobby) {
            core::task::schedule_for_next_update([]() {
                randomizer::spawn::start_new_game();
            });
        }
    }
}

RANDOMIZER_C_DLLEXPORT void send_race_ready_state() {
    if (randomizer::spawn::is_in_lobby) {
        randomizer::spawn::check_if_preloaded_and_report_ready();
    }
}

RANDOMIZER_C_DLLEXPORT void clear_start_position() {
    randomizer::spawn::start_position = randomizer::spawn::ORIGINAL_START;
}
