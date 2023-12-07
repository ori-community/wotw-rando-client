#include <Core/api/faderb.h>
#include <Core/api/game/game.h>
#include <Core/api/game/in_game_timer.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>

#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/LoadingFinishedCondition.h>
#include <Modloader/app/methods/MenuScreenManager.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/GameSettings.h>
#include <Modloader/app/methods/ReturnToTitleScreenAction.h>
#include <Modloader/app/methods/usedStandaloneScripts/DeltaTimeManagers/AverageBothDeltaTimeController.h>
#include <Modloader/app/methods/UnityEngine/Time.h>
#include <Modloader/app/types/InstantLoadScenesController.h>
#include <Modloader/app/types/SavePedestalController.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/modloader.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/TitleScreenPressStartLogic.h>
#include <Modloader/app/methods/Core/Input.h>

using namespace modloader;
using namespace app::classes;

namespace core::api::game::in_game_timer {
    AsyncLoadingState last_async_loading_state = AsyncLoadingState::NotLoading;

    constexpr unsigned int MOON_DELTA_BUFFER_SIZE = 26;  // AverageBothDeltaTimeController.USED_HISTORY_LENGTH
    constexpr unsigned int CONSECUTIVE_FRAMES_WITH_CONTROL_SWITCH_ALLOWED_BEFORE_SWITCHING_TO_REAL_TIME = 1;

    /**
     * TRIVIA:
     * - Unity Delta Time = deltaTime reported by Unity before Moon overrides it
     * - Unity Unscaled Delta Time = unscaledDeltaTime reported by Unity. Does not get overridden by Moon.
     * - Moon Delta Time = deltaTime after it got overridden by Moon
     */

    auto minimum_teleportation_time = 7.f;  // 7.f constant from SavePedestalController_FixedUpdate, can be overridden in rando
    auto unity_delta_time = 0.f;
    auto loading_finished_condition_is_blocking = false;
    auto title_screen_startup_waiting = true;
    auto use_unity_unscaled_delta_time_for_next_n_frames = 0U;
    auto did_switch_control_scheme_in_current_frame = false;
    auto consecutive_frames_with_control_scheme_switch = 0U;
    common::EventBus<TimeStep> _time_step_event_bus;

    namespace {
        AsyncLoadingState detect_async_loading_state() {
            const auto instant_load_scenes_controller = types::InstantLoadScenesController::get_class()->static_fields->Instance;

            if (instant_load_scenes_controller == nullptr) {
                return AsyncLoadingState::InstantLoadScenesControllerNonexistent;
            }

            if (GameStateMachine::get_Instance() == nullptr) {
                return AsyncLoadingState::GameStateMachineNonexistent;
            }

            auto ignore_game_controller_loading = false;
            auto ignore_position_inside_scene_still_loading = false;

            if (instant_load_scenes_controller->fields.m_isLoading) {
                // If we are in the main menu, finishing off loading is blocked by the LoadingFinishedCondition and
                // we need to check this against loading_finished_condition_is_blocking
                if (instant_load_scenes_controller->fields.m_lockFinishLoading) {
                    if (loading_finished_condition_is_blocking) {
                        return AsyncLoadingState::WaitingForLoadingFinishedCondition;
                    }

                    ignore_game_controller_loading = true;
                    ignore_position_inside_scene_still_loading = true;
                } else {
                    return AsyncLoadingState::InstantLoadScenesControllerLoading;
                }
            }

            if (instant_load_scenes_controller->fields.m_entireGameFrozen) {
                return AsyncLoadingState::InstantLoadScenesControllerEntireGameFrozen;
            }

            auto scenes_manager = scenes::get_scenes_manager();

            if (scenes_manager == nullptr) {
                return AsyncLoadingState::ScenesManagerNonexistent;
            }

            const auto game_controller = game::game_controller();

            if (game_controller == nullptr) {
                return AsyncLoadingState::GameControllerNonexistent;
            }

            if (game_controller->fields.m_isLoadingGame && !ignore_game_controller_loading) {
                return AsyncLoadingState::GameControllerLoading;
            }

            if (!ignore_position_inside_scene_still_loading) {
                const auto position = player::get_position();

                if (ScenesManager::PositionInsideSceneStillLoading_2(scenes_manager, position)) {
                    return AsyncLoadingState::PositionInsideSceneStillLoading;
                }
            }

            auto save_pedestal_controller = types::SavePedestalController::get_class()->static_fields->Instance;

            if (save_pedestal_controller == nullptr) {
                return AsyncLoadingState::SavePedestalControllerNonexistent;
            }

            if (
                save_pedestal_controller->fields.m_isTeleporting &&
                (save_pedestal_controller->fields.m_startTime + 7.f) < UnityEngine::Time::get_time()  // 7.f seconds is the hardcoded default in vanilla
            ) {
                return AsyncLoadingState::SavePedestalControllerWaiting;
            }

            auto menu_screen_manager = types::UI::get_class()->static_fields->m_sMenu;

            if (menu_screen_manager == nullptr) {
                return AsyncLoadingState::MenuScreenManagerNonexistent;
            }

            auto fader = faderb::get();
            if (fader != nullptr && fader->fields.CurrentState == app::FaderB_State__Enum::FadeStay) {
                // Don't do this when the Resume screen is active to prevent timer pauses on
                // glitches utilizing it
                if (!MenuScreenManager::get_ResumeScreenVisible(menu_screen_manager)) {
                    return AsyncLoadingState::FaderB;
                }
            }

            if (title_screen_startup_waiting) {
                return AsyncLoadingState::TitleScreenWaiting;
            }

            return AsyncLoadingState::NotLoading;
        }

