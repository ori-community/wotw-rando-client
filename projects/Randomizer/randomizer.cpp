#include <Core/api/game/debug_menu.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/game/ui.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/core.h>
#include <Core/settings.h>
#include <Modloader/app/methods/Game/UI_Hints.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/methods/TitleScreenManager.h>
#include <Modloader/app/types/GameController.h>
#include <Modloader/app/types/UI_Hints.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/wheel.h>
#include <Randomizer/game/pickups/quests.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/location_data/parser.h>
#include <Randomizer/online/network_monitor.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/legacy_parser/parser.h>
#include <Randomizer/state_data/parser.h>
#include <Randomizer/text_processors/ability.h>
#include <Randomizer/text_processors/control.h>
#include <Randomizer/text_processors/legacy.h>
#include <Randomizer/text_processors/multiplayer.h>
#include <Randomizer/text_processors/seed.h>
#include <Randomizer/text_processors/shard.h>
#include <Randomizer/text_processors/uber_state.h>
#include <Randomizer/timer.h>
#include <Randomizer/uber_states/uber_state_intercepts.h>
#include <fstream>
#include <utility>

#include "seed/seed_source.h"

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

        auto seed_save_data = std::make_shared<seed::SaveSlotSeedMetaData>();

        std::shared_ptr<seed::SeedSource> new_game_seed_source = std::make_shared<seed::EmptySeedSource>();
        std::string new_game_seed_content;  // Set by spawning_and_preloading.cpp

        bool reach_check_queued = false;
        bool reach_check_in_progress = false;

        std::optional<long> multiverse_id_to_connect_to = std::nullopt;

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
                randomizer_seed.grant(core::api::uber_states::UberState(UberStateGroup::RandoEvents, 0), 0);
                randomizer_seed.grant(core::api::uber_states::UberState(UberStateGroup::RandoEvents, 1), 0);
                core::api::game::save(true);
                queue_reach_check();
                uber_states::disable_reverts() = false;

                if (network_client().wants_connection()) {
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
            randomizer_seed.grant(core::api::uber_states::UberState(UberStateGroup::RandoEvents, 1), 0);
            queue_reach_check();
            event_bus().trigger_event(RandomizerEvent::SeedLoadedPostGrant, EventTiming::Before);
            event_bus().trigger_event(RandomizerEvent::SeedLoadedPostGrant, EventTiming::After);
        });

        void load_seed(const bool show_message) {
            event_bus().trigger_event(RandomizerEvent::LocationCollectionLoaded, EventTiming::Before);
            randomizer_location_collection.read(modloader::base_path() / "loc_data.csv", location_data::parse_location_data);
            event_bus().trigger_event(RandomizerEvent::LocationCollectionLoaded, EventTiming::After);

            randomizer_state_data.clear();
            parse_state_data(modloader::base_path() / "state_data.csv", randomizer_state_data);

            randomizer_seed.read(seed_save_data->seed_content, seed::legacy_parser::parse, show_message);
        }

        void load_new_game_source() {
            const std::ifstream seed_source_file(modloader::base_path() / ".newgameseedsource");

            if (seed_source_file.is_open()) {
                std::stringstream seed_path_buffer;
                seed_path_buffer << seed_source_file.rdbuf();
                const auto source_str = seed_path_buffer.str();

                event_bus().trigger_event(RandomizerEvent::NewGameSeedSourceUpdated, EventTiming::Before);
                new_game_seed_source = seed::parse_source_string(source_str);
                event_bus().trigger_event(RandomizerEvent::NewGameSeedSourceUpdated, EventTiming::After);
            }
        }

        auto on_before_new_game_initialized = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::Before, [](auto, auto) {
            seed_save_data->seed_source_string = new_game_seed_source->to_source_string();
            seed_save_data->seed_content = new_game_seed_content;
            load_seed(false);

            // Allow cheats in offline games
            if (!seed_save_data->get_source()->get_multiverse_id().has_value()) {
                core::api::game::debug_menu::set_should_prevent_cheats(false);
            }

            core::api::game::player::shard_slots().set(3);
        });

        auto on_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::Before, [](auto, auto) {
            if (reach_check_queued && do_reach_check()) {
                reach_check_queued = false;
            }

            const float delta_time = core::api::game::fixed_delta_time();
            monitor.update(delta_time);
            status.update(delta_time);
        });

        auto on_finished_loading_save_handle = core::api::game::event_bus().register_handler(
            GameEvent::FinishedLoadingSave,
            EventTiming::After,
            [](auto, auto) {
                load_seed(false);
            }
        );

        auto on_restore_checkpoint = core::api::game::event_bus().register_handler(GameEvent::RestoreCheckpoint, EventTiming::After, [](auto, auto) {
            randomizer_seed.grant(core::api::uber_states::UberState(UberStateGroup::RandoEvents, 7), 0);
        });

        auto on_uber_state_changed = core::api::uber_states::notification_bus().register_handler([](auto params) {
            randomizer_seed.grant(params.state, params.previous_value);
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
            text_processor->compose(std::make_shared<text_processors::SeedProcessor>());
            text_processor->compose(std::make_shared<text_processors::LegacyProcessor>());
            text_processor->compose(std::make_shared<text_processors::MultiplayerProcessor>());

            core::message_controller().central_display().text_processor(text_processor);
            seed_save_data = std::make_unique<seed::SaveSlotSeedMetaData>();
            register_slot(SaveMetaSlot::SeedMetaData, SaveMetaSlotPersistence::None, seed_save_data);

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

    void full_reload() {
        if (network_client().wants_connection()) {
            server_disconnect();
        }

        core::settings::reload();
        load_new_game_source();

        if (!TitleScreenManager::get_MainMenuActive()) {
            load_seed(true);
        }

        const auto connect_to_multiverse_id = seed_save_data->get_source()->get_multiverse_id();
        if (connect_to_multiverse_id.has_value()) {
            server_connect(*connect_to_multiverse_id);
        }
    }

    void queue_input_unlocked_callback(std::function<void()> const& callback) { input_unlocked_callbacks.push_back(callback); }

    void queue_reach_check() {
        if (!do_reach_check()) {
            reach_check_queued = true;
        }
    }

    void server_reconnect(long multiverse_id) {
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

    void server_connect(long multiverse_id) {
        // Don't try to connect if we are already connected to the target multiverse
        if (network_client().wants_connection() && multiverse_id_to_connect_to.has_value() && *multiverse_id_to_connect_to == multiverse_id) {
            return;
        }

        server_reconnect(multiverse_id);
    }

    void server_disconnect() {
        client.disconnect();
        multiverse_id_to_connect_to = std::nullopt;
        seed::set_server_seed_content(std::nullopt);
    }

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
    std::shared_ptr<seed::SeedSource> get_new_game_seed_source() { return new_game_seed_source; }

    void set_new_game_seed_content(const std::string& content) {
        new_game_seed_content = content;
    }
} // namespace randomizer
