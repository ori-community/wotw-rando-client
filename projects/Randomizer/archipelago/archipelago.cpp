#include <Common/ext.h>
#include <Common/vx.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/api/game/death_listener.h>
#include <Core/core.h>
#include <Core/events/task.h>
#include <Core/utils/json_serializers.h>
#include <Modloader/modloader.h>
#include <Randomizer/archipelago/archipelago.h>
#include <Randomizer/archipelago/archipelago_ids.h>
#include <Randomizer/archipelago/archipelago_protocol.h>
#include <Randomizer/archipelago/archipelago_save_meta.h>
#include <Randomizer/location_data/location.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/seed/items/value_modifier.h>
#include <Randomizer/features/wheel.h>

#define UUID_SYSTEM_GENERATOR
#include <uuid.h>

constexpr int MIN_AP_VERSION = 1;  // Minimum AP World version required
constexpr int MAX_PLAYERS_TO_SHOW_JOIN_LEAVE_MESSAGES = 5;
constexpr int FLAG_PROGRESSION = 0b001;
constexpr int FLAG_USEFUL = 0b010;
constexpr int FLAG_TRAP = 0b100;

namespace randomizer::archipelago {
    const std::string UNKNOWN_ITEM_TEXT = "@Unknown Item@";

    auto archipelago_save_data = std::make_shared<ArchipelagoSaveData>();

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        core::save_meta::register_slot(SaveMetaSlot::ArchipelagoData, SaveMetaSlotPersistence::None, archipelago_save_data);
    });

    // On game completion
    [[maybe_unused]]
    auto uber_state_bus_handle = core::api::uber_states::single_notification_bus().register_handler(
        core::api::uber_states::UberState(34543, 11226),
        [](const core::api::uber_states::UberStateCallbackParams& params, auto) {
            if (params.state.get<bool>()) {
                archipelago_client().notify_game_finished();
            }
        }
    );

    // On location checked
    [[maybe_unused]]
    auto on_uber_state_changed = core::api::uber_states::notification_bus().register_handler([](auto params) {
        if (!archipelago_client().is_active()) {
            return;
        }

        const auto locations_on_state = location_collection().locations_on_state(params.state);
        for (const auto& location: locations_on_state) {
            // If we just collected this location, ...
            if (!location.condition.resolve(params.previous_value) && location.condition.resolve(params.value)) {
                // ...notify the AP client.
                archipelago_client().notify_location_collected(location);
            }
        }
    });

    // Resync items
    [[maybe_unused]]
    auto on_new_game = core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [](auto, auto) {
        archipelago_save_data->last_item_index = 0;
        archipelago_client().request_sync();
    });

    [[maybe_unused]]
    auto on_restore_checkpoint = core::api::game::event_bus().register_handler(GameEvent::RestoreCheckpoint, EventTiming::After, [](auto, auto) {
        if (archipelago_client().is_active()) {
            archipelago_client().request_sync();
            modloader::debug("archipelago", "Resync requested: Restore Checkpoint");
        }
    });

    [[maybe_unused]]
    auto on_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        archipelago_client().handle_queued_server_messages();
    });

    [[maybe_unused]]
    auto on_death = core::api::death_listener::player_death_event_bus().register_handler(
        EventTiming::Before,
        [](auto, auto) {
            archipelago_client().handle_deathlink();
        }
    );

    [[maybe_unused]]
    auto on_save_loaded = core::api::game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, [](auto, auto) {
        archipelago_client().compare_seed();
    });

    [[maybe_unused]]
    auto on_save_creation = core::api::game::event_bus().register_handler(GameEvent::CreateSave, EventTiming::After, [](auto, auto) {
        archipelago_client().compare_seed();
    });

    [[maybe_unused]]
    auto on_quit_to_menu = core::api::game::event_bus().register_handler(GameEvent::TitleScreenStartup, EventTiming::After, [](auto, auto) {
        core::events::schedule_task_for_next_update([] {
            archipelago_client().disconnect();
            archipelago_client().reset_variables();
        });
    });

    ArchipelagoClient::ArchipelagoClient() {
        m_websocket.setOnMessageCallback([this](const auto& msg) { on_websocket_message(msg); });
    }

    void ArchipelagoClient::connect(const std::string_view url, const std::string_view slot_name, const std::string_view password) {
        m_slot_name = slot_name;
        m_password = password;
        m_websocket.stop();
        m_websocket.setUrl(std::string(url));
        m_websocket.setPingInterval(30);
        m_websocket.enablePerMessageDeflate();
        m_websocket.disableAutomaticReconnection();
        m_websocket.start();
        m_is_active = true;
        modloader::debug("archipelago", "AP client connected.");
    }

    void ArchipelagoClient::disconnect() {
        m_scouted_locations.clear();
        m_shop_icons.clear();
        m_current_seed_generator = std::nullopt;
        m_is_active = false;
        m_websocket.stop();
        modloader::debug("archipelago", "AP client disconnected.");
    }

    bool ArchipelagoClient::is_connected() const { return m_websocket.getReadyState() == ix::ReadyState::Open; }

    void ArchipelagoClient::reset_variables() {
        m_first_connection_attempt = true;
        m_slot_name = "";
        m_slot_id = 0;
        m_password = "";
        m_pending_send_locations.clear();
        m_pending_collect_locations.clear();
        m_slots.clear();
        m_player_map.clear();
        m_shop_icons.clear();
        m_scouted_locations.clear();
        m_queued_server_messages.clear();
        // No need to clear m_data_package, it doesn't contain info from a specific AP game
        m_current_seed_generator = std::nullopt;
        m_event_bus.clear();
        m_ap_seed = "";
        m_checked_seed = false;
        m_deathlink_enabled = false;
        m_deathlink_max_lives = 1;
        m_deathlink_lives = 1;
        m_death_from_deathlink = false;
        m_hint_points = 0;
        m_hint_points_per_pickup = 0;
        m_hint_cost = 0;

        modloader::info("archipelago", "AP client got reset");
    }

    // TODO upgrades
    // TODO Fix, doesn't work well with SL
    // Reset inventory and the last item index.
    void ArchipelagoClient::reset_inventory() {
        if (!m_checked_seed) {
            return;
        }
        const auto& spirit_light = core::api::game::player::spirit_light();
        const auto& spirit_light_collected = core::api::uber_states::UberState(UberStateGroup::RandoStats, 3);
        spirit_light.set(spirit_light.get() - archipelago_save_data->received_sl);
        spirit_light_collected.set<int>(spirit_light_collected.get<int>() - archipelago_save_data->received_sl);

        const auto& gorlek_ore = core::api::game::player::ore();
        const auto& gorlek_ore_collected = core::api::uber_states::UberState(UberStateGroup::RandoStats, 5);
        gorlek_ore.set(gorlek_ore.get() - archipelago_save_data->received_ore);
        gorlek_ore_collected.set<int>(gorlek_ore_collected.get<int>() - archipelago_save_data->received_ore);

        const auto& keystone = core::api::game::player::keystones();
        const auto& keystone_collected = core::api::uber_states::UberState(UberStateGroup::RandoStats, 0);
        keystone.set(keystone.get() - archipelago_save_data->received_ks);
        keystone_collected.set<int>(keystone_collected.get<int>() - archipelago_save_data->received_ks);

        core::api::game::player::shard_slots().set(3);

        core::api::game::player::max_health().set(30);

        core::api::game::player::max_energy().set(3.0f);

        archipelago_save_data->received_ks = 0;
        archipelago_save_data->received_ore = 0;
        archipelago_save_data->received_sl = 0;
        archipelago_save_data->last_item_index = 0;

        request_sync();
    }

    void ArchipelagoClient::toggle_deathlink() {
        if (m_deathlink_enabled) {
            m_deathlink_enabled = false;
            send_message(messages::ConnectUpdate{0b111, {"AP"}});
            core::message_controller().queue_central({
                .text = core::Property<std::string>("Deathlink disabled"),
                .prioritized = true,
            });
        } else {
            m_deathlink_enabled = true;
            m_death_from_deathlink = false;
            send_message(messages::ConnectUpdate{0b111, {"AP", "DeathLink"}});
            core::message_controller().queue_central({
                .text = core::Property<std::string>("Deathlink enabled"),
                .prioritized = true,
            });
        }
    }

    void ArchipelagoClient::initialize_ap_wheel() {
        features::wheel::initialize_item(0, 10, "Archipelago Actions", "Contains archipelago options", "file:assets/icons/archipelago/ap-normal.blue.png",
            [](auto, auto, auto) {
                features::wheel::set_active_wheel(9002);
            });
        features::wheel::initialize_item(9002, 0, "Reset inventory", "Reset inventory\nin case it got desynced", "file:assets/icons/wheel/reload_seed.blue.png",
            [](auto, auto, auto) {
                archipelago_client().reset_inventory();
            });
        features::wheel::initialize_item(9002, 1, "Toggle deathlink", "Enable or disable deathlink", "file:assets/icons/wheel/force_exit.blue.png",
            [](auto, auto, auto) {
                archipelago_client().toggle_deathlink();
            });
        features::wheel::initialize_item(9002, 2, "Hint status", "Displays the number of hints\nand progress towards next hint", "file:assets/icons/archipelago/ap-important.blue.png",
            [this](auto, auto, auto) {
                // TODO remove one hint when parsing the right PrintJSON ? Also problem with reset inventory
                int pickups_per_hint = m_hint_cost * 390 / 100;  // TODO replace 390 by the number of locations
                int hint_amount = m_hint_points / pickups_per_hint;
                int pickups_before_hint = pickups_per_hint - m_hint_points % pickups_per_hint;
                std::string hint_amount_text;
                if (hint_amount == 0) {
                    hint_amount_text = "No hint available\n";
                } else if (hint_amount == 1) {
                    hint_amount_text = "1 hint available\n";
                } else {
                    hint_amount_text = std::format("{} hints available\n", hint_amount);
                }
                std::string hint_pickup_text = (pickups_before_hint == 1) ? "1 location before next hint" : std::format("{} locations before next hint", pickups_before_hint);
                core::message_controller().queue_central({
                    .text = core::Property<std::string>(hint_amount_text + hint_pickup_text),
                    .prioritized = true,
                });
            });
    }

    void ArchipelagoClient::notify_location_collected(const location_data::Location& location) {
        ids::archipelago_id_t location_id{ids::get_location_id(location)};
        m_pending_send_locations.insert(location_id);

        if (!m_checked_seed) {
            modloader::info("archipelago", "Seed not checked yet: skip sending locations");
            return;
        }
        send_message(messages::LocationChecks{m_pending_send_locations});
        // m_pending_send_locations is not cleared here
        // It is done when the AP server confirms that the locations got checked (in RoomUpdate and PrintJSON packets)
        modloader::debug("archipelago", std::format("Location checked: {}", location.name));
    }

    void ArchipelagoClient::on_websocket_message(ix::WebSocketMessagePtr const& msg) {
        switch (msg->type) {
            case ix::WebSocketMessageType::Message: {
                modloader::debug("archipelago", "Data package received");
                auto message_string = msg.get()->str;

                try {
                    nlohmann::json json = nlohmann::json::parse(message_string);
                    for (auto& packet: json) {
                        const auto message = messages::parse_server_message(packet);

                        if (message.has_value()) {
                            std::lock_guard guard(m_queued_server_messages_mutex);
                            m_queued_server_messages.push_back(*message);
                        }
                    }
                } catch (nlohmann::json::exception& e) {
                    modloader::error("archipelago", std::format("Failed to parse message: {}, {}", e.what(), message_string));
                }

                break;
            }
            case ix::WebSocketMessageType::Open: {
                modloader::debug("archipelago", "Connected to server");

                const uuids::uuid uuid = uuids::uuid_system_generator{}();

                send_message(
                    messages::Connect{
                        m_password,
                        "Ori and the Will of the Wisps",
                        m_slot_name,
                        uuids::to_string(uuid),
                        messages::NetworkVersion{0, 6, 3, "Version"},
                        0b111,
                        {"AP"},
                        true,
                    }
                );
                break;
            }
            case ix::WebSocketMessageType::Close: {
                auto closed_reason = std::format("websocket closed '{}': {}", msg->closeInfo.code, msg->closeInfo.reason);
                modloader::warn("archipelago", closed_reason);

                if (m_is_active) {
                    // If we are in here we did not expect this disconnect, underlying socket will auto reconnect.
                    core::events::schedule_task(3.f, [this] {
                        if (m_is_active && !is_connected()) {
                            connect(m_websocket.getUrl(), m_slot_name, m_password);
                        }
                    });
                    core::message_controller().queue_central({
                        .text = core::Property<std::string>(std::format("Connection to AP lost ({}). Retrying in 3s.", msg->closeInfo.reason)),
                        .show_box = true,
                    });
                    core::events::schedule_task_for_next_update([&]{ m_event_bus.trigger_event(State::Reconnecting); });
                } else {
                    core::events::schedule_task_for_next_update([&]{ m_event_bus.trigger_event(State::Closed); });
                }
                break;
            }
            case ix::WebSocketMessageType::Error: {
                if (m_first_connection_attempt) {
                    core::events::schedule_task_for_next_update([this]() {
                        try_connection_with_new_game_seed_source();
                    });
                } else {
                    core::message_controller().queue_central({
                        .text = core::Property<std::string>(std::format("Connection to AP failed (url: {}). Retrying in 10s.", m_websocket.getUrl())),
                        .duration = 8.f,
                        .show_box = true,
                    });
                    // Users often forget to enable secure connection when connecting to archipelago.gg
                    // This displays an extra message to help them find the issue
                    if (m_websocket.getUrl().starts_with("ws://archipelago.gg:")) {
                        core::message_controller().queue_central({
                            .text = core::Property<std::string>("You need to enable secure connection to connect to the archipelago website."),
                            .duration = 8.f,
                            .show_box = true,
                        });
                    }
                    core::events::schedule_task(10.f, [this]() {
                        if (m_is_active) {
                            connect(m_websocket.getUrl(), m_slot_name, m_password);
                        }
                    });
                }
                break;
            }
            case ix::WebSocketMessageType::Ping:
            case ix::WebSocketMessageType::Pong:
            case ix::WebSocketMessageType::Fragment:
                break;
        }
    }

    void ArchipelagoClient::handle_queued_server_messages() {
        std::lock_guard guard(m_queued_server_messages_mutex);
        for (const auto& message: m_queued_server_messages) {
            handle_server_message(message);
        }
        m_queued_server_messages.clear();
    }

    void ArchipelagoClient::handle_deathlink() {
        if (!m_deathlink_enabled) {
            return;
        }
        if (m_death_from_deathlink) {
            m_death_from_deathlink = false;
            return;
        }

        modloader::info("archipelago", "Player died");
        m_deathlink_lives--;
        if (m_deathlink_lives <= 0) {  // Send a deathlink packet.
            m_deathlink_lives = m_deathlink_max_lives;
            std::chrono::time_point<std::chrono::system_clock> timestamp = std::chrono::system_clock::now();
            float death_time = std::chrono::duration_cast<std::chrono::seconds>(timestamp.time_since_epoch()).count();
            send_message(messages::Bounce{std::vector<std::string>{"DeathLink"}, messages::DeathPacket{death_time, m_slot_name}});
            core::message_controller().queue_central({
                .text = core::Property<std::string>("You triggered a death link"),
                .show_box = true,
            });
            modloader::info("archipelago", "Sent Bounce packet for death link.");
        } else {
            std::string life_text = (m_deathlink_lives == 1) ? "life" : "lives";
            core::message_controller().queue_central({
                .text = core::Property<std::string>(std::format("{} {} left", m_deathlink_lives, life_text)),
                .show_box = true,
            });
        }
    }

    // Get the connection info from .newgameseedsource, and try to connect with it.
    void ArchipelagoClient::try_connection_with_new_game_seed_source() {
        m_first_connection_attempt = false;
        load_new_game_source();

        const auto source = get_new_game_seed_source();
        const auto server_connection = source->get_server_connection();

        if (server_connection.has_value() && std::holds_alternative<seed::ArchipelagoServerConnection>(*server_connection)) {
            auto connection = std::get<seed::ArchipelagoServerConnection>(*server_connection);
            m_slot_name = connection.slot_name;
            m_password = connection.password;
            core::events::schedule_task(0.f, [connection, this]() {
                archipelago_client().connect(connection.url, m_slot_name, m_password);
            });
        };
    }

    void ArchipelagoClient::compare_seed() {
        if (m_checked_seed) {
            return;
        }

        if (archipelago_save_data->ap_seed.empty()) {  // This is the case on file creation
            archipelago_save_data->ap_seed = m_ap_seed;
        }
        if (archipelago_save_data->ap_seed != m_ap_seed) {
            core::message_controller().queue_central({
                .text = core::Property<std::string>("This save is from a different Archipelago game than the current one.\nYou must use the right save, or make a new one."),
                .duration = 10.f,
                .show_box = true,
                .prioritized = true,
            });
            modloader::warn("archipelago", std::format("The AP seeds don't match. Saved seed: {}, current seed: {}", archipelago_save_data->ap_seed, m_ap_seed));
            core::events::schedule_task_for_next_update([this]() {
                disconnect();
            });
            return;
        }
        modloader::info("archipelago", "Seed check successful");
        m_checked_seed = true;
        // Sync items and locations, send locations
        request_sync();
        send_message(messages::LocationChecks{m_pending_send_locations});
        collect_locations();
    }


    std::string ArchipelagoClient::get_item_display_text(const location_data::Location& location) {
        const auto location_id = ids::get_location_id(location);

        const auto item_it = m_scouted_locations.find(location_id);
        if (item_it == m_scouted_locations.end()) {
            return UNKNOWN_ITEM_TEXT;
        }

        const std::string game = m_slots[std::to_string(item_it->second.player)].game;
        auto item_name = get_item_text(item_it->second, game);

        if (m_slot_id == item_it->second.player) {
            return item_name;
        }

        return std::format("{}'s {}", get_player_name(item_it->second.player), item_name);
    }

    std::string ArchipelagoClient::get_shop_description(const location_data::Location& location) {
        const auto location_id = ids::get_location_id(location);

        const auto item_it = m_scouted_locations.find(location_id);
        if (item_it == m_scouted_locations.end()) {
            return UNKNOWN_ITEM_TEXT;
        }

        const auto target_player_name = item_it->second.player == m_slot_id
            ? "you"
            : get_player_name(item_it->second.player);

        if (item_it->second.flags & FLAG_PROGRESSION && item_it->second.flags & FLAG_TRAP) {
            return std::format("This item might be important, but you might want to avoid buying this for now. Ask {} about it.", target_player_name);
        }

        if (item_it->second.flags & FLAG_TRAP) {
            return std::format("This item may or may not be important for {}.", target_player_name);
        }

        if (item_it->second.flags & FLAG_PROGRESSION) {
            return std::format("This item might be important for {}.", target_player_name);
        }

        if (item_it->second.flags & FLAG_USEFUL) {
            return std::format("This item might be useful for {}.", target_player_name);
        }

        return std::format("This item is not important for {}.", target_player_name);
    }

    std::string ArchipelagoClient::get_shop_icon(const location_data::Location& location) {
        if (!m_current_seed_generator.has_value()) {
            return "shard:0";
        }

        const auto options = m_current_seed_generator->get_options();
        const auto icon_it = options.shop_icons.find(location.name);
        if (icon_it == options.shop_icons.end()) {
            return "shard:0";
        }

        return icon_it->second;
    }

    std::string ArchipelagoClient::parse_how_many(GameArea area) {
        std::string output;
        for (auto scout_data: m_scouted_locations) {
            auto location = ids::get_location_from_id(scout_data.first);
            bool is_progression = scout_data.second.flags & FLAG_PROGRESSION;
            if (area == location.area && is_progression) {
                const int group = location.condition.state.group_int();
                const int state = location.condition.state.state();
                const int value = location.condition.lower_bound_value();

                if (value == 1) {
                    output += std::format("{},{},", group, state);
                }
                else {
                    output += std::format("{},{}>={},", group, state, value);
                }
            }
        }

        if (!output.empty()) {
            output.pop_back();  // Remove the comma at the end
        }

        return output;
    }

    // Get the item name, colorized depending on its classification
    std::string ArchipelagoClient::get_item_text(const messages::NetworkItem& net_item, const std::string& game) {
        std::string item_name = m_data_package.get_item_name(net_item.item, game).value_or(UNKNOWN_ITEM_TEXT);
        // TODO sanitize name to remove markup from it
        std::string color_markup;

        if (game == "Ori and the Will of the Wisps") {
            std::variant<ids::Location, ids::BooleanItem, ids::ResourceItem, ids::UpgradeItem> item = ids::get_item(net_item.item);
            item | vx::match{
                [this, &color_markup](const ids::BooleanItem& item) {
                    if (item.uber_group == 24 || item.uber_group == 6) {  // Ability or Clean Water
                        if (item.uber_state == 120 || item.uber_state == 121) {  // Ancestral light
                            color_markup = "#";
                        } else {
                            color_markup = "*";
                        }
                    } else if (item.uber_group == 25) {  // Shard
                        color_markup = "$";
                    }
                    else {  // TODO check the color of bonus+ items
                        color_markup = "#";
                    }
                },
                [this, &color_markup](const ids::UpgradeItem& item) {
                    color_markup = "#";  // TODO check color
                },
                [this](const ids::ResourceItem& item) {},
                [&net_item](const ids::Location&) {
                    modloader::error("archipelago", std::format("AP ID {} corresponds to a location, expected an item.", net_item.item));
                },
            };
        } else {
            if (net_item.flags & FLAG_PROGRESSION && net_item.flags & FLAG_USEFUL) {
                color_markup = "*";
            } else if (net_item.flags & FLAG_PROGRESSION) {
                color_markup = "#";
            } else if (net_item.flags & FLAG_USEFUL) {
                color_markup = "$";
            } else if (net_item.flags & FLAG_TRAP) {
                color_markup = "@";
            }
        }
        return color_markup + item_name + color_markup;
    }

    const std::optional<ArchipelagoSeedGenerator>& ArchipelagoClient::current_seed_generator() {
        return m_current_seed_generator;
    }

    void ArchipelagoClient::notify_game_finished() { send_message(messages::StatusUpdate{messages::ClientStatus::ClientGoal}); }

    std::string ArchipelagoClient::get_player_name(const int player) {
        return m_player_map[player].alias;
    }

    void ArchipelagoClient::collect_locations() {
        if (!m_checked_seed) {
            modloader::info("archipelago", "Seed not checked yet: skip collecting locations");
            return;
        }
        for (const ids::archipelago_id_t location_id: m_pending_collect_locations) {
            location_data::Location location{ids::get_location_from_id(location_id)};

            core::api::uber_states::UberState state(location.condition.state.group_int(), location.condition.state.state());
            state.set(std::max(state.get<double>(), location.condition.lower_bound_value()));
        }
        m_pending_collect_locations.clear();
    }

    void ArchipelagoClient::grant_item(messages::NetworkItem const& net_item) {
        std::variant<ids::Location, ids::BooleanItem, ids::ResourceItem, ids::UpgradeItem> item = ids::get_item(net_item.item);
        const auto item_name = m_data_package.get_item_name(net_item.item, "Ori and the Will of the Wisps").value_or(UNKNOWN_ITEM_TEXT);

        item | vx::match{
            [this](const ids::BooleanItem& item) {
                core::api::uber_states::UberState(item.uber_group, item.uber_state).set(true);
                if (item.uber_group == 945 && item.uber_state == 58183) { // Central Luma TP
                    core::api::uber_states::UberState(5377, 63173).set(true);
                }
            },
            [this](const ids::UpgradeItem& item) {
                const auto state = core::api::uber_states::UberState(item.uber_group, item.uber_state);
                if (item.uber_group == 4) {
                    switch (item.uber_state) {
                        case 45: {  // Splinter grenade
                            state.set(state.get<int>() + 2);
                            break;
                        }
                        case 44: {  // Rapid grenade
                            state.set(state.get<float>() - 0.5f);
                            break;
                        }
                        case 10: {  // Quickshot upgrade
                            state.set(state.get<float>() - 0.4f);
                            break;
                        }
                        case 37: {  // Unlimited sentries
                            state.set(100);
                            break;
                        }
                        case 46: {  // Sentry burst upgrade
                            state.set(state.get<int>() + 10);
                            break;
                        }
                        case 47: {  // Sentry fire rate upgrade
                            state.set(state.get<float>() + 2.5f);
                            break;
                        }
                        case 48: {  // Splinter shuriken
                            state.set(state.get<int>() + 2);
                            break;
                        }
                        case 2:  // Efficiency upgrades
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 7:
                        case 8:
                        case 9: {
                            state.set(state.get<float>() / 2.0f);
                            break;
                        }
                        default: {
                            state.set(state.get<int>() + 1);
                        }
                    }
                } else { state.set(state.get<int>() + 1); }
            },
            [this](const ids::ResourceItem& item) {
                switch (item.type) {
                    case ids::ResourceType::Nothing: {
                        break;
                    }
                    case ids::ResourceType::Relic: {  // A relic is placed by seedgen, no need to show the item message
                        break;
                    }
                    case ids::ResourceType::SpiritLight: {
                        const auto& spirit_light = core::api::game::player::spirit_light();
                        const auto& spirit_light_collected = core::api::uber_states::UberState(UberStateGroup::RandoStats, 3);
                        spirit_light.set(spirit_light.get() + item.value);
                        spirit_light_collected.set<int>(spirit_light_collected.get<int>() + item.value);
                        archipelago_save_data->received_sl = archipelago_save_data->received_sl + item.value;
                        break;
                    }
                    case ids::ResourceType::GorlekOre: {
                        const auto& gorlek_ore = core::api::game::player::ore();
                        const auto& gorlek_ore_collected = core::api::uber_states::UberState(UberStateGroup::RandoStats, 5);

                        gorlek_ore.set(gorlek_ore.get() + 1);
                        gorlek_ore_collected.set<int>(gorlek_ore_collected.get<int>() + 1);
                        archipelago_save_data->received_ore = archipelago_save_data->received_ore + 1;
                        break;
                    }
                    case ids::ResourceType::Keystone: {
                        const auto& keystone = core::api::game::player::keystones();
                        const auto& keystone_collected = core::api::uber_states::UberState(UberStateGroup::RandoStats, 0);

                        keystone.set(keystone.get() + 1);
                        keystone_collected.set<int>(keystone_collected.get<int>() + 1);
                        archipelago_save_data->received_ks = archipelago_save_data->received_ks + 1;
                        break;
                    }
                    case ids::ResourceType::ShardSlot: {
                        const auto& shard_slot = core::api::game::player::shard_slots();
                        shard_slot.set(shard_slot.get() + 1);
                        break;
                    }
                    case ids::ResourceType::HealthFragment: {
                        const auto& max_health = core::api::game::player::max_health();
                        const auto& health = core::api::game::player::health();

                        max_health.set(max_health.get() + 5);
                        health.set(static_cast<float>(max_health.get()));
                        break;
                    }
                    case ids::ResourceType::EnergyFragment: {
                        const auto& max_energy = core::api::game::player::max_energy();
                        const auto& energy = core::api::game::player::energy();

                        max_energy.set(max_energy.get() + 0.5f);
                        energy.set(max_energy.get());
                        break;
                    }
                }
            },
            [&net_item](const ids::Location&) {
                modloader::error("archipelago", std::format("AP ID {} corresponds to a location, expected an item.", net_item.item));
            },
        };

        queue_reach_check();
        std::string item_text = get_item_text(net_item, "Ori and the Will of the Wisps");

        if (m_slot_id == net_item.player) {
            modloader::debug("archipelago", std::format("Received item: {}", item_name));
            // Increment the hint points only for local items, the increment for non-local items is done when parsing PrintJSON packets
            m_hint_points = m_hint_points + m_hint_points_per_pickup;
            if (item_name != "Nothing") {
                core::message_controller().queue_central({
                    .text = core::Property<std::string>(item_text),
                    .show_box = true,
                });
            }
        } else {
            std::string sender_name = get_player_name(net_item.player);
            modloader::debug("archipelago", std::format("Received item: {} from {}", item_name, sender_name));
            core::message_controller().queue_central({
                .text = core::Property<std::string>(std::format("{} from {}.", item_text, sender_name)),
                .show_box = true,
            });
        }
    }

    void ArchipelagoClient::request_sync() {
        send_message(messages::Sync{"Sync"});
        modloader::debug("archipelago", "Sent Sync packet to AP server.");
    }

    void ArchipelagoClient::send_message(const nlohmann::json& message) {
        if (!is_connected()) {
            return;
        }

        m_websocket.send("[" + message.dump() + "]"); // Not very good style, maybe improve it
    }

    void ArchipelagoClient::handle_server_message(messages::ap_server_message_t const& message) {
        message |
            vx::match{
                [this](const messages::Connected& message) {
                    modloader::debug("archipelago", "Parsing Connected Packet");
                    core::message_controller().queue_central({
                        .text = core::Property<std::string>("Connected to Archipelago"),
                        .show_box = true,
                    });
                    m_player_map[0] = messages::NetworkPlayer{0, 0, "Archipelago", "Archipelago"};
                    m_slot_id = message.slot;
                    for (auto& player: message.players) {
                        m_player_map[player.slot] = player;
                    }
                    m_slots = message.slot_info;

                    for (const ids::archipelago_id_t location_id: message.checked_locations) {
                        m_pending_collect_locations.insert(location_id);
                        m_pending_send_locations.erase(location_id); // Remove location from the cache if it existed in it.
                        collect_locations();
                    }

                    m_current_seed_generator = ArchipelagoSeedGenerator(message.slot_data);

                    if (message.slot_data.ap_version < MIN_AP_VERSION) {
                        core::message_controller().queue_central({
                            .text = core::Property<std::string>("The seed was generated with an outdated AP World. Things might be broken.\nPlease update it or downgrade the client to a version compatible with this AP World."),
                            .duration = 10.f,
                            .show_box = true,
                            .prioritized = true,
                        });
                        modloader::warn("archipelago", std::format("Outdated AP World. Version {}, expected at least {}.", message.slot_data.ap_version, MIN_AP_VERSION));
                    }

                    if (message.slot_data.death_link != 0) {
                        m_deathlink_enabled = true;
                        m_deathlink_lives = message.slot_data.death_link;
                        m_deathlink_max_lives = message.slot_data.death_link;
                        send_message(messages::ConnectUpdate{0b111, {"AP", "DeathLink"}});
                    }


                    messages::LocationScouts location_scouts_message;

                    for (const auto& required_location_name : m_current_seed_generator->required_location_scouts()) {
                        const auto location = location_collection().location(required_location_name);

                        if (!location.has_value()) {
                            modloader::error("archipelago", std::format("Wanted to scout location {} but it didn't exist", required_location_name));
                            continue;
                        }

                        const auto location_id = ids::get_location_id(*location);
                        if (!m_scouted_locations.contains(location_id)) {
                            location_scouts_message.locations.push_back(location_id);
                        }
                    }

                    if (!location_scouts_message.locations.empty()) {
                        send_message(location_scouts_message);
                    }

                    m_hint_points = message.hint_points;

                    m_event_bus.trigger_event(State::Connected);
                },
                [this](const messages::ConnectionRefused& message) {
                    modloader::debug("archipelago", "Parsing ConnectionRefused Packet");
                    if (m_first_connection_attempt) {
                        core::events::schedule_task_for_next_update([this]() {
                            try_connection_with_new_game_seed_source();
                        });
                    } else {
                        for (const std::string& error: message.errors) {
                            modloader::error("archipelago", std::format("Connection refused: {}.", error));
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(std::format("Connection to Archipelago refused: {}.", error)),
                                .duration = 5.f,
                                .show_box = true,
                                .prioritized = true,
                            });
                        }
                    }
                },
                [this](const messages::RoomInfo& message) {
                    modloader::debug("archipelago", "Parsing RoomInfo Packet");
                    // Update data package
                    const auto outdated_games = m_data_package.get_outdated_game_data_packages(message.datapackage_checksums);
                    if (!outdated_games.empty()) {
                        send_message(messages::GetDataPackage{outdated_games});
                        modloader::debug("archipelago", "Sent GetDataPackage packet to AP server.");
                    }
                    m_ap_seed = message.seed_name;
                    m_hint_points_per_pickup = message.location_check_points;
                    m_hint_cost = message.hint_cost;
                },
                [this](const messages::ReceivedItems& message) {
                    if (!GameStateMachine::get_IsGame()) {
                        return;
                    }

                    modloader::debug("archipelago", "Parsing ReceivedItems Packet");
                    modloader::debug(
                        "archipelago",
                        std::format(
                            "Message index: {}, Saved index: {}, Message length {}", message.index, archipelago_save_data->last_item_index, message.items.size()
                        )
                    );

                    if (!m_checked_seed) {
                        modloader::info("archipelago", "Seed not checked yet: skip giving items");
                        return;
                    }

                    if (message.index == archipelago_save_data->last_item_index + 1) {
                        for (auto& item: message.items) {
                            grant_item(item);
                            archipelago_save_data->last_item_index += 1;
                        }
                    } else if (message.index == 0) {
                        // AP server sent all the received items, only add the new ones
                        int start_index = archipelago_save_data->last_item_index == 0 ? 0 : archipelago_save_data->last_item_index + 1;

                        for (int index{start_index}; index < message.items.size(); ++index) {
                            grant_item(message.items[index]);
                        }
                        archipelago_save_data->last_item_index = static_cast<int>(message.items.size() - 1);
                    } else {
                        request_sync();
                    }
                },
                [this](const messages::LocationInfo& message) {
                    for (const auto& item: message.locations) {
                        m_scouted_locations.emplace(item.location, item);
                    }
                },
                [this](const messages::RoomUpdate& message) {
                    modloader::debug("archipelago", "Parsing RoomUpdate Packet");
                    for (auto& player: message.players) {
                        m_player_map[player.slot] = player;
                    }

                    for (ids::archipelago_id_t location_id: message.checked_locations) {
                        m_pending_collect_locations.insert(location_id);
                        m_pending_send_locations.erase(location_id); // Remove location from the cache if it existed in it.
                        collect_locations();
                    }
                },
                [this](const messages::PrintJSON& message) {
                    modloader::debug("archipelago", std::format("Parsing PrintJSON of type: {}", message.type));
                    if (message.type == "ItemSend" || message.type == "ItemCheat") {
                        // Only display if the item is not a local item, and comes from this game
                        if (message.receiving != m_slot_id && message.item.player == m_slot_id) {
                            std::string game = m_slots[std::to_string(message.receiving)].game;
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(
                                    std::format("{} sent to {}.", get_item_text(message.item, game), get_player_name(message.receiving))
                                ),
                                .show_box = true,
                            });
                            // Increment the hint points only for non-local items, the increment for local items is done in grant_item
                            m_hint_points = m_hint_points + m_hint_points_per_pickup;
                            if (message.type == "ItemSend") {
                                // This means that the server received the LocationCheck packet, so we can clear the cache.
                                m_pending_send_locations.clear();
                            }
                        }

                    } else if (message.type == "Hint") {
                        // Only display if the item is in this game, and not found yet.
                        if (message.item.player == m_slot_id && !message.found) {
                            std::string game = m_slots[std::to_string(message.receiving)].game;
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(std::format(
                                    "{} for {} is on {}.",
                                    m_data_package.get_item_name(message.item.item, game).value_or(UNKNOWN_ITEM_TEXT),
                                    get_player_name(message.receiving),
                                    m_data_package.get_location_name(message.item.location, "Ori and the Will of the Wisps").value_or("@Unknown Location@")
                                )),
                                .show_box = true,
                            });
                        }
                    } else if (message.type == "Countdown") {
                        core::message_controller().queue_central({
                            .text = core::Property<std::string>(std::format("Countdown: {}", message.countdown)),
                            .show_box = true,
                        });
                    } else if (message.type == "Goal") {
                        std::string player_name = get_player_name(message.slot);
                        if (player_name != get_player_name(m_slot_id)) {
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(std::format("{} reached their goal.", player_name)),
                                .show_box = true,
                            });
                        }
                    } else if (message.type == "Collect") {
                        std::string player_name = get_player_name(message.slot);
                        if (player_name != get_player_name(m_slot_id)) {
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(std::format("{} collected their world.", player_name)),
                                .show_box = true,
                            });
                        }
                    } else if (message.type == "Release") {
                        std::string player_name = get_player_name(message.slot);
                        if (player_name != get_player_name(m_slot_id)) {
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(std::format("{} released their world.", player_name)),
                                .show_box = true,
                            });
                        }
                    } else if (message.type == "Join") {
                        std::string player_name = get_player_name(message.slot);
                        if (player_name != get_player_name(m_slot_id) && m_player_map.size() <= MAX_PLAYERS_TO_SHOW_JOIN_LEAVE_MESSAGES) {
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(std::format("{} joined the game.", player_name)),
                                .show_box = true,
                            });
                        }
                    } else if (message.type == "Part") {
                        std::string player_name = get_player_name(message.slot);
                        if (player_name != get_player_name(m_slot_id) && m_player_map.size() <= MAX_PLAYERS_TO_SHOW_JOIN_LEAVE_MESSAGES) {
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(std::format("{} left the game.", player_name)),
                                .show_box = true,
                            });
                        }
                    } else if (message.type == "Chat") {
                        std::string player_name = get_player_name(message.slot);
                        if (player_name != get_player_name(m_slot_id)) {
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(std::format("{}: {}", player_name, message.message)),
                                .show_box = true,
                            });
                        }
                    } else if (message.type == "ServerChat") {
                        core::message_controller().queue_central({
                            .text = core::Property<std::string>(std::format("Server: {}", message.message)),
                            .show_box = true,
                        });
                    } else if (message.type == "Tutorial" || message.type == "TagsChanged" || message.type == "CommandResult" ||
                               message.type == "AdminCommandResult") {
                        // Skip these messages
                    } else { // TODO sometimes there is no type (eg Cheat console), see what to do
                        std::string text = message.type + ": ";
                        for (auto& print_text: message.data) {
                            text += print_text.text;
                        }
                        modloader::warn("archipelago", std::format("Unknown PrintJSON type. Data: {}", text));
                    }
                },
                [](const messages::InvalidPacket& message) {
                    modloader::debug("archipelago", "Parsing InvalidPacket Packet");
                    modloader::error("archipelago", std::format("{}: Invalid packet sent {}: {}.", message.type, message.original_cmd, message.text));
                },
                [this](const messages::DataPackage& message) {
                    modloader::debug("archipelago", "Parsing DataPackage Packet");
                    m_data_package.add_game_data(message.data.games);
                },
                [this](const messages::Bounce& message) {
                    modloader::debug("archipelago", "Parsing Bounced Packet");
                    if (std::ranges::find(message.tags, "DeathLink") != message.tags.end()
                        && m_deathlink_enabled
                        && message.data.source != m_slot_name) {
                        modloader::info("archipelago", std::format("{} died: kill the player.", message.data.source));
                        std::string death_message = (message.data.cause.empty()) ? std::format("{} died.", message.data.source) : message.data.cause;
                        core::message_controller().queue_central({
                            .text = core::Property<std::string>(death_message),
                            .show_box = true,
                        });
                        m_death_from_deathlink = true;
                        const auto& health = core::api::game::player::health();
                        health.set(-1.0f);  // Set health to a negative value, to kill the player.
                    }
                },
            };
    }
} // namespace randomizer::archipelago
