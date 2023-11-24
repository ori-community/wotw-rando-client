#include <Randomizer/features/wheel.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/online/network_monitor.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/legacy_parser/parser.h>
#include <Randomizer/location_data/parser.h>
#include <Randomizer/state_data/parser.h>
#include <Randomizer/text_processors/ability.h>
#include <Randomizer/text_processors/control.h>
#include <Randomizer/text_processors/legacy.h>
#include <Randomizer/text_processors/shard.h>
#include <Randomizer/text_processors/uber_state.h>
#include <Randomizer/timer.h>
#include <Randomizer/uber_states/uber_state_intercepts.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/core.h>
#include <Core/settings.h>

#include <Modloader/modloader.h>
#include <text_processors/seed.h>

#include <fstream>

namespace randomizer {
    namespace {
        location_data::LocationCollection randomizer_location_collection;
        std::vector<state_data::State> randomizer_state_data;
        seed::Seed randomizer_seed(randomizer_location_collection);
        seed::ReachCheckResult reach_check_result;
        online::NetworkClient client;
        online::MultiplayerUniverse universe;
        std::shared_ptr<core::text::CompositeTextProcessor> text_processor;

        online::NetworkMonitor monitor;
        core::dev::StatusDisplay status({
            .position = app::Vector3{ -1.4f, 0.2f, 0 },
            .margins = { -0.09f, -0.09f },
            .alignment = app::AlignmentMode__Enum::Left,
            .screen_position = core::api::messages::ScreenPosition::TopCenter,
        });

        bool reach_check_queued = false;
        bool reach_check_in_progress = false;

        void on_reach_check(seed::ReachCheckResult result) {
            reach_check_in_progress = false;
            reach_check_result = result;
            event_bus().trigger_event(RandomizerEvent::ReachCheck, EventTiming::After);
        }

        bool do_reach_check() {
            if (reach_check_in_progress && !core::api::game::in_game()) {
                return false;
            }

            reach_check_in_progress = true;
            event_bus().trigger_event(RandomizerEvent::ReachCheck, EventTiming::Before);
            seed::reach_check(on_reach_check);
            return true;
        }

        auto on_before_shutdown = core::api::game::event_bus().register_handler(GameEvent::Shutdown, EventTiming::Before, [](auto, auto) {
            server_disconnect();
        });

        auto on_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::Before, [](auto, auto) {
            if (reach_check_queued && do_reach_check()) {
                reach_check_queued = false;
            }

            const float delta_time = core::api::game::fixed_delta_time();
            monitor.update(delta_time);
            status.update(delta_time);
        });

