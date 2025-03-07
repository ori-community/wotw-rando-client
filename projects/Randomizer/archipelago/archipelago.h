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
        ArchipelagoClient();
        void connect(std::string_view url, std::string_view slot_name, std::string_view password);
        void disconnect();
        bool is_connected() const;
        void notify_location_collected(const location_data::Location& location);
        void notify_game_finished();
        void request_sync();
        void handle_queued_server_messages();
        std::string get_item_display_text(const location_data::Location& location);
        const std::optional<ArchipelagoSeedGenerator>& current_seed_generator();

    private:
        void send_message(const nlohmann::json& message);
        void grant_item(messages::NetworkItem const& net_item);
        void on_websocket_message(ix::WebSocketMessagePtr const& msg);
        void handle_server_message(messages::ap_server_message_t const& message);
        std::string get_player_name(int player);

        bool m_should_connect = false;
        ix::WebSocket m_websocket;
        std::string m_slot_name; // aka player name
        int m_slot_id {0};
        std::string m_password;
        std::unordered_set<ids::archipelago_id_t> m_pending_locations;
        std::unordered_map<std::string, messages::NetworkSlot> m_slots;
        std::unordered_map<int, messages::NetworkPlayer> m_player_map;
        std::unordered_map<ids::archipelago_id_t, messages::NetworkItem> m_scouted_locations;
        std::mutex m_queued_server_messages_mutex;
        std::vector<messages::ap_server_message_t> m_queued_server_messages;
        ArchipelagoDataPackage m_data_package;
        std::optional<ArchipelagoSeedGenerator> m_current_seed_generator;
    };
} // namespace randomizer::archipelago
