#include <Core/api/game/death_listener.h>
#include <Core/api/game/game.h>
#include <Core/api/game/in_game_timer.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/ipc/ipc.h>
#include <Core/save_meta/save_meta.h>
#include <Core/uber_states/core_uber_states.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/PlatformMovementPortalVisitor.h>
#include <Modloader/app/methods/Portal.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinDoorHandler.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/map/map_icons.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/tracking/game_tracker.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


using namespace app::classes;

namespace randomizer::timing {
    auto& game_finished_state = core::uber_states::state<"gameStateGroup", "gameFinished">();
    auto& spoiler_filter_enabled_state = uber_states::state<"randoState", "enableSpoilerFilter">();

    namespace {
        // Number of active guards to prevent position recording. If > 0, player
        // position must not be recorded
        std::size_t disable_position_recording_guards = 0;

        // Number of active guards to prevent ability tracking. If > 0, changes
        // to the player's abilities must not be recorded
        std::size_t disable_ability_tracking_guards = 0;

        struct GameStatConfiguration {
            core::api::uber_states::UntypedUberState state;
            bool (*should_record)() = nullptr;
        };

        std::vector<common::Droppable::ptr_t> game_stat_event_handler_droppables;

        struct TrackedSkillConfiguration {
            frozen::string label;
            map::icons::MapIcon::Type icon_type;
        };

        std::vector<core::reactivity::ReactiveEffect::ptr_t> tracked_state_effects;

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

        // Used to prevent the timer from running when having started the game just now
        bool loaded_any_save_file = false;

        std::shared_ptr<SaveFileGameStats> save_stats = std::make_shared<SaveFileGameStats>();
        std::shared_ptr<GameTrackerPersistentMetaData> game_tracker_persistent_meta_data = std::make_shared<GameTrackerPersistentMetaData>();
        std::shared_ptr<GameTrackerVolatileMetaData> game_tracker_volatile_meta_data = std::make_shared<GameTrackerVolatileMetaData>();

        struct PositionCache {
            /** The last position that has been recorded as a PositionEvent */
            app::Vector2 last_recorded_position{};
            /** The last known player position while event recording was active */
            app::Vector2 last_known_position{};
        };

        std::optional<PositionCache> position_cache = std::nullopt;
    } // namespace

