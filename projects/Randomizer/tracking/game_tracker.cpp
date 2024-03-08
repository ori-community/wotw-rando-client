#include <Core/api/game/death_listener.h>
#include <Core/api/game/game.h>
#include <Core/api/game/in_game_timer.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/enums/world_events.h>
#include <Core/events/async_update.h>
#include <Core/ipc/ipc.h>
#include <Core/save_meta/save_meta.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/PlayerAbilities.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <Randomizer/tracking/game_tracker.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/stats/game_stats.h>

#include <format>
#include <atomic>
#include <mutex>
#include <unordered_set>

using namespace app::classes;

namespace randomizer::timing {
    constexpr bool ENABLE_DEBUG_LOGGING = false;

    const std::unordered_set<app::AbilityType__Enum> TRACKED_ABILITIES{
        app::AbilityType__Enum::Bash,
        app::AbilityType__Enum::DoubleJump,
        app::AbilityType__Enum::ChargeJump, // Launch
        app::AbilityType__Enum::Glide,
        app::AbilityType__Enum::WaterBreath,
        app::AbilityType__Enum::Grenade,
        app::AbilityType__Enum::SpiritLeash, // Grapple
        app::AbilityType__Enum::GlowSpell, // Flash
        app::AbilityType__Enum::SpiritSpearSpell, // Spear
        app::AbilityType__Enum::MeditateSpell, // Regenerate but the actual one
        app::AbilityType__Enum::Bow,
        app::AbilityType__Enum::Hammer,
        app::AbilityType__Enum::Sword,
        app::AbilityType__Enum::Digging, // Burrow
        app::AbilityType__Enum::DashNew, // Dash
        app::AbilityType__Enum::WaterDash,
        app::AbilityType__Enum::ChakramSpell, // Shuriken
        app::AbilityType__Enum::Blaze,
        app::AbilityType__Enum::TurretSpell, // Sentry
        app::AbilityType__Enum::FeatherFlap, // Flap
        app::AbilityType__Enum::DamageUpgradeA, // Ancestral Light 1
        app::AbilityType__Enum::DamageUpgradeB, // Ancestral Light 2
    };

    const std::unordered_map<core::api::uber_states::UberState, WorldEvent> TRACKED_WORLD_EVENTS{
        {core::api::uber_states::UberState(UberStateGroup::RandoState, 2000), WorldEvent::CleanWater},
    };

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

    void queue_timer_state_report() {
        queue_timer_state_ipc_report = true;
        queue_timer_state_server_report = true;
    }

    bool timer_should_run() {
        return loaded_any_save_file && !game_finished;
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

            queue_timer_state_report();
        }

        auto on_new_game = core::api::game::event_bus().register_handler(
            GameEvent::NewGameInitialized,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                queue_input_unlocked_callback([] {
                    reset_stats();
                    loaded_any_save_file = true;
                });
            }
        );

        auto on_finished_loading = core::api::game::event_bus().register_handler(
            GameEvent::FinishedLoadingSave,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                loaded_any_save_file = true;
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

        auto on_respawn = core::api::game::event_bus().register_handler(
            GameEvent::Respawn,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                if (!timer_should_run()) {
                    return;
                }

                save_stats->report_respawn();
            }
        );

        auto on_teleport = core::api::game::event_bus().register_handler(
            GameEvent::Teleport,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                if (!timer_should_run()) {
                    return;
                }

                save_stats->report_teleport();
            }
        );

        auto on_death = core::api::death_listener::player_death_event_bus().register_handler(
            EventTiming::Before,
            [](auto, auto) {
                if (!timer_should_run()) {
                    return;
                }

                save_stats->report_death(core::api::game::player::get_current_area());
            }
        );

        float time_to_next_debug_print = 0.f;

        auto on_fixed_update = core::api::game::event_bus().register_handler(
            GameEvent::FixedUpdate,
            EventTiming::After,
            [](auto, auto) {
                // Only set these values when in game because the main menu sets some wonky states
                if (GameStateMachine::get_IsGame()) {
                    game_finished = game_finished_uber_state.get<bool>();
                    current_game_area = core::api::game::player::get_current_area();
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

                if (ENABLE_DEBUG_LOGGING) {
                    time_to_next_debug_print -= TimeUtility::get_fixedDeltaTime();
                    if (time_to_next_debug_print <= 0.f) {
                        modloader::win::console::console_send("");
                        modloader::win::console::console_send(std::format("time = {}, pickups = {}", save_stats->in_game_time, checkpoint_stats->total_pickups));
                        modloader::win::console::console_send(
                            std::format("max_ppm = {}, at = {}", save_stats->max_ppm_over_timespan, save_stats->max_ppm_over_timespan_at)
                        );
                        modloader::win::console::console_send(
                            std::format("time_lost_to_deaths = {}", save_stats->time_lost_to_deaths)
                        );
                        modloader::win::console::console_send(
                            std::format(
                                "got bash at = {}",
                                save_stats->ability_timestamps.contains(app::AbilityType__Enum::Bash) ? save_stats->ability_timestamps.at(app::AbilityType__Enum::Bash) : -1.f
                            )
                        );
                        time_to_next_debug_print = 0.5f;
                    }
                }
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

        auto uber_state_notify = core::api::uber_states::notification_bus().register_handler(
            [](auto params) {
                if (!params.state.template get<bool>() || game_finished_uber_state.get<bool>()) {
                    return;
                }

                auto world_event_it = TRACKED_WORLD_EVENTS.find(params.state);
                if (world_event_it != TRACKED_WORLD_EVENTS.end()) {
                    save_stats->report_world_event(world_event_it->second);
                }
            }
        );

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

        IL2CPP_INTERCEPT(PlayerAbilities, void, SetAbility, (app::PlayerAbilities * this_ptr, app::AbilityType__Enum ability, bool value)) {
            if (value && !disable_ability_tracking && TRACKED_ABILITIES.contains(ability) && timer_should_run()) {
                save_stats->report_ability_acquired(ability);
            }

            next::PlayerAbilities::SetAbility(this_ptr, ability, value);
        }
    } // namespace

    void notify_pickup_collected(const GameArea area, const std::string& location_name) {
        if (!timer_should_run()) {
            return;
        }

        checkpoint_stats->report_pickup(area);
        save_stats->report_pickup(area, location_name);
    }

    void override_in_game_time(float in_game_time) {
        save_stats->in_game_time = in_game_time;
        queue_timer_state_report();
    }
} // namespace randomizer::timing
