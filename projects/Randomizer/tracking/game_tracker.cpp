#include <Core/api/game/death_listener.h>
#include <Core/api/game/game.h>
#include <Core/api/game/in_game_timer.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/enums/world_events.h>
#include <Core/ipc/ipc.h>
#include <Core/save_meta/save_meta.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/PlayerAbilities.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinDoorHandler.h>
#include <Modloader/app/methods/Portal.h>
#include <Modloader/app/methods/PlatformMovementPortalVisitor.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <Randomizer/tracking/game_tracker.h>
#include <Randomizer/randomizer.h>

#include <format>
#include <unordered_set>

using namespace app::classes;

namespace randomizer::timing {
    const core::api::uber_states::UberState game_finished_uber_state(34543, 11226);

    // Caches for some values that should not be read in the main menu
    auto game_finished = false;
    auto current_game_area = GameArea::Void;

    // Loading time report throttling
    constexpr float TIMER_STATE_IPC_REPORTING_THROTTLE_SECONDS = 0.1f;
    bool queue_timer_state_ipc_report = false;
    float timer_state_ipc_reporting_throttled_for = 0.f;
    constexpr float TIMER_STATE_SERVER_REPORTING_THROTTLE_SECONDS = 1.f;
    bool queue_timer_state_server_report = false;
    float timer_state_server_reporting_throttled_for = 0.f;

    // This is set to true by some rando routines which grant abilities temporarily
    bool disable_ability_tracking = false;

    // Used to prevent the timer from running when having started the game just now
    bool loaded_any_save_file = false;

    std::shared_ptr<CheckpointGameStats> checkpoint_stats = std::make_shared<CheckpointGameStats>();
    std::shared_ptr<SaveFileGameStats> save_stats = std::make_shared<SaveFileGameStats>();
    std::shared_ptr<SaveFileGameStatsEvents> save_stats_events = std::make_shared<SaveFileGameStatsEvents>(save_stats);

    struct PositionCache {
        /** The last position that has been recorded as a PositionEvent */
        app::Vector2 last_recorded_position{};
        /** The last known player position while event recording was active */
        app::Vector2 last_known_position{};
    };

    std::optional<PositionCache> position_cache = std::nullopt;

    void queue_timer_state_report() {
        queue_timer_state_ipc_report = true;
        queue_timer_state_server_report = true;
    }

    bool timer_should_run() {
        return loaded_any_save_file && !game_finished && !timer_should_pause();
    }

    namespace {
        void report_timer_state_to_ipc(float in_game_time, float async_loading_time, bool timer_should_run) {
            auto request = core::ipc::make_request("notify_timer_state_changed");
            request["payload"]["in_game_time"] = in_game_time;
            request["payload"]["async_loading_time"] = async_loading_time;
            request["payload"]["timer_should_run"] = timer_should_run;
            core::ipc::send_message(request);
        }

        void report_timer_state_to_server(float in_game_time, bool is_finished) {
            multiplayer_universe().report_in_game_time(in_game_time, is_finished);
        }

        void reset_stats() {
            checkpoint_stats = std::make_shared<CheckpointGameStats>();
            save_stats = std::make_shared<SaveFileGameStats>();
            save_stats_events = std::make_shared<SaveFileGameStatsEvents>(save_stats);
            position_cache = std::nullopt;

            core::save_meta::register_slot(
                SaveMetaSlot::CheckpointGameStats,
                SaveMetaSlotPersistence::None,
                checkpoint_stats
            );
            core::save_meta::register_slot(
                SaveMetaSlot::SaveFileGameStats,
                SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups,
                save_stats
            );
            core::save_meta::register_slot(
                SaveMetaSlot::SaveFileGameStatsEvents,
                SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups,
                save_stats_events
            );

            queue_timer_state_report();
        }

        void report_current_player_position() {
            save_stats_events->report_position(modloader::math::to_vec2(core::api::game::player::get_position()));
        }

        auto on_new_game = core::api::game::event_bus().register_handler(
            GameEvent::NewGameInitialized,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                queue_input_unlocked_callback([] {
                    reset_stats();
                    loaded_any_save_file = true;
                    report_current_player_position();
                });
            }
        );

