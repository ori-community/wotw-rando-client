#include <api/game/game.h>

#include <Core/api/faderb.h>
#include <Core/api/game/loading_detection.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>

#include <Modloader/app/methods/DestroyManager.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/LoadGameAction.h>
#include <Modloader/app/methods/LoadingFinishedCondition.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SelectedSaveValidCondition.h>
#include <Modloader/app/methods/System/Action.h>
#include <Modloader/app/methods/UberGCManager.h>
#include <Modloader/app/methods/UnityEngine/SceneManagement/SceneManager.h>
#include <Modloader/app/methods/UnityEngine/Time.h>
#include <Modloader/app/types/InstantLoadScenesController.h>
#include <Modloader/app/types/SavePedestalController.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/modloader.h>

#include <fmt/format.h>

using namespace modloader;
using namespace app::classes;

namespace core::api::game::loading_detection {
    std::atomic<LoadingState> current_loading_state = LoadingState::NotLoading;

    auto loading_scene_synchronously = false;
    auto loading_menus = false;
    auto uber_gc_running = false;
    auto destroy_manager_destroying = false;
    auto load_game_action_performing = false;
    auto loading_finished_condition_is_blocking = false;

    namespace {
        LoadingState detect_current_loading_state() {
            if (loading_scene_synchronously) {
                return LoadingState::ScenesManagerLoading;
            }

            if (loading_menus) {
                return LoadingState::MenusLoading;
            }

            if (uber_gc_running) {
                return LoadingState::UberGC;
            }

            if (load_game_action_performing) {
                return LoadingState::LoadGameActionPerforming;
            }

            auto instant_load_scenes_controller = types::InstantLoadScenesController::get_class()->static_fields->Instance;

            if (instant_load_scenes_controller == nullptr) {
                return LoadingState::InstantLoadScenesControllerNonexistent;
            }

            auto game_state_machine = GameStateMachine::get_Instance();

            if (game_state_machine == nullptr) {
                return LoadingState::GameStateMachineNonexistent;
            }

            auto ignore_game_controller_loading = false;
            auto ignore_position_inside_scene_still_loading = false;

            if (instant_load_scenes_controller->fields.m_isLoading) {
                // If we are in the main menu, finishing off loading is blocked by the LoadingFinishedCondition and
                // we need to check this against loading_finished_condition_is_blocking
                if (instant_load_scenes_controller->fields.m_lockFinishLoading) {
                    if (loading_finished_condition_is_blocking) {
                        return LoadingState::WaitingForLoadingFinishedCondition;
                    }

                    ignore_game_controller_loading = true;
                    ignore_position_inside_scene_still_loading = true;
                } else {
                    return LoadingState::InstantLoadScenesControllerLoading;
                }
            }

            if (instant_load_scenes_controller->fields.m_entireGameFrozen) {
                return LoadingState::InstantLoadScenesControllerEntireGameFrozen;
            }

            auto scenes_manager = scenes::get_scenes_manager();

            if (scenes_manager == nullptr) {
                return LoadingState::ScenesManagerNonexistent;
            }

            auto game_controller = game::controller();

            if (game_controller == nullptr) {
                return LoadingState::GameControllerNonexistent;
            }

            if (game_controller->fields.m_isLoadingGame && !ignore_game_controller_loading) {
                return LoadingState::GameControllerLoading;
            }

            if (!ignore_position_inside_scene_still_loading) {
                auto position = game::player::get_position();
                if (ScenesManager::PositionInsideSceneStillLoading_2(scenes_manager, position)) {
                    return LoadingState::PositionInsideSceneStillLoading;
                }
            }

            auto save_pedestal_controller = types::SavePedestalController::get_class()->static_fields->Instance;

            if (save_pedestal_controller == nullptr) {
                return LoadingState::SavePedestalControllerNonexistent;
            }

            // 7.f constant from SavePedestalController_FixedUpdate
            if (save_pedestal_controller->fields.m_isTeleporting &&
                (save_pedestal_controller->fields.m_startTime + 7.f) < UnityEngine::Time::get_time()) {
                return LoadingState::SavePedestalControllerWaiting;
            }

            auto menu_screen_manager = types::UI::get_class()->static_fields->m_sMenu;

            if (menu_screen_manager == nullptr) {
                return LoadingState::MenuScreenManagerNonexistent;
            }

            auto fader = core::api::faderb::get();
            if (fader != nullptr && fader->fields.CurrentState == app::FaderB_State__Enum::FadeStay) {
                return LoadingState::FaderB;
            }

            return LoadingState::NotLoading;
        }

