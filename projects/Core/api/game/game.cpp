#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/game/ui.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/property/reactivity.h>

#include <Modloader/app/methods/Game/Characters.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/InstantLoadScenesController.h>
#include <Modloader/app/methods/SaveGameController.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinEnergy.h>
#include <Modloader/app/methods/SeinHealthController.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/PlatformMovement.h>
#include <Modloader/app/methods/UnityEngine/Behaviour.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/CheatsHandler.h>
#include <Modloader/app/types/GameController.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/GameSettings.h>
#include <Modloader/app/types/GameStateMachine.h>
#include <Modloader/app/types/InstantLoadScenesController.h>
#include <Modloader/app/types/SimpleFPS.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <Modloader/windows_api/common.h>

#include <Core/settings.h>
#include <magic_enum/magic_enum.hpp>

using namespace modloader;
using namespace app::classes;

namespace core::api::game {
    namespace {
        bool initialized = false;
        common::TimedEventBus<void, GameEvent> game_event_bus;

        std::unordered_map<RandoContainer, app::GameObject*> containers;
        app::GameObject* main_container_object = nullptr;

        bool save_requested = false;
        SaveOptions save_request_options{};

        void make_container(RandoContainer container) { // NOLINT
            auto obj = types::GameObject::create();
            UnityEngine::GameObject::ctor_1(obj, il2cpp::string_new(magic_enum::enum_name(container)));

            containers[container] = obj;
            if (container == RandoContainer::Randomizer) {
                UnityEngine::Object::DontDestroyOnLoad(reinterpret_cast<app::Object_1*>(obj));
                main_container_object = obj;
            } else {
                if (main_container_object == nullptr) {
                    make_container(RandoContainer::Randomizer);
                }

                il2cpp::unity::set_parent(obj, main_container_object);
            }
        }

        IL2CPP_INTERCEPT(GameController, void, Update, (app::GameController * this_ptr)) {
            if (!initialized) {
                return;
            }

            game_event_bus.trigger_event(GameEvent::Update, EventTiming::Before);
            next::GameController::Update(this_ptr);
            game_event_bus.trigger_event(GameEvent::Update, EventTiming::After);
        }

        IL2CPP_INTERCEPT(GameController, void, FixedUpdate, (app::GameController * this_ptr)) {
            if (!initialized) {
                return;
            }

            game_event_bus.trigger_event(GameEvent::FixedUpdate, EventTiming::Before);
            next::GameController::FixedUpdate(this_ptr);
            game_event_bus.trigger_event(GameEvent::FixedUpdate, EventTiming::After);
            if (save_requested && can_save()) {
                if (save(false, save_request_options)) {
                    save_requested = false;
                }
            }
        }

