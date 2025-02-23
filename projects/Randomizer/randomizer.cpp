#include <Core/api/game/debug_menu.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/core.h>
#include <Core/settings.h>
#include <Modloader/app/methods/Game/UI_Hints.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/types/GameController.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/wheel.h>
#include <Randomizer/game/pickups/quests.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/location_data/parser.h>
#include <Randomizer/online/network_monitor.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/parser.h>
#include <Randomizer/text_processors/ability.h>
#include <Randomizer/text_processors/action.h>
#include <Randomizer/text_processors/control.h>
#include <Randomizer/text_processors/legacy.h>
#include <Randomizer/text_processors/multiplayer.h>
#include <Randomizer/text_processors/shard.h>
#include <Randomizer/text_processors/uber_state.h>
#include <Randomizer/uber_states/uber_state_intercepts.h>
#include <fstream>
#include <utility>

#include "seed/seed_source.h"

namespace randomizer {
    namespace {
        location_data::LocationCollection randomizer_location_collection;
        seed::Seed randomizer_seed(randomizer_location_collection);
        seedgen_interop::ReachCheckResult reach_check_result;
        online::NetworkClient client;
        online::MultiplayerUniverse universe;
        std::shared_ptr<core::text::CompositeTextProcessor> text_processor;

        online::NetworkMonitor monitor;
        core::dev::StatusDisplay status({
            .position = app::Vector3{0.2f, -0.2f, 0},
            .margins = {-0.09f, -0.09f},
            .alignment = app::AlignmentMode__Enum::Left,
            .horizontal_anchor = app::HorizontalAnchorMode__Enum::Left,
            .vertical_anchor = app::VerticalAnchorMode__Enum::Top,
            .screen_position = core::api::screen_position::ScreenPosition::TopLeft,
        });

        auto seed_meta_save_data = std::make_shared<seed::SaveSlotSeedMetaData>();
        auto seed_archive_save_data = std::make_shared<seed::SeedArchiveSaveMetaData>();

        std::shared_ptr<seed::SeedSource> new_game_seed_source = std::make_shared<seed::InvalidSeedSource>("empty");
        std::shared_ptr<seed::SeedArchive> new_game_seed_archive;  // Set by spawning_and_preloading.cpp

        bool reach_check_queued = false;
        bool reach_check_in_progress = false;
        bool pause_timer = false;

        std::optional<long> multiverse_id_to_connect_to = std::nullopt;

        void on_reach_check(const std::optional<seedgen_interop::ReachCheckResult>& result) {
            reach_check_in_progress = false;

            if (result.has_value()) {
                if (!reach_check_result.is_same_as(*result)) {
                    event_bus().trigger_event(RandomizerEvent::ReachableItemsChanged, EventTiming::Before);
                    reach_check_result = *result;
                    event_bus().trigger_event(RandomizerEvent::ReachableItemsChanged, EventTiming::After);
                }

                event_bus().trigger_event(RandomizerEvent::ReachCheck, EventTiming::After);
            }
        }

        bool do_reach_check() {
            if (reach_check_in_progress || !core::api::game::in_game()) {
                return false;
            }

            reach_check_in_progress = true;
            event_bus().trigger_event(RandomizerEvent::ReachCheck, EventTiming::Before);
            seedgen_interop::reach_check(on_reach_check);
            return true;
        }

        auto on_before_shutdown = core::api::game::event_bus().register_handler(GameEvent::Shutdown, EventTiming::Before, [](auto, auto) {
            server_disconnect();
        });

        std::vector<std::function<void()>> input_unlocked_callbacks;
        auto on_input_locked_handler = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
            if (!core::api::game::player::can_move()) {
                return;
            }

            for (auto const& callback: input_unlocked_callbacks) {
                callback();
            }