        void update_loading_state_cache() {
            current_loading_state = detect_current_loading_state();
        }

        IL2CPP_INTERCEPT(UnityEngine::SceneManagement::SceneManager, app::Scene, LoadScene_3, (app::String * scene_name, app::LoadSceneParameters parameters)) {
            modloader::ScopedSetter setter(loading_scene_synchronously, true);
            update_loading_state_cache();
            return next::UnityEngine::SceneManagement::SceneManager::LoadScene_3(scene_name, parameters);
        }

        std::set<gchandle> on_menus_loaded_actions;
        IL2CPP_INTERCEPT(System::Action, void, Invoke, (app::Action * this_ptr)) {
            for (const auto& gchandle : on_menus_loaded_actions) {
                auto action = il2cpp::gchandle_target<app::Action>(gchandle);
                if (action == this_ptr) {
                    loading_menus = false;
                    il2cpp::gchandle_free(gchandle);
                    on_menus_loaded_actions.erase(gchandle);
                    break;
                }
            }

            next::System::Action::Invoke(this_ptr);
        }

        IL2CPP_INTERCEPT(MenuScreenManager, void, LoadMenus, (app::MenuScreenManager * this_ptr, app::Action* on_menus_loaded)) {
            on_menus_loaded_actions.insert(il2cpp::gchandle_new(on_menus_loaded));
            next::MenuScreenManager::LoadMenus(this_ptr, on_menus_loaded);
        }

        IL2CPP_INTERCEPT(UberGCManager, void, OnCleanupOutsideOfGameplay, (app::UberGCLogic_CleanupOutsideOfGameplayTrigger__Enum trigger)) {
            modloader::ScopedSetter setter(uber_gc_running, true);
            update_loading_state_cache();
            next::UberGCManager::OnCleanupOutsideOfGameplay(trigger);
        }

        IL2CPP_INTERCEPT(UberGCManager, void, RunGC, (bool is_debug)) {
            modloader::ScopedSetter setter(uber_gc_running, true);
            update_loading_state_cache();
            next::UberGCManager::RunGC(is_debug);
        }

        IL2CPP_INTERCEPT(DestroyManager, void, DestroyAll, (app::DestroyManager * this_ptr)) {
            modloader::ScopedSetter setter(destroy_manager_destroying, true);
            update_loading_state_cache();
            next::DestroyManager::DestroyAll(this_ptr);
        }

        IL2CPP_INTERCEPT(LoadingFinishedCondition, bool, Validate, (app::LoadingFinishedCondition * this_ptr, app::IContext* context)) {
            auto validation_passed = next::LoadingFinishedCondition::Validate(this_ptr, context);
            loading_finished_condition_is_blocking = !validation_passed;
            return validation_passed;
        }

        IL2CPP_INTERCEPT(LoadGameAction, void, Perform, (app::LoadGameAction * this_ptr, app::IContext* context)) {
            modloader::ScopedSetter setter(load_game_action_performing, true);
            update_loading_state_cache();
            next::LoadGameAction::Perform(this_ptr, context);
        }

        auto on_after_unity_update_loop = game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::After, [](auto, auto) {
            update_loading_state_cache();
        });
    } // namespace

    LoadingState get_loading_state() {
        return current_loading_state;
    }
} // namespace core::api::game::loading_detection