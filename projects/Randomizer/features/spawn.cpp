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
#include <Modloader/app/methods/WaitAction.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/app/types/GameStateMachine.h>
#include <Modloader/app/types/SaveSlotsUI.h>
#include <Modloader/app/types/QuestsUI.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/windows_api/console.h>
#include <Core/enums/game_event.h>
#include <Core/utils/event_bus.h>
#include <interop/csharp_bridge.h>

using namespace modloader;
using namespace app::classes;
using modloader::win::console::console_send;

namespace {
    enum class TeleportState {
        None,
        Teleport,
        PostTeleport,
    };

    const app::Vector3 ORIGINAL_START = { -798.797058f, -4310.119141f, 0.f };
    app::Vector3 start_position = ORIGINAL_START;

    TeleportState teleport_state = TeleportState::None;
    app::Vector3 teleport_position;
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
                console_send(format("Selected empty index %d", index));

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

    app::WaitAction* empty_slot_pressed_wait = nullptr;

    IL2CPP_INTERCEPT(WaitAction, void, Perform, (app::WaitAction * this_ptr, app::IContext* context)) {
        next::WaitAction::Perform(this_ptr, context);

        // If this is the empty slot wait action, fade out
        if (this_ptr == empty_slot_pressed_wait) {
            faderb::fade_in(0.4f);
        }
    }

    void on_scene_load(scenes::SceneLoadEventMetadata* metadata, EventTiming timing) {
        if (metadata->scene_name == "wotwTitleScreen" && metadata->state == app::SceneState__Enum::Loaded) {
            auto scene_root = metadata->scene->fields.SceneRoot;
            auto scene_root_go = il2cpp::unity::get_game_object(scene_root);

            std::vector<std::vector<std::string>> game_objects_to_nuke{
                { "titleScreen (new)", "startGameSequence", "02. Set Game Mode To Prologue Action" },
                { "titleScreen (new)", "startGameSequence", "03. Play Sound: Unknown Wise Event" },
                { "titleScreen (new)", "startGameSequence", "05. Play External Timeline Action" },
                { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "03. Play Sound: mainMenuPressNewGameSoundProvider" },
                { "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "06. Wait 2 seconds" },
            };

            for (const auto& path : game_objects_to_nuke) {
                auto target_go = il2cpp::unity::find_child(scene_root_go, path);
                if (il2cpp::unity::is_valid(target_go)) {
                    il2cpp::unity::destroy_object(target_go);
                }
            }

            // We shorten the wait time to 0.4s. We use that time to fade to black.
            auto empty_slot_pressed_wait_go = il2cpp::unity::find_child(scene_root_go, std::vector<std::string>{ "titleScreen (new)", "ui", "group", "IV. profileSelected", "4. fullGameMainMenu", "emptySlotPressed(newGame)", "04. Wait 1.5 seconds" });
            empty_slot_pressed_wait = il2cpp::unity::get_component<app::WaitAction>(empty_slot_pressed_wait_go, "", "WaitAction");
            empty_slot_pressed_wait->fields.Duration = 0.4f;
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
        game::event_bus().register_handler(GameEvent::NewGame, EventTiming::End, &on_new_game);
        game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::End, &on_finished_loading_save);
    }

    CALL_ON_INIT(initialize);
} // namespace

RANDOMIZER_C_DLLEXPORT void teleport(float x, float y, bool wait_for_load) {
    teleport_position = { x, y, 0.f };
    teleport_state = TeleportState::Teleport;

    if (wait_for_load) {
        ScenesManager::LoadScenesAtPosition(scenes::get_scenes_manager(), teleport_position, false, false, true, true, true);
    }
}

RANDOMIZER_C_DLLEXPORT void set_start_position(float x, float y) {
    start_position = { x, y, 0.f };
}

RANDOMIZER_C_DLLEXPORT void clear_start_position() {
    start_position = ORIGINAL_START;
}