        void update_game_timer_on_end_of_frame() {
            if (did_switch_control_scheme_in_current_frame) {
                ++consecutive_frames_with_control_scheme_switch;

                if (consecutive_frames_with_control_scheme_switch > CONSECUTIVE_FRAMES_WITH_CONTROL_SWITCH_ALLOWED_BEFORE_SWITCHING_TO_REAL_TIME) {
                    use_unity_unscaled_delta_time_for_next_n_frames = MOON_DELTA_BUFFER_SIZE;
                }
            } else {
                consecutive_frames_with_control_scheme_switch = 0U;
            }

            last_async_loading_state = detect_async_loading_state();
            auto moon_delta_time = UnityEngine::Time::get_deltaTime();

            if (last_async_loading_state == AsyncLoadingState::NotLoading) {
                if (use_unity_unscaled_delta_time_for_next_n_frames > 0) {
                    --use_unity_unscaled_delta_time_for_next_n_frames;
                    auto unity_unscaled_delta_time = UnityEngine::Time::get_unscaledDeltaTime();
                    _time_step_event_bus.trigger_event(TimeStep {TimeStepType::InGameTime, unity_unscaled_delta_time});
                } else {
                    _time_step_event_bus.trigger_event(TimeStep {TimeStepType::InGameTime, moon_delta_time});
                }
            } else {
                _time_step_event_bus.trigger_event(TimeStep {TimeStepType::AsyncLoadingTime, moon_delta_time});
            }
        }

        void on_qtm_start() {
            title_screen_startup_waiting = true;
            use_unity_unscaled_delta_time_for_next_n_frames = 0U;  // To prevent JSD detection from kicking in
        }

        IL2CPP_INTERCEPT(GameController, void, GoBackToMainMenu, (app::GameController* this_ptr, bool select_save_slot, app::RestartReason__Enum restart_reason)) {
            // select_save_slot == true only happens when exiting from a Memory (Cutscene Replay)
            if (!select_save_slot) {
                on_qtm_start();
            }

            next::GameController::GoBackToMainMenu(this_ptr, select_save_slot, restart_reason);
        }

        IL2CPP_INTERCEPT(ReturnToTitleScreenAction, void, Perform, (app::ReturnToTitleScreenAction* this_ptr, app::IContext* context)) {
            on_qtm_start();
            next::ReturnToTitleScreenAction::Perform(this_ptr, context);
        }

        auto is_in_title_screen_press_start_logic_fixed_update = false;
        IL2CPP_INTERCEPT(TitleScreenPressStartLogic, void, FixedUpdate, (app::TitleScreenPressStartLogic* this_ptr)) {
            ScopedSetter _(is_in_title_screen_press_start_logic_fixed_update, true);
            next::TitleScreenPressStartLogic::FixedUpdate(this_ptr);
        }

        IL2CPP_INTERCEPT(Core::Input, bool, get_OnAnyButtonPressed, ()) {
            if (is_in_title_screen_press_start_logic_fixed_update) {
                title_screen_startup_waiting = false;
            }

            return next::Core::Input::get_OnAnyButtonPressed();
        }

        IL2CPP_INTERCEPT(TitleScreenPressStartLogic, void, OnStartPressedCallback, (app::TitleScreenPressStartLogic* this_ptr)) {
            title_screen_startup_waiting = false;
            use_unity_unscaled_delta_time_for_next_n_frames = 0U;  // In case we accidentally "JSD" back
            next::TitleScreenPressStartLogic::OnStartPressedCallback(this_ptr);
        }

        IL2CPP_INTERCEPT(LoadingFinishedCondition, bool, Validate, (app::LoadingFinishedCondition * this_ptr, app::IContext* context)) {
            const auto validation_passed = next::LoadingFinishedCondition::Validate(this_ptr, context);
            loading_finished_condition_is_blocking = !validation_passed;
            return validation_passed;
        }

        IL2CPP_INTERCEPT(usedStandaloneScripts::DeltaTimeManagers::AverageBothDeltaTimeController, void, PreTimeManagerUpdate, (app::AverageBothDeltaTimeController * this_ptr)) {
            unity_delta_time = UnityEngine::Time::get_deltaTime();
            next::usedStandaloneScripts::DeltaTimeManagers::AverageBothDeltaTimeController::PreTimeManagerUpdate(this_ptr);
        }

        IL2CPP_INTERCEPT(GameSettings, void, set_CurrentControlScheme, (app::GameSettings* this_ptr, app::ControlScheme__Enum scheme)) {
            next::GameSettings::set_CurrentControlScheme(this_ptr, scheme);
            did_switch_control_scheme_in_current_frame = true;
        }

        [[maybe_unused]] auto on_before_unity_update_loop = game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::Before, [](auto, auto) {
            did_switch_control_scheme_in_current_frame = false;
        });

        [[maybe_unused]] auto on_after_unity_update_loop = game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::After, [](auto, auto) {
            update_game_timer_on_end_of_frame();
        });
    } // namespace

    common::EventBus<TimeStep>& time_step_event_bus() {
        return _time_step_event_bus;
    }

    void set_minimum_teleportation_time(float time) {
        minimum_teleportation_time = time;
    }

    AsyncLoadingState get_last_async_loading_state() {
        return last_async_loading_state;
    }
} // namespace core::api::game::loading_detection
