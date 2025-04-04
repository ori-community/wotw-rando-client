#include <Common/ext.h>
#include <Common/vx.h>
#include <Modloader/app/methods/GameStateMachine.h>
#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
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

#define UUID_SYSTEM_GENERATOR
#include <uuid.h>

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
        archipelago_client().request_sync();
        modloader::debug("archipelago", "Resync requested: Restore Checkpoint");
    });

    [[maybe_unused]]
    auto on_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        archipelago_client().handle_queued_server_messages();
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
        m_websocket.disableAutomaticReconnection();
        m_websocket.start();
        m_should_connect = true;
        modloader::debug("archipelago", "AP client connected.");
    }

    void ArchipelagoClient::disconnect() {
        m_scouted_locations.clear();
        m_shop_icons.clear();
        m_current_seed_generator = std::nullopt;
        m_should_connect = false;
        m_websocket.stop();
        modloader::debug("archipelago", "AP client disconnected.");
    }

    bool ArchipelagoClient::is_connected() const { return m_websocket.getReadyState() == ix::ReadyState::Open; }

    void ArchipelagoClient::notify_location_collected(const location_data::Location& location) {
        ids::archipelago_id_t location_id{ids::get_location_id(location)};

        m_pending_locations.insert(location_id); // Stores the locations that are checked, but not yet validated by the server: useful for resync
        send_message(messages::LocationChecks{m_pending_locations});

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
                        messages::NetworkVersion{0, 5, 0, "Version"},
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

                if (m_should_connect) {
                    // If we are in here we did not expect this disconnect, underlying socket will auto reconnect.
                    core::events::schedule_task(3.f, [this] {
                        if (m_should_connect && !is_connected()) {
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
            case ix::WebSocketMessageType::Error:
                core::message_controller().queue_central({
                    .text = core::Property<std::string>(std::format("Connection to AP failed (url: {}). Retrying in 10s.", m_websocket.getUrl())),
                    .show_box = true,
                });
                core::events::schedule_task(10.f, [this]() {
                    if (m_should_connect) {
                        connect(m_websocket.getUrl(), m_slot_name, m_password);
                    }
                });
                break;
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

    std::string ArchipelagoClient::get_item_display_text(const location_data::Location& location) {
        const auto location_id = ids::get_location_id(location);

        const auto item_it = m_scouted_locations.find(location_id);
        if (item_it == m_scouted_locations.end()) {
            return "@Unknown Item@";
        }

        auto item_name = m_data_package.get_item_name(item_it->second.item).value_or(UNKNOWN_ITEM_TEXT);

        if (m_slot_id == item_it->second.player) {
            return item_name;
        }

        return std::format("{}'s {}", get_player_name(item_it->second.player), item_name);
    }

    std::string ArchipelagoClient::get_shop_description(const location_data::Location& location) {
        const auto location_id = ids::get_location_id(location);

        const auto item_it = m_scouted_locations.find(location_id);
        if (item_it == m_scouted_locations.end()) {
            return "@Unknown Item@";
        }

        const auto target_player_name = item_it->second.player == m_slot_id
            ? "you"
            : get_player_name(item_it->second.player);

        constexpr int FLAG_PROGRESSION = 0b001;
        constexpr int FLAG_USEFUL = 0b010;
        constexpr int FLAG_TRAP = 0b100;

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

    const std::optional<ArchipelagoSeedGenerator>& ArchipelagoClient::current_seed_generator() {
        return m_current_seed_generator;
    }

    void ArchipelagoClient::notify_game_finished() { send_message(messages::StatusUpdate{messages::ClientStatus::ClientGoal}); }

    std::string ArchipelagoClient::get_player_name(int player) {
        return m_player_map[player].alias;
    }

    void collect_location(const ids::archipelago_id_t location_id) {
        location_data::Location location{ids::get_location_from_id(location_id)};
        core::api::uber_states::UberState state(location.condition.state.group_int(), location.condition.state.state());
        state.set(std::max(state.get<double>(), location.condition.lower_bound_value()));
    }

    void ArchipelagoClient::grant_item(messages::NetworkItem const& net_item) {
        std::variant<ids::Location, ids::BooleanItem, ids::ResourceItem, ids::UpgradeItem> item = ids::get_item(net_item.item);
        const auto item_name = m_data_package.get_item_name(net_item.item).value_or(UNKNOWN_ITEM_TEXT);

        item | vx::match{
            [this](const ids::BooleanItem& item) {
                // TODO: This should be in the seed file, not hardcoded here
                core::api::uber_states::UberState(item.uber_group, item.uber_state).set(true);
                if (item.uber_group == 945 && item.uber_state == 58183) { // Central Luma TP
                    core::api::uber_states::UberState(5377, 63173).set(true);
                }
            },
            [this](const ids::UpgradeItem& item) {
                std::vector<core::api::uber_states::UberState> item_uber_states;
                core::api::uber_states::UberState(item.uber_group, item.uber_state).set(true);
                if (item.uber_group == static_cast<int16_t>(UberStateGroup::RandoUpgrade)) {
                    // Currently this is always true, as all upgrade items have this UberGroup.
                    switch (item.uber_state) { // Handle upgrades that affect multiple uberstates.
                        case 48: { // Splinter Shurikens
                            core::api::uber_states::UberState(item.uber_group, 49).set(true);
                            break;
                        }
                        case 80: { // Skill Velocity
                            core::api::uber_states::UberState(item.uber_group, 81).set(true);
                            core::api::uber_states::UberState(item.uber_group, 82).set(true);
                            core::api::uber_states::UberState(item.uber_group, 83).set(true);
                            core::api::uber_states::UberState(item.uber_group, 84).set(true);
                            core::api::uber_states::UberState(item.uber_group, 86).set(true);
                            core::api::uber_states::UberState(item.uber_group, 90).set(true);
                            break;
                        }
                        case 87: { // Jumpgrade
                            core::api::uber_states::UberState(item.uber_group, 88).set(true);
                            core::api::uber_states::UberState(item.uber_group, 89).set(true);
                            break;
                        }
                        default: {
                            break;
                        }
                    }
                }
            },
            [this](const ids::ResourceItem& item) {
                switch (item.type) {
                    case ids::ResourceType::Nothing: {
                        break;
                    }
                    case ids::ResourceType::SpiritLight: {
                        const auto& spirit_light = core::api::game::player::spirit_light();
                        const auto& spirit_light_collected = core::api::uber_states::UberState(UberStateGroup::RandoStats, 3);
                        spirit_light.set(spirit_light.get() + item.value);
                        spirit_light_collected.set<int>(spirit_light_collected.get<int>() + item.value);
                        break;
                    }
                    case ids::ResourceType::GorlekOre: {
                        const auto& gorlek_ore = core::api::game::player::ore();
                        const auto& gorlek_ore_collected = core::api::uber_states::UberState(UberStateGroup::RandoStats, 5);

                        gorlek_ore.set(gorlek_ore.get() + 1);
                        gorlek_ore_collected.set<int>(gorlek_ore_collected.get<int>() + 1);
                        break;
                    }
                    case ids::ResourceType::Keystone: {
                        const auto& keystone = core::api::game::player::keystones();
                        const auto& keystone_collected = core::api::uber_states::UberState(UberStateGroup::RandoStats, 0);

                        keystone.set(keystone.get() + 1);
                        keystone_collected.set<int>(keystone_collected.get<int>() + 1);
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

        if (m_slot_id == net_item.player) {
            modloader::debug("archipelago", std::format("Received item: {}", item_name));
            if (item_name != "Nothing") {
                core::message_controller().queue_central({
                    .text = core::Property<std::string>(item_name),
                    .show_box = true,
                });
            }
        } else {
            std::string sender_name = get_player_name(net_item.player);
            modloader::debug("archipelago", std::format("Received item: {} from {}", item_name, sender_name));
            core::message_controller().queue_central({
                .text = core::Property<std::string>(std::format("{} from {}.", item_name, sender_name)),
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
                    m_player_map[0] = messages::NetworkPlayer{0, 0, "Archipelago", "Archipelago"};
                    m_slot_id = message.slot;
                    for (auto& player: message.players) {
                        m_player_map[player.slot] = player;
                    }
                    m_slots = message.slot_info;

                    for (const ids::archipelago_id_t location_id: message.checked_locations) {
                        collect_location(location_id);
                    }

                    auto d = message.slot_data.dump(2);
                    m_current_seed_generator = ArchipelagoSeedGenerator(message.slot_data);

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

                    m_event_bus.trigger_event(State::Connected);
                },
                [](const messages::ConnectionRefused& message) {
                    modloader::debug("archipelago", "Parsing ConnectionRefused Packet");
                    for (const std::string& error: message.errors) {
                        modloader::error("archipelago", std::format("Connection refused: {}.", error));
                        core::message_controller().queue_central({
                            .text = core::Property<std::string>(std::format("Connection to Archipelago refused: {}.", error)),
                            .show_box = true,
                        });
                    }
                },
                [this](const messages::RoomInfo& message) {
                    modloader::debug("archipelago", "Parsing RoomInfo Packet");
                    modloader::debug(
                        "archipelago", std::format("AP server version: {}.{}.{}", message.version.major, message.version.minor, message.version.build)
                    );
                    modloader::debug(
                        "archipelago",
                        std::format(
                            "AP generator version: {}.{}.{}", message.generator_version.major, message.generator_version.minor, message.generator_version.build
                        )
                    );
                    modloader::debug("archipelago", std::format("Hint cost: {}, Location points: {}.", message.hint_cost, message.location_check_points));

                    // Update data package
                    const auto outdated_games = m_data_package.get_outdated_game_data_packages(message.datapackage_checksums);
                    if (!outdated_games.empty()) {
                        send_message(messages::GetDataPackage{outdated_games});
                        modloader::debug("archipelago", "Sent GetDataPackage packet to AP server.");
                    }
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
                        collect_location(location_id);
                        m_pending_locations.erase(location_id); // Remove location from the cache if it existed in it.
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
                                    std::format("{} sent to {}.", m_data_package.get_item_name(message.item.item).value_or(UNKNOWN_ITEM_TEXT), get_player_name(message.receiving))
                                ),
                                .show_box = true,
                            });
                            if (message.type == "ItemSend") {
                                // This means that the server received the LocationCheck packet, so we can clear the cache.
                                m_pending_locations.clear();
                            }
                        }

                    } else if (message.type == "Hint") {
                        // Only display if the item is in this game, and not found yet.
                        if (message.item.player == m_slot_id && !message.found) {
                            std::string game = m_slots[std::to_string(message.receiving)].game;
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(std::format(
                                    "{} for {} is on {}.",
                                    m_data_package.get_item_name(message.item.item).value_or(UNKNOWN_ITEM_TEXT),
                                    get_player_name(message.receiving),
                                    m_data_package.get_location_name(message.item.location).value_or("@Unknown Location@")
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
                        if (player_name != get_player_name(m_slot_id)) {
                            core::message_controller().queue_central({
                                .text = core::Property<std::string>(std::format("{} joined the game.", player_name)),
                                .show_box = true,
                            });
                        }
                    } else if (message.type == "Part") {
                        std::string player_name = get_player_name(message.slot);
                        if (player_name != get_player_name(m_slot_id)) {
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
            };
    }
} // namespace randomizer::archipelago

// TODO list:
// Add death link support (see core/api/game/death_listener + add the tag in Connect packet)
