#pragma once

#include <IXWebSocket.h>
#include <nlohmann/json.hpp>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <Randomizer/archipelago/archipelago_ids.h>
#include <Randomizer/archipelago/archipelago_data_package.h>
#include <Randomizer/archipelago/archipelago_protocol.h>

namespace randomizer::archipelago {
    class ArchipelagoClient {
    public:
        ArchipelagoClient();
        void connect(std::string_view url, std::string_view slot_name, std::string_view password);
        void disconnect();
        bool is_connected() const;
        void notify_location_collected(const location_data::Location& location);
        void game_finished_handler();
        void ask_resync();

    private:
        void send_message(const nlohmann::json& message);

        using IdToName = std::unordered_map<ids::archipelago_id_t, std::string>;

        void give_item(messages::NetworkItem const& net_item);
        static void collect_location(ids::archipelago_id_t location_id);
        void on_websocket_message(ix::WebSocketMessagePtr const& msg);
        void handle_server_message(messages::ap_server_message_t const& message);
        static IdToName parse_data_package(const std::unordered_map<std::string, ids::archipelago_id_t>& data);
        std::string get_player_name(int player);
        static void set_state(int group, int state, auto value);

        bool m_should_connect = false;
        ix::WebSocket m_websocket;
        std::string m_slot_name; // aka player name
        int m_slot_id {0};
        std::string m_password;
        std::unordered_set<ids::archipelago_id_t> m_cached_locations;
        std::unordered_map<std::string, messages::NetworkSlot> m_slots;
        std::unordered_map<int, messages::NetworkPlayer> m_player_map;
        std::mutex m_packet_mutex;
        std::vector<nlohmann::basic_json<>> m_packets;
        ArchipelagoDataPackage m_data_package;
    };
} // namespace randomizer::archipelago