        auto on_before_new_game_initialized = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::Before, [](auto, auto) {
            core::api::game::player::shard_slots() = 3;
        });

        std::vector<std::function<void()>> input_unlocked_callbacks;
        auto on_input_locked_handler = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
            if (!core::api::game::player::can_move()) {
                return;
            }

            for (auto const& callback : input_unlocked_callbacks) {
                callback();
            }

            input_unlocked_callbacks.clear();
        });

        auto on_after_new_game_initialized = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [](auto, auto) {
            queue_input_unlocked_callback([]() {
                randomizer_seed.grant(core::api::uber_states::UberState(UberStateGroup::GameState, 0), 0);
                randomizer_seed.grant(core::api::uber_states::UberState(UberStateGroup::GameState, 1), 0);
                core::api::game::save(true);
                queue_reach_check();
                uber_states::disable_reverts() = false;
            });

            core::message_controller().queue_central({
                .text = std::string("*Good Luck! <3*"),
                .prioritized = true,
            });
        });

        void seed_loaded() {
            timer::clear_uber_state_timers();
            universe.uber_state_handler().clear_unsyncables();
            features::wheel::clear_wheels();
            features::wheel::initialize_default_wheel();
            game::shops::reset_shop_data();
            randomizer_seed.grant(core::api::uber_states::UberState(UberStateGroup::GameState, 1), 0);
            queue_reach_check();
        }

        auto on_after_seed_load = randomizer::event_bus().register_handler(RandomizerEvent::SeedLoaded, EventTiming::After, [](auto, auto){ seed_loaded(); });
        auto on_finished_loading_save_handle = core::api::game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, [](auto, auto){ seed_loaded(); });

        auto on_uber_state_changed = core::api::uber_states::notification_bus().register_handler([](auto params) {
            randomizer_seed.grant(params.state, params.value);
        });

        void load_seed(bool show_message) {
            // TODO: Check if we need to download/receive the seed from the server.
            std::ifstream seed_name(modloader::base_path() / ".currentseedpath");
            if (seed_name.is_open()) {
                std::stringstream seed_name_buffer;
                seed_name_buffer << seed_name.rdbuf();
                randomizer_location_collection.read(modloader::base_path() / "loc_data.csv", location_data::parse_location_data);
                randomizer_state_data.clear();
                state_data::parse_state_data(modloader::base_path() / "state_data.csv", randomizer_state_data);
                randomizer_seed.read(seed_name_buffer.str(), seed::legacy_parser::parse, show_message);
            } else {
                randomizer_seed.reload(show_message);
            }
        }

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            monitor.display(&status);
            monitor.network_client(&client);

            universe.register_packet_handlers(client);

            // TODO: Don't just do this on game ready.
            modloader::cursor_lock(core::settings::cursor_locked());
            core::api::game::debug_controls(core::settings::start_debug_enabled());

            text_processor = std::make_shared<core::text::CompositeTextProcessor>();
            text_processor->compose(std::make_shared<text_processors::UberStateProcessor>());
            text_processor->compose(std::make_shared<text_processors::ControlProcessor>());
            text_processor->compose(std::make_shared<text_processors::AbilityProcessor>());
            text_processor->compose(std::make_shared<text_processors::ShardProcessor>());
            text_processor->compose(std::make_shared<text_processors::SeedProcessor>());
            text_processor->compose(std::make_shared<text_processors::LegacyProcessor>());

            core::message_controller().central_display().text_processor(text_processor);
            load_seed(false);
            if (!core::settings::netcode_disabled() && randomizer_seed.info().net_code_enabled) {
                server_connect();
            }
        });

        common::registration_handle on_title_screen_handler = core::api::scenes::single_event_bus().register_handler("wotwTitleScreen", [](auto, auto) {
            std::string flags;
            for (auto const& flag : randomizer_seed.info().flags) {
                if (flags.empty()) {
                    flags += "\nFlags: ";
                } else {
                    flags += ", ";
                }

                flags += flag;
            }

            std::string version = "0.0.0";
            std::ifstream version_file(modloader::base_path() / "VERSION");
            if (version_file.is_open()) {
                std::stringstream version_buffer;
                version_buffer << version_file.rdbuf();
                version = version_buffer.str();
            }

            core::message_controller().queue_central({
                .text = std::format("v{} - Loaded {}{}", version, randomizer_seed.info().name, flags),
                .show_box = true,
                .prioritized = true,
            });

            on_title_screen_handler = nullptr;
        });
    } // namespace

    void reload() {
        if (network_client().wants_connection()) {
            server_disconnect();
        }

        core::settings::reload();
        load_seed(true);
        if (!core::settings::netcode_disabled() && randomizer_seed.info().net_code_enabled) {
            server_connect();
        }
    }

    void queue_input_unlocked_callback(std::function<void()> const& callback) {
        input_unlocked_callbacks.push_back(callback);
    }

    void queue_reach_check() {
        if (!do_reach_check()) {
            reach_check_queued = true;
        }
    }

    void server_connect() {
        if (core::settings::netcode_disabled()) {
            return;
        }

        auto insecure = core::settings::insecure();
        auto host = core::settings::host();
        auto udp_port = core::settings::udp_port();

        std::string websocket_url = std::format("ws{}://{}/api/game_sync/", insecure ? "" : "s", host);
        client.websocket_connect(websocket_url);
        client.udp_open(host, udp_port);
    }

    void server_disconnect() {
        client.disconnect();
    }

    common::TimedMultiEventBus<RandomizerEvent>& event_bus() {
        static common::TimedMultiEventBus<RandomizerEvent> randomizer_event_bus;
        return randomizer_event_bus;
    }

    location_data::LocationCollection& location_collection() {
        return randomizer_location_collection;
    }

    std::vector<state_data::State>& state_collection() {
        return randomizer_state_data;
    }

    seed::Seed& game_seed() {
        return randomizer_seed;
    }

    seed::ReachCheckResult const& reach_check() {
        return reach_check_result;
    }

    online::NetworkClient& network_client() {
        return client;
    }

    online::MultiplayerUniverse& multiplayer_universe() {
        return universe;
    }

    std::shared_ptr<core::text::CompositeTextProcessor> general_text_processor() {
        return text_processor;
    }
} // namespace randomizer
