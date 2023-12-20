#include <Core/api/game/debug_menu.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/core.h>
#include <Core/settings.h>
#include <Modloader/app/methods/Game/UI_Hints.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/TitleScreenManager.h>
#include <Modloader/app/types/GameController.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/wheel.h>
#include <Randomizer/game/pickups/quests.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/location_data/parser.h>
#include <Randomizer/online/network_monitor.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/parser.h>
#include <Randomizer/state_data/parser.h>
#include <Randomizer/text_processors/ability.h>
#include <Randomizer/text_processors/control.h>
#include <Randomizer/text_processors/legacy.h>
#include <Randomizer/text_processors/multiplayer.h>
#include <Randomizer/text_processors/shard.h>
#include <Randomizer/text_processors/uber_state.h>
#include <Randomizer/timer.h>
#include <Randomizer/uber_states/uber_state_intercepts.h>
#include <fstream>
#include <utility>

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
            .position = app::Vector3{-1.4f, 0.2f, 0},
            .margins = {-0.09f, -0.09f},
            .alignment = app::AlignmentMode__Enum::Left,
            .screen_position = core::api::messages::ScreenPosition::TopCenter,
        });

        std::shared_ptr<seed::SaveSlotSeedMetaData> seed_save_data;

        bool reach_check_queued = false;
        bool reach_check_in_progress = false;

        void on_reach_check(const std::optional<seed::ReachCheckResult>& result) {
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
            core::api::game::player::shard_slots().set(3);
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
            queue_input_unlocked_callback([]() {
                randomizer_seed.trigger(seed::SeedEvent::Spawn);
                randomizer_seed.trigger(seed::SeedEvent::Reload);
                core::api::game::save(true);
                queue_reach_check();
                uber_states::disable_reverts() = false;

                if (randomizer_seed.parser_output().meta.online) {
                    multiplayer_universe().report_player_save_guid(core::save_meta::get_current_save_guid());
                }
            });

            Game::UI_Hints::Show(
                core::api::system::create_message_provider("*Good Luck! <3*"), app::HintLayer__Enum::Gameplay, 3.f, app::Vector3{0.f, 0.f, 0.f}
            );


            game::pickups::quests::clear_queued_quest_messages_on_next_update();
        });

        auto on_respawn = core::api::game::event_bus().register_handler(GameEvent::Respawn, EventTiming::After, [](auto, auto) {
            core::message_controller().clear_central();
        });

        auto on_after_seed_load = event_bus().register_handler(RandomizerEvent::SeedLoaded, EventTiming::After, [](auto, auto) {
            timer::clear_uber_state_timers();
            universe.uber_state_handler().clear_unsyncables();
            features::wheel::clear_wheels();
            features::wheel::initialize_default_wheel();
            game::shops::reset_shop_data();
            randomizer_seed.trigger(seed::SeedEvent::Reload);
            queue_reach_check();
            event_bus().trigger_event(RandomizerEvent::SeedLoadedPostGrant, EventTiming::Before);
            event_bus().trigger_event(RandomizerEvent::SeedLoadedPostGrant, EventTiming::After);
        });

        void load_seed(const bool read_seed_name, const bool show_message) {
            // TODO: Check if we need to download/receive the seed from the server.
            event_bus().trigger_event(RandomizerEvent::LocationCollectionLoaded, EventTiming::Before);
            randomizer_location_collection.read(modloader::base_path() / "loc_data.csv", location_data::parse_location_data);
            event_bus().trigger_event(RandomizerEvent::LocationCollectionLoaded, EventTiming::After);

            randomizer_state_data.clear();
            parse_state_data(modloader::base_path() / "state_data.csv", randomizer_state_data);

            if (read_seed_name) {
                const std::ifstream seed_path_file(modloader::base_path() / ".currentseedpath");
                if (seed_path_file.is_open()) {
                    std::stringstream seed_path_buffer;
                    seed_path_buffer << seed_path_file.rdbuf();
                    seed_save_data->path = seed_path_buffer.str();
                }
            }

            randomizer_seed.read(seed_save_data->path, seed::parse, show_message);
        }

        auto on_finished_loading_save_handle = core::api::game::event_bus().register_handler(
            GameEvent::FinishedLoadingSave,
            EventTiming::After,
            [](auto, auto) { load_seed(false, false); }
        );

        auto on_restore_checkpoint = core::api::game::event_bus().register_handler(GameEvent::RestoreCheckpoint, EventTiming::After, [](auto, auto) {
            randomizer_seed.trigger(seed::SeedEvent::Respawn);
        });

        auto on_uber_state_changed = core::api::uber_states::notification_bus().register_handler([](auto params) {
            randomizer_seed.on_state_changed(params.state);
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
            text_processor->compose(std::make_shared<text_processors::ShardProcessor>());
            text_processor->compose(std::make_shared<text_processors::LegacyProcessor>());
            text_processor->compose(std::make_shared<text_processors::MultiplayerProcessor>());

            core::message_controller().central_display().text_processor(text_processor);
            seed_save_data = std::make_unique<seed::SaveSlotSeedMetaData>();
            register_slot(SaveMetaSlot::SeedMetaData, SaveMetaSlotPersistence::None, seed_save_data);
            load_seed(true, false);
            if (!core::settings::netcode_disabled() && randomizer_seed.parser_output().meta.online) {
                server_connect();
            }
        });

        IL2CPP_INTERCEPT(GameController, void, ParseCommandLineArgs, (app::GameController * this_ptr)) {
            next::GameController::ParseCommandLineArgs(this_ptr);
            core::api::game::debug_menu::set_debug_enabled(core::settings::start_debug_enabled());
        }

        auto on_title_screen_loaded = core::api::scenes::single_event_bus().register_handler("wotwTitleScreen", [](const auto meta_data, auto) {
            if (meta_data->state == app::SceneState__Enum::Loaded) {
                load_seed(true, false);
            }
        });
    } // namespace

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

    void reload() {
        if (network_client().wants_connection()) {
            server_disconnect();
        }

        core::settings::reload();
        load_seed(TitleScreenManager::get_MainMenuActive(), true);
        if (!core::settings::netcode_disabled() && randomizer_seed.parser_output().meta.online) {
            server_connect();
        }
    }

    void queue_input_unlocked_callback(std::function<void()> const& callback) { input_unlocked_callbacks.push_back(callback); }

    void queue_reach_check() {
        if (!do_reach_check()) {
            reach_check_queued = true;
        }
    }

    void server_reconnect() {
        if (network_client().wants_connection()) {
            server_disconnect();
        }

        if (core::settings::netcode_disabled()) {
            return;
        }

        const auto insecure = core::settings::insecure();
        const auto host = core::settings::host();
        const auto udp_port = core::settings::udp_port();

        const std::string websocket_url = std::format("{}://{}/api/client-websocket/wotw", insecure ? "ws" : "wss", host);
        client.websocket_connect(websocket_url);
        client.udp_open(host, udp_port);
    }

    void server_connect() {
        if (core::settings::netcode_disabled() || network_client().wants_connection()) {
            return;
        }

        server_reconnect();
    }

    void server_disconnect() { client.disconnect(); }

    common::TimedMultiEventBus<RandomizerEvent>& event_bus() {
        static common::TimedMultiEventBus<RandomizerEvent> randomizer_event_bus;
        return randomizer_event_bus;
    }

    location_data::LocationCollection& location_collection() { return randomizer_location_collection; }

    std::vector<state_data::State>& state_collection() { return randomizer_state_data; }

    seed::Seed& game_seed() { return randomizer_seed; }

    seed::ReachCheckResult const& reach_check() { return reach_check_result; }

    online::NetworkClient& network_client() { return client; }

    online::MultiplayerUniverse& multiplayer_universe() { return universe; }

    std::shared_ptr<core::text::CompositeTextProcessor> general_text_processor() { return text_processor; }
} // namespace randomizer