    static std::unordered_map<GameStat, GameStatConfiguration> GAME_STAT_CONFIGURATIONS{
        {GameStat::PickupsCollected, {uber_states::state<"randoStats", "pickupsCollected">()}},
        {GameStat::PickupsTotal, {uber_states::state<"randoStats", "pickupsTotal">()}},
        {GameStat::Keystones, {uber_states::state<"player", "keystones">()}},
        {GameStat::KeystonesCollected, {uber_states::state<"randoStats", "keystonesCollected">()}},
        {GameStat::SpiritLight, {uber_states::state<"player", "spiritLight">()}},
        {GameStat::SpiritLightCollected, {uber_states::state<"randoStats", "spiritLightCollected">()}},
        {GameStat::SpiritLightSpent, {uber_states::state<"randoStats", "spiritLightSpent">()}},
        {GameStat::GorlekOre, {uber_states::state<"player", "gorlekOre">()}},
        {GameStat::GorlekOreCollected, {uber_states::state<"randoStats", "oreCollected">()}},
        {GameStat::GorlekOreSpent, {uber_states::state<"randoStats", "oreSpent">()}},
        {GameStat::ShardSlots, {uber_states::state<"player", "shardSlots">()}},
        {GameStat::Health, {uber_states::state<"player", "health">()}},
        {GameStat::MaxHealth, {uber_states::state<"player", "baseMaxHealth">()}},
        {GameStat::Energy, {uber_states::state<"player", "energy">()}},
        {GameStat::MaxEnergy, {uber_states::state<"player", "maxEnergy">()}},
        {GameStat::PickupsCollectedMarsh, {uber_states::state<"randoStats", "pickupsCollectedMarsh">()}},
        {GameStat::PickupsTotalMarsh, {uber_states::state<"randoStats", "pickupsTotalMarsh">()}},
        {GameStat::PickupsCollectedHollow, {uber_states::state<"randoStats", "pickupsCollectedHollow">()}},
        {GameStat::PickupsTotalHollow, {uber_states::state<"randoStats", "pickupsTotalHollow">()}},
        {GameStat::PickupsCollectedGlades, {uber_states::state<"randoStats", "pickupsCollectedGlades">()}},
        {GameStat::PickupsTotalGlades, {uber_states::state<"randoStats", "pickupsTotalGlades">()}},
        {GameStat::PickupsCollectedWellspring, {uber_states::state<"randoStats", "pickupsCollectedWellspring">()}},
        {GameStat::PickupsTotalWellspring, {uber_states::state<"randoStats", "pickupsTotalWellspring">()}},
        {GameStat::PickupsCollectedWoods, {uber_states::state<"randoStats", "pickupsCollectedWoods">()}},
        {GameStat::PickupsTotalWoods, {uber_states::state<"randoStats", "pickupsTotalWoods">()}},
        {GameStat::PickupsCollectedReach, {uber_states::state<"randoStats", "pickupsCollectedReach">()}},
        {GameStat::PickupsTotalReach, {uber_states::state<"randoStats", "pickupsTotalReach">()}},
        {GameStat::PickupsCollectedDepths, {uber_states::state<"randoStats", "pickupsCollectedDepths">()}},
        {GameStat::PickupsTotalDepths, {uber_states::state<"randoStats", "pickupsTotalDepths">()}},
        {GameStat::PickupsCollectedPools, {uber_states::state<"randoStats", "pickupsCollectedPools">()}},
        {GameStat::PickupsTotalPools, {uber_states::state<"randoStats", "pickupsTotalPools">()}},
        {GameStat::PickupsCollectedWastes, {uber_states::state<"randoStats", "pickupsCollectedWastes">()}},
        {GameStat::PickupsTotalWastes, {uber_states::state<"randoStats", "pickupsTotalWastes">()}},
        {GameStat::PickupsCollectedRuins, {uber_states::state<"randoStats", "pickupsCollectedRuins">()}},
        {GameStat::PickupsTotalRuins, {uber_states::state<"randoStats", "pickupsTotalRuins">()}},
        {GameStat::PickupsCollectedWillow, {uber_states::state<"randoStats", "pickupsCollectedWillow">()}},
        {GameStat::PickupsTotalWillow, {uber_states::state<"randoStats", "pickupsTotalWillow">()}},
        {GameStat::PickupsCollectedBurrows, {uber_states::state<"randoStats", "pickupsCollectedBurrows">()}},
        {GameStat::PickupsTotalBurrows, {uber_states::state<"randoStats", "pickupsTotalBurrows">()}},
        {GameStat::PickupsCollectedShop, {uber_states::state<"randoStats", "pickupsCollectedShop">()}},
        {GameStat::PickupsTotalShop, {uber_states::state<"randoStats", "pickupsTotalShop">()}},
        {GameStat::CurrentArea, {uber_states::state<"player", "currentArea">(), [] {
            return core::api::game::player::is_alive();
        }}},
    };

    static std::unordered_map<core::api::uber_states::UntypedUberId, TrackedSkillConfiguration> TRACKED_STATE_CONFIGURATIONS = {
        {uber_states::state<"skills", "bash">(), {"Bash", map::icons::MapIcon::Type::SkillBash}},
        {uber_states::state<"skills", "doubleJump">(), {"Double Jump", map::icons::MapIcon::Type::SkillDoubleJump}},
        {uber_states::state<"skills", "launch">(), {"Launch", map::icons::MapIcon::Type::SkillLaunch}},
        {uber_states::state<"skills", "glide">(), {"Glide", map::icons::MapIcon::Type::SkillGlide}},
        {uber_states::state<"skills", "waterBreath">(), {"Water Breath", map::icons::MapIcon::Type::SkillWaterBreath}},
        {uber_states::state<"skills", "grenade">(), {"Grenade", map::icons::MapIcon::Type::SkillGrenade}},
        {uber_states::state<"skills", "grapple">(), {"Grapple", map::icons::MapIcon::Type::SkillGrapple}},
        {uber_states::state<"skills", "flash">(), {"Flash", map::icons::MapIcon::Type::SkillFlash}},
        {uber_states::state<"skills", "spear">(), {"Spear", map::icons::MapIcon::Type::SkillSpear}},
        {uber_states::state<"skills", "regenerate">(), {"Regenerate", map::icons::MapIcon::Type::SkillRegenerate}},
        {uber_states::state<"skills", "bow">(), {"Bow", map::icons::MapIcon::Type::SkillBow}},
        {uber_states::state<"skills", "hammer">(), {"Hammer", map::icons::MapIcon::Type::SkillHammer}},
        {uber_states::state<"skills", "torch">(), {"Torch", map::icons::MapIcon::Type::SkillTorch}},
        {uber_states::state<"skills", "sword">(), {"Sword", map::icons::MapIcon::Type::SkillSword}},
        {uber_states::state<"skills", "burrow">(), {"Burrow", map::icons::MapIcon::Type::SkillBurrow}},
        {uber_states::state<"skills", "dash">(), {"Dash", map::icons::MapIcon::Type::SkillDash}},
        {uber_states::state<"skills", "waterDash">(), {"Water Dash", map::icons::MapIcon::Type::SkillWaterDash}},
        {uber_states::state<"skills", "shuriken">(), {"Shuriken", map::icons::MapIcon::Type::SkillShuriken}},
        {uber_states::state<"skills", "blaze">(), {"Blaze", map::icons::MapIcon::Type::SkillBlaze}},
        {uber_states::state<"skills", "sentry">(), {"Sentry", map::icons::MapIcon::Type::SkillSentry}},
        {uber_states::state<"skills", "flap">(), {"Flap", map::icons::MapIcon::Type::SkillFlap}},
        {uber_states::state<"skills", "gladesAncestralLight">(), {"Glades Ancestral Light", map::icons::MapIcon::Type::SkillAncestralLightA}},
        {uber_states::state<"skills", "marshAncestralLight">(), {"Marsh Ancestral Light", map::icons::MapIcon::Type::SkillAncestralLightB}},
        {uber_states::state<"randoState", "cleanWater">(), {"Clean Water", map::icons::MapIcon::Type::Watermill}},
    };

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
            save_stats = std::make_shared<SaveFileGameStats>();
            game_tracker_persistent_meta_data = std::make_shared<GameTrackerPersistentMetaData>();
            game_tracker_volatile_meta_data = std::make_shared<GameTrackerVolatileMetaData>();
            position_cache = std::nullopt;

