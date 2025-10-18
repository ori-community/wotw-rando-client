#pragma once


#include <IXWebSocket.h>
#include <Randomizer/archipelago/archipelago_data_package.h>
#include <Randomizer/archipelago/archipelago_ids.h>
#include <Randomizer/archipelago/archipelago_protocol.h>
#include <Randomizer/archipelago/archipelago_seedgen.h>
#include <nlohmann/json.hpp>
#include <string>
#include <unordered_map>
#include <unordered_set>

namespace randomizer::archipelago {
    class ArchipelagoClient {
    public:
        enum class State {
            Connected,
            Reconnecting,
            Closed,
        };

        ArchipelagoClient();
        void connect(std::string_view url, std::string_view slot_name, std::string_view password);
        void disconnect();
        bool is_connected() const;
        void notify_location_collected(const location_data::Location& location);
        void notify_game_finished();
        void request_sync();
        void handle_queued_server_messages();
        void handle_deathlink();
        std::string get_item_display_text(const location_data::Location& location);
        std::string get_shop_description(const location_data::Location& location);
        std::string get_shop_icon(const location_data::Location& location);
        const std::optional<ArchipelagoSeedGenerator>& current_seed_generator();
        common::EventBus<State>& event_bus() { return m_event_bus; }
        bool is_active() const { return m_is_active; }

    private:
        void send_message(const nlohmann::json& message);
        void grant_item(messages::NetworkItem const& net_item);
        void on_websocket_message(ix::WebSocketMessagePtr const& msg);
        void handle_server_message(messages::ap_server_message_t const& message);
        std::string get_player_name(int player);
        void update_connection_info();

        /**
         * Whether the AP client is active and should try
         * to connect to the game.
         */
        bool m_is_active = false;
        int m_min_version = 1;  // Minimum AP World version required
        bool m_first_connection_attempt = true;
        ix::WebSocket m_websocket;
        std::string m_slot_name; // aka player name
        int m_slot_id {0};
        std::string m_password;
        std::unordered_set<ids::archipelago_id_t> m_pending_locations;
        std::unordered_map<std::string, messages::NetworkSlot> m_slots;
        std::unordered_map<int, messages::NetworkPlayer> m_player_map;
        bool m_deathlink_enabled = false;
        std::unordered_map<ids::archipelago_id_t, std::string> m_shop_icons;
        std::unordered_map<ids::archipelago_id_t, messages::NetworkItem> m_scouted_locations;
        std::mutex m_queued_server_messages_mutex;
        std::vector<messages::ap_server_message_t> m_queued_server_messages;
        ArchipelagoDataPackage m_data_package;
        std::optional<ArchipelagoSeedGenerator> m_current_seed_generator;
        common::EventBus<State> m_event_bus;
    };
} // namespace randomizer::archipelago