            input_unlocked_callbacks.clear();
        });

        auto on_after_new_game_initialized = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [](auto, auto) {
            core::message_controller().clear_recent_messages();

            queue_input_unlocked_callback([]() {
                pause_timer = false;
                randomizer_seed.trigger(seed::SeedClientEvent::Spawn);
                randomizer_seed.trigger(seed::SeedClientEvent::Reload);
                core::api::game::save(true);
                queue_reach_check();
                uber_states::disable_reverts() = false;

                if (network_client().wants_connection()) {
                    multiplayer_universe().report_player_save_guid(core::save_meta::get_current_save_guid());
                }
            });

            game::pickups::quests::clear_queued_quest_messages_on_next_update();
        });

        auto on_respawn = core::api::game::event_bus().register_handler(GameEvent::Respawn, EventTiming::After, [](auto, auto) {
            core::message_controller().clear_central();
            game_seed().trigger(seed::SeedClientEvent::Respawn);
            queue_reach_check();
        });

        auto on_before_seed_loaded = randomizer::event_bus().register_handler(randomizer::RandomizerEvent::SeedLoaded, EventTiming::Before, [](auto, auto) {
            core::text::reset_to_default_values();
        });

        auto on_after_seed_loaded = event_bus().register_handler(RandomizerEvent::SeedLoaded, EventTiming::After, [](auto, auto) {
            universe.uber_state_handler().clear_unsyncables();
            features::wheel::clear_wheels();
            features::wheel::initialize_default_wheel();
            game::shops::reset_shop_data();
            randomizer_seed.trigger(seed::SeedClientEvent::Reload);
            seedgen_interop::request_states_update_on_next_reach_check();
            queue_reach_check();
            event_bus().trigger_event(RandomizerEvent::SeedLoadedPostGrant, EventTiming::Before);
            event_bus().trigger_event(RandomizerEvent::SeedLoadedPostGrant, EventTiming::After);
        });

        void load_seed(const bool show_message) {
            event_bus().trigger_event(RandomizerEvent::LocationCollectionLoaded, EventTiming::Before);
            randomizer_location_collection.read(modloader::base_path() / "loc_data.csv", location_data::parse_location_data);
            event_bus().trigger_event(RandomizerEvent::LocationCollectionLoaded, EventTiming::After);

            randomizer_seed.read(seed_archive_save_data->seed_archive, seed::parse, show_message);
        }

        auto on_before_new_game_initialized = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::Before, [](auto, auto) {
            pause_timer = true;

            seed_meta_save_data->seed_source_string = new_game_seed_source->to_source_string();
            seed_archive_save_data->seed_archive = new_game_seed_archive;
            load_seed(false);

            // Allow cheats in offline games and clear GUID restrictions
            if (!seed_meta_save_data->get_source()->get_multiverse_id().has_value()) {
                core::api::game::debug_menu::set_should_prevent_cheats(false);
                multiplayer_universe().set_restrict_to_save_guid(std::nullopt);
            }

            core::api::game::player::shard_slots().set(3);

            game_seed().trigger(seed::SeedClientEvent::Spawn);
        });

        auto on_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::Before, [](auto, auto) {
            if (reach_check_queued && do_reach_check()) {
                reach_check_queued = false;
            }

            const float delta_time = core::api::game::fixed_delta_time();
            monitor.update(delta_time);
            status.update(delta_time);

            game_seed().trigger(seed::SeedClientEvent::Tick);
            game_seed().process_timers(delta_time);
        });

        auto on_finished_loading_save_handle = core::api::game::event_bus().register_handler(
            GameEvent::FinishedLoadingSave,
            EventTiming::After,
            [](auto, auto) {
                load_seed(false);
                queue_reach_check();
                check_seed_difficulty_enforcement();
            }
        );

        auto on_restore_checkpoint = core::api::game::event_bus().register_handler(GameEvent::RestoreCheckpoint, EventTiming::After, [](auto, auto) {
            check_seed_difficulty_enforcement();
            randomizer_seed.trigger(seed::SeedClientEvent::Respawn);
            queue_reach_check();
        });

        auto on_teleport = core::api::game::event_bus().register_handler(GameEvent::Teleport, EventTiming::Before, [](auto, auto) {
            game_seed().trigger(seed::SeedClientEvent::Teleport);
        });

        const std::unordered_set<core::api::uber_states::UberState> TELEPORTER_UBER_STATES{
            { core::api::uber_states::UberState(21786, 10185) },
            { core::api::uber_states::UberState(11666, 61594) },
            { core::api::uber_states::UberState(53632, 18181) },
            { core::api::uber_states::UberState(24922, 42531) },
            { core::api::uber_states::UberState(937, 26601) },
            { core::api::uber_states::UberState(42178, 42096) },
            { core::api::uber_states::UberState(28895, 54235) },
            { core::api::uber_states::UberState(18793, 38871) },
            { core::api::uber_states::UberState(945, 58183) },
            { core::api::uber_states::UberState(945, 1370) },
            { core::api::uber_states::UberState(58674, 7071) },
            { core::api::uber_states::UberState(58674, 1965) },
            { core::api::uber_states::UberState(58674, 10029) },
            { core::api::uber_states::UberState(20120, 49994) },
            { core::api::uber_states::UberState(20120, 41398) },
            { core::api::uber_states::UberState(10289, 4928) },
            { core::api::uber_states::UberState(16155, 41465) },
            { core::api::uber_states::UberState(16155, 50867) },
        };

        auto on_uber_state_changed = core::api::uber_states::notification_bus().register_handler([](auto params) {
            if (TELEPORTER_UBER_STATES.contains(params.state)) {
                queue_reach_check();
            }
        });

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            monitor.display(&status);
            monitor.network_client(&client);

            universe.register_packet_handlers(client);

            // TODO: Don't just do this on game ready.
            modloader::cursor_lock(core::settings::cursor_locked());

            text_processor = std::make_shared<core::text::CompositeTextProcessor>();
            text_processor->compose(std::make_shared<text_processors::UberStateProcessor>());
            text_processor->compose(std::make_shared<text_processors::ControlProcessor>());
            text_processor->compose(std::make_shared<text_processors::AbilityProcessor>());
            text_processor->compose(std::make_shared<text_processors::ActionProcessor>());
            text_processor->compose(std::make_shared<text_processors::ShardProcessor>());
            text_processor->compose(std::make_shared<text_processors::LegacyProcessor>());
            text_processor->compose(std::make_shared<text_processors::MultiplayerProcessor>());

            core::message_controller().central_display().text_processor(text_processor);
            core::message_controller().recent_display().text_processor(text_processor);
            seed_meta_save_data = std::make_unique<seed::SaveSlotSeedMetaData>();

            register_slot(SaveMetaSlot::SeedMetaData, SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups, seed_meta_save_data);
            register_slot(SaveMetaSlot::SeedArchiveData, SaveMetaSlotPersistence::ThroughDeathsAndQTMsAndBackups, seed_archive_save_data);

            load_new_game_source();
        });

        IL2CPP_INTERCEPT(GameController, void, ParseCommandLineArgs, (app::GameController * this_ptr)) {
            next::GameController::ParseCommandLineArgs(this_ptr);
            core::api::game::debug_menu::set_debug_enabled(core::settings::start_debug_enabled());
        }

        auto on_title_screen_loaded = core::api::scenes::single_event_bus().register_handler("wotwTitleScreen", [](const auto meta_data, auto) {
            if (meta_data->state == app::SceneState__Enum::Loaded) {
                randomizer_seed.clear();
            }
        });

        auto on_modloader_injection_complete = modloader::event_bus().register_handler(ModloaderEvent::InjectionComplete, [](auto) {
            core::api::graphics::textures::register_custom_protocol("bundle", [](const std::string& path) -> app::Texture2D* {
                if (seed_archive_save_data->seed_archive == nullptr) {
                    return nullptr;
                }

                return seed_archive_save_data->seed_archive->get_asset_texture(path);
            });
        });
    } // namespace

    bool timer_should_pause() {
        return pause_timer;
    }

    void load_new_game_source() {
        std::ifstream seed_source_file(modloader::base_path() / ".newgameseedsource", std::ios::binary);

        if (seed_source_file.is_open()) {
            std::string source_str{std::istreambuf_iterator(seed_source_file),
                                   std::istreambuf_iterator<char>()};

            event_bus().trigger_event(RandomizerEvent::NewGameSeedSourceUpdated, EventTiming::Before);
            new_game_seed_source = seed::parse_source_string(source_str);
            event_bus().trigger_event(RandomizerEvent::NewGameSeedSourceUpdated, EventTiming::After);
        }
    }

    semver::version randomizer_version() {
        semver::version version = semver::from_string("0.0.0");
        const std::ifstream version_file(modloader::base_path() / "VERSION");
        if (version_file.is_open()) {
            std::stringstream version_buffer;
            version_buffer << version_file.rdbuf();
            const auto parsed = semver::from_string_noexcept(trim_copy(version_buffer.str()));

            if (parsed.has_value()) {
                version = parsed.value();
            }
        }

        return version;
    }

    void queue_input_unlocked_callback(std::function<void()> const& callback) { input_unlocked_callbacks.push_back(callback); }

    void queue_reach_check() {
        if (!do_reach_check()) {
            reach_check_queued = true;
        }
    }

    void reread_seed_source() {
        const auto current_source = seed_meta_save_data->get_source();

        if (!current_source->allows_rereading()) {
            core::message_controller().queue_central({
                .text = core::Property<std::string>::format("Cannot re-read this seed."),
                .show_box = true,
                .prioritized = true,
            });
            return;
        }

        const auto [status, seed_archive] = current_source->poll();

        switch (status) {
            case seed::SourceStatus::Ready:
                seed_archive_save_data->seed_archive = *seed_archive;
                load_seed(true);
                break;
            case seed::SourceStatus::Loading:
                core::message_controller().queue_central({
                    .text = core::Property<std::string>::format("The seed source is still loading. Please try again later..."),
                    .show_box = true,
                    .prioritized = true,
                });
                break;
            case seed::SourceStatus::Error:
                core::message_controller().queue_central({
                    .text = core::Property<std::string>::format("Error reading seed source: {}", current_source->get_error().value()),
                    .show_box = true,
                    .prioritized = true,
                });
                break;
        }
    }

    void server_reconnect_current_multiverse() {
        if (!multiverse_id_to_connect_to.has_value()) {
            if (network_client().wants_connection()) {
                server_disconnect();
            }

            return;
        }

        server_connect(*multiverse_id_to_connect_to, true);
    }

    void server_connect(long multiverse_id, bool force_reconnect) {
        // Don't try to connect if we are already connected to the target multiverse
        if (
            !force_reconnect &&
            network_client().wants_connection() &&
            multiverse_id_to_connect_to.has_value() &&
            *multiverse_id_to_connect_to == multiverse_id
            ) {
            return;
        }

        if (network_client().wants_connection()) {
            server_disconnect();
        }

        const auto insecure = core::settings::insecure();
        const auto host = core::settings::host();
        const auto udp_port = core::settings::udp_port();
        multiverse_id_to_connect_to = multiverse_id;

        const std::string websocket_url = std::format("{}://{}/api/client-websocket/{}/wotw", insecure ? "ws" : "wss", host, multiverse_id);
        client.websocket_connect(websocket_url);
        client.udp_open(host, udp_port);
    }

    void server_disconnect() {
        client.disconnect();
        multiverse_id_to_connect_to = std::nullopt;
        seed::set_server_seed_archive(std::nullopt);
    }

    void check_seed_difficulty_enforcement() {
        const auto game_difficulties = [&]() -> seed::GameDifficultySettings {
            if (multiplayer_universe().game_difficulty_settings_overrides().has_value()) {
                return *multiplayer_universe().game_difficulty_settings_overrides();
            }

            return game_seed().parser_output().meta.game_difficulties;
        }();

        const auto game_controller = core::api::game::game_controller();
        const auto current_difficulty = GameController::get_GameDifficultyMode(game_controller);

        if (game_difficulties.get_for_game_difficulty(current_difficulty) == seed::GameDifficultySetting::Deny) {
            auto lowest_allowed_difficulty = game_difficulties.get_lowest_allowed_difficulty();
            if (lowest_allowed_difficulty.has_value()) {
                GameController::set_GameDifficultyMode(game_controller, *lowest_allowed_difficulty);
            }
        }
    }

    common::TimedMultiEventBus<RandomizerEvent>& event_bus() {
        static common::TimedMultiEventBus<RandomizerEvent> randomizer_event_bus;
        return randomizer_event_bus;
    }

    location_data::LocationCollection& location_collection() { return randomizer_location_collection; }

    seed::Seed& game_seed() { return randomizer_seed; }

    seedgen_interop::ReachCheckResult const& reach_check() { return reach_check_result; }

    online::NetworkClient& network_client() { return client; }

    online::MultiplayerUniverse& multiplayer_universe() { return universe; }

    std::shared_ptr<core::text::CompositeTextProcessor> general_text_processor() { return text_processor; }
    std::shared_ptr<seed::SeedSource> get_new_game_seed_source() { return new_game_seed_source; }

    void set_new_game_seed_archive(const std::shared_ptr<seed::SeedArchive>& archive) { new_game_seed_archive = archive; }
    std::optional<long> get_multiverse_id() { return multiverse_id_to_connect_to; }
} // namespace randomizer