            core::save_meta::register_slot(
                SaveMetaSlot::SaveFileGameStats,
                SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups,
                save_stats
            );
            core::save_meta::register_slot(
                SaveMetaSlot::GameTrackerPersistentMetaData,
                SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups,
                game_tracker_persistent_meta_data
            );
            core::save_meta::register_slot(
                SaveMetaSlot::GameTrackerVolatileMetaData,
                SaveMetaSlotPersistence::None,
                game_tracker_volatile_meta_data
            );

            queue_timer_state_report();
        }

        void report_current_player_position() {
            save_stats->report_position(modloader::math::to_vec2(core::api::game::player::get_position()));
        }

        void record_all_game_stats() {
            for (auto& [game_stat, configuration]: GAME_STAT_CONFIGURATIONS) {
                if (configuration.should_record != nullptr && !configuration.should_record()) {
                    continue;
                }

                save_stats->report_stat(game_stat, configuration.state.get<float>());
            }
        }

        [[maybe_unused]]
        auto on_before_new_game = core::api::game::event_bus().register_handler(
            GameEvent::NewGame,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                queue_input_unlocked_callback([] {
                    loaded_any_save_file = true;
                });
            }
        );

        [[maybe_unused]]
        auto on_before_new_game_initialized = core::api::game::event_bus().register_handler(
            GameEvent::NewGameInitialized,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                queue_input_unlocked_callback([] {
                    reset_stats();
                    report_current_player_position();
                });
            }
        );

        [[maybe_unused]]
        auto on_after_new_game_initialized = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [](auto, auto) {
            record_all_game_stats();
        });

        [[maybe_unused]]
        auto on_finished_loading = core::api::game::event_bus().register_handler(
            GameEvent::FinishedLoadingSave,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                loaded_any_save_file = true;
                report_current_player_position();
            }
        );

        [[maybe_unused]]
        auto on_before_create_checkpoint = core::api::game::event_bus().register_handler(
            GameEvent::CreateCheckpoint,
            EventTiming::Before,
            [](GameEvent, EventTiming) {
                if (disable_position_recording_guards > 0 || !timer_should_run()) {
                    return;
                }

                report_current_player_position();
            }
        );

        [[maybe_unused]]
        auto on_after_create_checkpoint = core::api::game::event_bus().register_handler(
            GameEvent::CreateCheckpoint,
            EventTiming::After,
            [](GameEvent, EventTiming) {
                if (!timer_should_run()) {
                    return;
                }

                save_stats->report_checkpoint_created();
            }
        );

        std::optional<app::Vector2> death_position_before_respawn = std::nullopt;

        [[maybe_unused]]
        auto on_respawn = core::api::game::event_bus().register_handler(
            GameEvent::Respawn,
            EventTiming::Before,
            [](GameEvent event, EventTiming timing) {
                if (!timer_should_run()) {
                    return;
                }

                record_all_game_stats();

                if (death_position_before_respawn.has_value()) {
                    const auto player_position = modloader::math::to_vec2(core::api::game::player::get_position());

                    save_stats->report_displacement(
                        death_position_before_respawn.value(),
                        player_position,
                        SaveFileGameStats::DisplacementReason::Death,
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

        [[maybe_unused]]
        auto on_spoiler_filter_enabled_changed = core::api::uber_states::on_uber_state_changed().register_handler(
            spoiler_filter_enabled_state,
            [](auto) {
                if (spoiler_filter_enabled_state.get()) {
                    auto& stats = get_save_file_game_stats();
                    for (const auto& [id, map_icon]: game_seed().environment().get_spoiler_map_icons()) {
                        if (stats.discovered_items.contains(id)) {
                            continue;
                        }

                        stats.set_discovered_item(
                            id,
                            SaveFileGameStats::DiscoveredItem(
                                map_icon->world_position.get().x,
                                map_icon->world_position.get().y,
                                map_icon->type.get(),
                                map_icon->label_text.get(),
                                std::nullopt
                            )
                        );
                    }
                }
            }
        );

        void report_position_throttled() {
            // Don't run position reporting when we're dead
            if (death_position_before_respawn.has_value() || disable_position_recording_guards > 0 || !timer_should_run()) {
                return;
            }

            const auto current_position = modloader::math::to_vec2(core::api::game::player::get_position());

            // Never record (0, 0) positions
            if (current_position.x == 0.f && current_position.y == 0.f) {
                return;
            }

            if (!position_cache.has_value()) {
                save_stats->report_position(current_position);
                position_cache = PositionCache{
                    .last_recorded_position = current_position,
                    .last_known_position = current_position,
                };

                return;
            }

            if (modloader::math::distance2(position_cache->last_known_position, current_position) > std::pow(20, 2)) {
                // We did a jump and need to cut the line
                save_stats->report_displacement(
                    position_cache->last_known_position, current_position, SaveFileGameStats::DisplacementReason::Unknown
                );
                position_cache->last_recorded_position = current_position;
            } else if (modloader::math::distance2(position_cache->last_recorded_position, current_position) > 1.0) {
                save_stats->report_position(current_position);
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
                    const auto previous_game_finished = game_finished;
                    game_finished = game_finished_state.get();
                    if (game_finished != previous_game_finished) {
                        queue_timer_state_report();
                    }

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

        [[maybe_unused]]
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
                default:;
            }

            queue_timer_state_report();
        });

        void track_state_change(const core::api::uber_states::UntypedUberId& state_id, const TrackedSkillConfiguration& configuration) {
            const auto is_currently_tracked = game_tracker_persistent_meta_data->active_tracked_states.contains(state_id);
            auto uber_state = core::api::uber_states::UntypedUberState(state_id);
            const auto is_active = uber_state.get<bool>();

            if (is_currently_tracked != is_active) {
                const auto id = state_id.group * 1000000 + state_id.member;

                if (is_active) {
                    get_save_file_game_stats().add_timeline_entry(
                        id,
                        std::string(configuration.label.begin(), configuration.label.end()),
                        configuration.icon_type,
                        SaveFileGameStats::TimelineEntryEvent::Type::Ability
                    );
                    game_tracker_persistent_meta_data->active_tracked_states.insert(state_id);
                } else {
                    get_save_file_game_stats().add_timeline_end_entry(
                        id,
                        SaveFileGameStats::TimelineEntryEvent::Type::Ability
                    );
                    game_tracker_persistent_meta_data->active_tracked_states.erase(state_id);
                }
            }
        }

        [[maybe_unused]]
        auto on_ready = modloader::event_bus().register_handler(
            ModloaderEvent::GameReady,
            [](auto) {
                reset_stats();

                for (auto& [game_stat, configuration]: GAME_STAT_CONFIGURATIONS) {
                    game_stat_event_handler_droppables.push_back(
                        core::api::uber_states::on_uber_state_changed().register_handler(
                            configuration.state,
                            [game_stat, &configuration](auto) {
                                if (configuration.should_record != nullptr && !configuration.should_record()) {
                                    return;
                                }

                                if (game_finished || !GameStateMachine::get_IsGame()) {
                                    return;
                                }

                                save_stats->report_stat(game_stat, configuration.state.get<float>());
                            }
                        )
                    );
                }

                for (const auto& [state_identifier, configuration]: TRACKED_STATE_CONFIGURATIONS) {
                    core::reactivity::watch_effect()
                        .effect({state_identifier})
                        .after([state_identifier, configuration] {
                            if (game_finished || disable_ability_tracking_guards > 0 || !GameStateMachine::get_IsGame()) {
                                return;
                            }

                            track_state_change(state_identifier, configuration);
                        })
                        .trigger_on_load()
                        .finalize(tracked_state_effects);
                }

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

                core::ipc::register_request_handler(
                    "stats.get_game_stats_slot_data",
                    [](const nlohmann::json& j) {
                        auto response = core::ipc::respond_to(j);

                        core::utils::ByteStream stream;
                        save_stats->serialize_event_stream(stream);
                        response["payload"]["data"] = *reinterpret_cast<std::vector<uint8_t>*>(&stream.buffer);

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

                save_stats->report_displacement(
                    modloader::math::to_vec2(previous_position),
                    new_position_vec2,
                    SaveFileGameStats::DisplacementReason::Door
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

            save_stats->report_displacement(
                modloader::math::to_vec2(previous_position),
                new_position_vec2,
                SaveFileGameStats::DisplacementReason::Teleporter
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

            save_stats->report_displacement(
                modloader::math::to_vec2(previous_position), *new_position_after_portal_teleportation, SaveFileGameStats::DisplacementReason::Portal
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

        IL2CPP_INTERCEPT(void, GameController, RestartGame, app::GameController* this_ptr, bool select_saveslot) {
            GameStateMachine::SetToStartScreen(GameStateMachine::get_Instance());
            next::GameController::RestartGame(this_ptr, select_saveslot);
        }
    } // namespace

    nlohmann::json GameTrackerPersistentMetaData::json_serialize() {
        return *this;
    }

    void GameTrackerPersistentMetaData::json_deserialize(nlohmann::json& j) {
        j.get_to(*this);
    }

    common::Droppable::ptr_t scoped_disable_position_recording() {
        ++disable_position_recording_guards;
        return std::make_unique<common::Droppable>([]{ --disable_position_recording_guards; });
    }

    common::Droppable::ptr_t scoped_disable_ability_tracking() {
        ++disable_ability_tracking_guards;
        return std::make_unique<common::Droppable>([]{ --disable_ability_tracking_guards; });
    }

    nlohmann::json GameTrackerVolatileMetaData::json_serialize() {
        return *this;
    }

    void GameTrackerVolatileMetaData::json_deserialize(nlohmann::json& j) {
        j.get_to(*this);
    }

    void override_in_game_time(float in_game_time) {
        save_stats->in_game_time = in_game_time;
        queue_timer_state_report();
    }

    float get_in_game_time() { return save_stats->in_game_time; }
    void force_set_game_finished(bool value) {
        game_finished = value;
    }

    SaveFileGameStats& get_save_file_game_stats() {
        return *save_stats;
    }

    void track_custom_timeline_entry(const uint64_t id) {
        game_tracker_persistent_meta_data->active_custom_timeline_entries.insert(id);
        game_tracker_volatile_meta_data->active_custom_timeline_entries.insert(id);
    }

    void untrack_custom_timeline_entry(const uint64_t id) {
        game_tracker_persistent_meta_data->active_custom_timeline_entries.erase(id);
        game_tracker_volatile_meta_data->active_custom_timeline_entries.erase(id);
    }

    namespace {
        void check_tracked_custom_timeline_entries() {
            for (auto persistent_entry_id_it = game_tracker_persistent_meta_data->active_custom_timeline_entries.begin(); persistent_entry_id_it != game_tracker_persistent_meta_data->active_custom_timeline_entries.end();) {
                const auto persistent_entry_id = *persistent_entry_id_it;

                if (!game_tracker_volatile_meta_data->active_custom_timeline_entries.contains(persistent_entry_id)) {
                    persistent_entry_id_it = game_tracker_persistent_meta_data->active_custom_timeline_entries.erase(persistent_entry_id_it);

                    get_save_file_game_stats().add_timeline_end_entry(
                        persistent_entry_id,
                        SaveFileGameStats::TimelineEntryEvent::Type::Custom
                    );
                }

                ++persistent_entry_id_it;
            }
        }

        [[maybe_unused]]
        auto on_load = core::api::game::event_bus().register_handler(GameEvent::UberStateValueStoreLoaded, EventTiming::After, [](auto, auto) {
            check_tracked_custom_timeline_entries();
        });
    }
} // namespace randomizer::timing