        common::registration_handle_t on_title_screen_loaded = scenes::single_event_bus().register_handler("wotwTitleScreen", [](auto, auto) {
            initialized = true;
            on_title_screen_loaded = nullptr;
        });

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            auto simple_fps = types::SimpleFPS::get_class()->static_fields->Instance;
            UnityEngine::Behaviour::set_enabled(reinterpret_cast<app::Behaviour*>(simple_fps), false);
        });

        IL2CPP_INTERCEPT(GameController, void, OnApplicationFocus, (app::GameController * this_ptr, bool focus_status)) {
            if (focus_status) {
                core::settings::reload();

                // Update settings
                modloader::cursor_lock(core::settings::cursor_locked());
            }

            auto evt = focus_status ? GameEvent::GainedFocus : GameEvent::LostFocus;
            game_event_bus.trigger_event(evt, EventTiming::Before);
            this_ptr->fields._PreventFocusPause_k__BackingField = true;
            next::GameController::OnApplicationFocus(this_ptr, focus_status);
            game_event_bus.trigger_event(evt, EventTiming::After);
        }

        IL2CPP_INTERCEPT(GameController, void, OnApplicationQuit, (app::GameController * this_ptr)) {
            game_event_bus.trigger_event(GameEvent::Shutdown, EventTiming::Before);
            next::GameController::OnApplicationQuit(this_ptr);
            game_event_bus.trigger_event(GameEvent::Shutdown, EventTiming::After);

            modloader::shutdown();

            // Force exit to prevent crash.
            modloader::win::common::sleep(1000);
            modloader::win::common::force_exit(0);
        }
    } // namespace

    common::TimedEventBus<void, GameEvent>& event_bus() {
        return game_event_bus;
    }

    float delta_time() {
        return TimeUtility::get_deltaTime();
    }

    float fixed_delta_time() {
        return TimeUtility::get_deltaTime();
    }

    app::GameStateMachine_State__Enum game_state() {
        return types::GameStateMachine::get_class()
            ->static_fields->m_instance->fields._CurrentState_k__BackingField;
    }

    bool in_game() {
        return game_state() != app::GameStateMachine_State__Enum::TitleScreen &&
            game_state() != app::GameStateMachine_State__Enum::Logos &&
            game_state() != app::GameStateMachine_State__Enum::StartScreen;
    }

    app::GameController* game_controller() {
        return types::GameController::get_class()->static_fields->Instance;
    }

    app::SaveGameController* save_controller() {
        return game_controller()->fields.SaveGameController;
    }

    app::GameObject* container(RandoContainer c) {
        auto it = containers.find(c);
        if (it == containers.end()) {
            make_container(c);
            it = containers.find(c);
        }

        return it->second;
    }

    void add_to_container(RandoContainer c, app::GameObject* go) {
        il2cpp::unity::set_parent(go, container(c));
    }

    bool is_paused() {
        auto instance = ui::get();
        return !il2cpp::unity::is_valid(instance) ||
            !il2cpp::unity::is_valid(instance->static_fields->m_sMenu) ||
            instance->static_fields->m_sMenu->fields.m_isPaused;
    }

    bool can_save() {
        return !game_controller()->fields.DisableCheckpoints &&
            SaveGameController::CanPerformSave(save_controller());
    }

    void checkpoint(bool refill, bool refill_instantly, bool restore_instantly, std::optional<app::Vector2> override_position) {
        save(true, SaveOptions(refill, refill_instantly, false, restore_instantly, override_position));
    }

    bool save(bool queue, const SaveOptions& options) {
        if (queue && !can_save()) {
            save_requested = true;
            save_request_options = options;
            return true;
        }

        const auto sein = game::player::sein();

        if (sein == nullptr) {
            return false;
        }

        const auto health_controller = sein->fields.Mortality->fields.Health;
        const auto energy = sein->fields.Energy;
        StoredHealthAndEnergy health_and_energy_to_restore{};

        if (options.refill) {
            health_and_energy_to_restore.health = SeinHealthController::get_Amount(health_controller);
            health_and_energy_to_restore.energy = SeinEnergy::get_Current(energy);

            SeinHealthController::Fill(health_controller);
            SeinEnergy::Fill(energy);
        }

        save_controller()->fields.m_lastSavedFrameIndex = -1;

        if (options.override_position.has_value()) {
            PlatformMovement::OverridePositionNextSave(
                reinterpret_cast<app::PlatformMovement*>(core::api::game::player::sein()->fields.PlatformBehaviour->fields.PlatformMovement),
                app::Vector3{options.override_position->x, options.override_position->y, 0.f}
            );
        }

        GameController::CreateCheckpoint(game::game_controller(), options.to_disk, false);

        if (options.restore_instantly) {
            GameController::RestoreCheckpointImmediate_2(game::game_controller(), options.to_disk);
        }

        if (options.refill && !options.refill_instantly) {
            SeinHealthController::set_Amount(health_controller, health_and_energy_to_restore.health);
            health_controller->fields.VisualMinAmount = health_and_energy_to_restore.health;
            health_controller->fields.VisualMaxAmount = health_and_energy_to_restore.health;

            SeinEnergy::set_Current(energy, health_and_energy_to_restore.energy);
            energy->fields.MinVisual = health_and_energy_to_restore.energy;
            energy->fields.MaxVisual = health_and_energy_to_restore.energy;
        }

        return true;
    }

    void load(bool immediate) {
        if (immediate) {
            SaveGameController::PerformLoad(game::save_controller());
        } else {
            SaveGameController::PerformLoadWithoutCheckpointRestore(game::save_controller());
            GameController::RestoreCheckpointImmediate_1(game::game_controller());
        }
    }

    /**
     * Simulates a QTM
     */
    void reload_everything() {
        auto game_controller = game::game_controller();
        auto scenes_manager = scenes::get_scenes_manager();

        scenes_manager->fields.Settings->fields.AutoLoadingUnloading = false;
        scenes_manager->fields.Settings->fields.AllowDestroying = true;

        ScenesManager::ClearPreventUnloading(scenes_manager);
        ScenesManager::AllowUnloadingOnAllScenes(scenes_manager);
        ScenesManager::UnloadAllScenes(scenes_manager);

        scenes_manager->fields.Settings->fields.AllowDestroying = false;

        types::GameSettings::get_class()->static_fields->Instance->fields.HasLoadedGameSettingsOnce = false;
        game_controller->fields.RequireInitialValues = true;

        auto instant_load_scenes_controller = types::InstantLoadScenesController::get_class()->static_fields->Instance;

        instant_load_scenes_controller->fields.OnScenesEnabledCallback = nullptr;
        InstantLoadScenesController::set_LockFinishingLoading(instant_load_scenes_controller, false);

        if (instant_load_scenes_controller->fields.m_isLoading) {
            instant_load_scenes_controller->fields.m_isLoading = false;
            InstantLoadScenesController::UnfreezeIfFrozen(instant_load_scenes_controller);
            instant_load_scenes_controller->fields.m_onFinishedLoading = nullptr;
        }

        GameController::RemoveGameplayObjects(game_controller);
        Game::Characters::ClearCurrentCharacter();

        ScenesManager::ClearCameraPuppetPositions(scenes_manager);
        ScenesManager::UpdatePosition(scenes_manager);
        ScenesManager::ResetDistanceCaches(scenes_manager);

        GameStateMachine::SetToGame(GameStateMachine::get_Instance());
        load(true);
    }

    auto on_map_opened = event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::After, [](auto, auto) {
        auto it = containers.find(RandoContainer::MapIcons);
        if (it != containers.end()) {
            UnityEngine::GameObject::SetActive(it->second, true);
        }
    });

    auto on_map_closed = event_bus().register_handler(GameEvent::CloseAreaMap, EventTiming::After, [](auto, auto) {
        auto it = containers.find(RandoContainer::MapIcons);
        if (it != containers.end()) {
            UnityEngine::GameObject::SetActive(it->second, false);
        }
    });
} // namespace core::api::game