        auto on_finished_loading = core::api::game::event_bus().register_handler(
            GameEvent::FinishedLoadingSave,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                loaded_any_save_file = true;
                report_current_player_position();
            }
        );

        auto on_create_checkpoint = core::api::game::event_bus().register_handler(
            GameEvent::CreateCheckpoint,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                if (!timer_should_run()) {
                    return;
                }

                save_stats->report_checkpoint_created();
            }
        );

        std::optional<app::Vector2> death_position_before_respawn = std::nullopt;

        auto on_respawn = core::api::game::event_bus().register_handler(
            GameEvent::Respawn,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                if (!timer_should_run()) {
                    return;
                }

                if (death_position_before_respawn.has_value()) {
                    const auto player_position = modloader::math::to_vec2(core::api::game::player::get_position());

                    save_stats_events->report_displacement(
                        death_position_before_respawn.value(),
                        player_position,
                        SaveFileGameStatsEvents::DisplacementReason::Death,
                        save_stats->time_since_last_checkpoint
                    );

                    if (position_cache.has_value()) {
                        position_cache->last_known_position = player_position;
                        position_cache->last_recorded_position = player_position;
                    }

                    death_position_before_respawn = std::nullopt;
                }

                save_stats->report_respawn();
            }
        );

        [[maybe_unused]]
        auto on_death = core::api::death_listener::player_death_event_bus().register_handler(
            EventTiming::Before,
            [](auto, auto) {
                if (!timer_should_run()) {
                    return;
                }

                death_position_before_respawn = modloader::math::to_vec2(core::api::game::player::get_position());
            }
        );

        void report_position_throttled() {
            // Don't run position reporting when we're dead
            if (death_position_before_respawn.has_value() || !timer_should_run()) {
                return;
            }

            const auto current_position = modloader::math::to_vec2(core::api::game::player::get_position());

            // Never record (0, 0) positions
            if (current_position.x == 0.f && current_position.y == 0.f) {
                return;
            }

            if (!position_cache.has_value()) {
                save_stats_events->report_position(current_position);
                position_cache = PositionCache{
                    .last_recorded_position = current_position,
                    .last_known_position = current_position,
                };

                return;
            }

            if (modloader::math::distance2(position_cache->last_known_position, current_position) > std::pow(20, 2)) {
                // We did a jump and need to cut the line
                save_stats_events->report_displacement(
                    position_cache->last_known_position, current_position, SaveFileGameStatsEvents::DisplacementReason::Unknown
                );
                position_cache->last_recorded_position = current_position;
            } else if (modloader::math::distance2(position_cache->last_recorded_position, current_position) > 1.0) {
                save_stats_events->report_position(current_position);
                position_cache->last_recorded_position = current_position;
            }

            position_cache->last_known_position = current_position;
        }

        [[maybe_unused]]
        auto on_fixed_update = core::api::game::event_bus().register_handler(
            GameEvent::FixedUpdate,
            EventTiming::After,
            [](auto, auto) {
                if (GameStateMachine::get_IsGame()) {
                    // Only set these values when in game because the main menu sets some wonky states
                    game_finished = game_finished_uber_state.get<bool>();
                    current_game_area = core::api::game::player::get_current_area();

                    report_position_throttled();
                } else {
                    current_game_area = GameArea::Void;
                }

                if (queue_timer_state_ipc_report && timer_state_ipc_reporting_throttled_for <= 0.f) {
                    timer_state_ipc_reporting_throttled_for = TIMER_STATE_IPC_REPORTING_THROTTLE_SECONDS;
                    queue_timer_state_ipc_report = false;
                    report_timer_state_to_ipc(save_stats->in_game_time, save_stats->get_total_async_loading_time(), timer_should_run());
                }

                if (
                    queue_timer_state_server_report &&
                    timer_state_server_reporting_throttled_for <= 0.f
                    && save_stats->in_game_time > 0.f &&
                    !randomizer::multiplayer_universe().is_in_incorrect_save_file()
                ) {
                    timer_state_server_reporting_throttled_for = TIMER_STATE_SERVER_REPORTING_THROTTLE_SECONDS;
                    queue_timer_state_server_report = false;
                    report_timer_state_to_server(save_stats->in_game_time, game_finished);
                }

                timer_state_ipc_reporting_throttled_for -= TimeUtility::get_fixedDeltaTime();
                timer_state_server_reporting_throttled_for -= TimeUtility::get_fixedDeltaTime();
            }
        );

        auto on_in_game_timer_time_step = core::api::game::in_game_timer::time_step_event_bus().register_handler([](auto step) {
            if (!timer_should_run()) {
                return;
            }

            switch (step.type) {
                case core::api::game::in_game_timer::TimeStepType::InGameTime:
                    save_stats->report_in_game_time_spent(current_game_area, step.duration);
                    break;
                case core::api::game::in_game_timer::TimeStepType::AsyncLoadingTime:
                    save_stats->report_async_loading_time_spent(step.duration, core::api::game::in_game_timer::get_last_async_loading_state());
                    break;
            }

            queue_timer_state_report();
        });

        auto on_ready = modloader::event_bus().register_handler(
            ModloaderEvent::GameReady,
            [](auto) {
                reset_stats();

                core::ipc::register_request_handler(
                    "timer.get_stats",
                    [](const nlohmann::json& j) {
                        auto response = core::ipc::respond_to(j);

                        response["payload"]["save"] = *save_stats;
                        response["payload"]["checkpoint"] = *checkpoint_stats;

                        core::ipc::send_message(response);
                    }
                );

                core::ipc::register_request_handler(
                    "timer.get_timer_state",
                    [](const nlohmann::json& j) {
                        auto response = core::ipc::respond_to(j);

                        response["payload"]["in_game_time"] = save_stats->in_game_time;
                        response["payload"]["async_loading_time"] = save_stats->get_total_async_loading_time();
                        response["payload"]["timer_should_run"] = timer_should_run();

                        core::ipc::send_message(response);
                    }
                );
            }
        );

        auto scenes_manager_on_teleport_called_since_last_sein_door_handler_fixed_update = false;

        IL2CPP_INTERCEPT(void, ScenesManager, OnTeleport, app::ScenesManager * this_ptr, bool update_camera_target, bool move_camera_to_target) {
            next::ScenesManager::OnTeleport(this_ptr, update_camera_target, move_camera_to_target);
            scenes_manager_on_teleport_called_since_last_sein_door_handler_fixed_update = true;
        }

        IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinDoorHandler, FixedUpdate, app::SeinDoorHandler* this_ptr) {
            scenes_manager_on_teleport_called_since_last_sein_door_handler_fixed_update = false;

            const auto previous_position = core::api::game::player::get_position();
            next::SeinDoorHandler::FixedUpdate(this_ptr);

            if (!timer_should_run()) {
                return;
            }

            if (scenes_manager_on_teleport_called_since_last_sein_door_handler_fixed_update) {
                const auto new_position = core::api::game::player::get_position();

                const auto new_position_vec2 = modloader::math::to_vec2(new_position);

                save_stats_events->report_displacement(
                    modloader::math::to_vec2(previous_position),
                    new_position_vec2,
                    SaveFileGameStatsEvents::DisplacementReason::Door
                );

                if (position_cache.has_value()) {
                    position_cache->last_known_position = new_position_vec2;
                    position_cache->last_recorded_position = new_position_vec2;
                }
            }
        }

        IL2CPP_INTERCEPT_WITH_ORDER(100, void, SavePedestalController, OnFadedToBlack, app::SavePedestalController* this_ptr) {
            const auto previous_position = core::api::game::player::get_position();
            next::SavePedestalController::OnFadedToBlack(this_ptr);

            if (!timer_should_run()) {
                return;
            }

            const auto new_position = core::api::game::player::get_position();

            const auto new_position_vec2 = modloader::math::to_vec2(new_position);

            save_stats_events->report_displacement(
                modloader::math::to_vec2(previous_position),
                new_position_vec2,
                SaveFileGameStatsEvents::DisplacementReason::Teleporter
            );

            if (position_cache.has_value()) {
                position_cache->last_known_position = new_position_vec2;
                position_cache->last_recorded_position = new_position_vec2;
            }
        }

        std::optional<app::Vector2> new_position_after_portal_teleportation = std::nullopt;

        IL2CPP_INTERCEPT(void, Portal, PerformPortalTeleportation, app::Portal * this_ptr, app::IPortalVisitor* portal_visitor) {
            const auto previous_position = core::api::game::player::get_position();
            new_position_after_portal_teleportation = std::nullopt;

            // This method will call set_Position on PlatformMovementPortalVisitor one or multiple times
            next::Portal::PerformPortalTeleportation(this_ptr, portal_visitor);

            if (!timer_should_run()) {
                return;
            }

            if (!Portal::IsSein(this_ptr, portal_visitor)) {
                return;
            }

            if (!new_position_after_portal_teleportation.has_value()) {
                return;
            }

            save_stats_events->report_displacement(
                modloader::math::to_vec2(previous_position), *new_position_after_portal_teleportation, SaveFileGameStatsEvents::DisplacementReason::Portal
            );

            if (position_cache.has_value()) {
                position_cache->last_known_position = *new_position_after_portal_teleportation;
                position_cache->last_recorded_position = *new_position_after_portal_teleportation;
            }
        }

        IL2CPP_INTERCEPT(void, PlatformMovementPortalVisitor, set_Position, app::PlatformMovementPortalVisitor* this_ptr, app::Vector3 value) {
            next::PlatformMovementPortalVisitor::set_Position(this_ptr, value);
            new_position_after_portal_teleportation = modloader::math::to_vec2(value);
        }
    } // namespace

    void override_in_game_time(float in_game_time) {
        save_stats->in_game_time = in_game_time;
        queue_timer_state_report();
    }

    float get_in_game_time() { return save_stats->in_game_time; }
    void force_set_game_finished(bool value) {
        game_finished = value;
    }

    const SaveFileGameStats& get_save_file_game_stats() {
        return *save_stats;
    }

    SaveFileGameStatsEvents& get_save_file_game_stats_events() {
        return *save_stats_events;
    }

    const CheckpointGameStats& get_checkpoint_game_stats() {
        return *checkpoint_stats;
    }
} // namespace randomizer::timing
