#pragma once

#include <Randomizer/online/network.h>
#include <Randomizer/online/player.h>
#include <Randomizer/online/uber_state_handler.h>

#include <Core/api/game/game.h>
#include <Core/api/graphics/textures.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/game_event.h>
#include <Core/messages/message_controller.h>

#include <proto/packets.pb.h>

#include <string>
#include <vector>

namespace randomizer::online {
    class MultiplayerUniverse {
    public:
        struct PlayerInfo {
            uint64_t universe_id;
            Network::WorldInfo world;
            Network::UserInfo user;
        };

        MultiplayerUniverse();
        MultiplayerUniverse(MultiplayerUniverse&& other) = delete;
        MultiplayerUniverse(MultiplayerUniverse const& other) = delete;
        ~MultiplayerUniverse() = default;

        void register_packet_handlers(NetworkClient& client);
        void full_sync_states();

        app::Color local_player_color() const { return m_color; }
        std::optional<PlayerInfo> local_player() const;
        std::optional<Network::MultiverseInfoMessage> multiverse_info() const { return m_last_multiverse_info; }
        void report_player_ready(bool ready) const;

        int player_count() const { return static_cast<int>(m_players.size()); }

        UberStateHandler& uber_state_handler() { return m_uber_state_handler; }

    private:
        struct MessageBoxStorage {
            std::optional<float> time;
        };

        void update();
        void on_load();
        void request_full_sync();

        void handle_multiverse_info(Network::MultiverseInfoMessage const& message);
        void handle_authenticated(Network::AuthenticatedMessage const& message);
        void handle_visibility(Network::VisibilityMessage const& message);

        void update_player_world_position(std::string_view player_id, float x, float y, std::string_view ghost_frame_data);
        void update_player_map_position(std::string_view player_id, float x, float y);

        void uber_state_update(Network::UberStateUpdateMessage const& message);
        void uber_state_batch_update(Network::UberStateBatchUpdateMessage const& message);

        void print_text(Network::PrintTextMessage const& message);
        static void print_pickup(Network::PrintPickupMessage const& message);
        void initialize_bingo(Network::InitGameSyncMessage const& message);
        void set_seed(Network::SetSeedMessage const& message);

        std::vector<common::registration_handle> m_bus_handles;
        Network::MultiverseInfoMessage::GameHandlerType m_game_type = Network::MultiverseInfoMessage_GameHandlerType_Normal;
        std::optional<Network::MultiverseInfoMessage> m_last_multiverse_info;

        std::unordered_map<std::string, PlayerInfo> m_players;
        std::unordered_map<std::string, std::unique_ptr<Player>> m_player_avatars;
        std::unordered_map<int, message_handle> m_message_boxes;

        UberStateHandler m_uber_state_handler;
        NetworkClient* m_client = nullptr;
        std::string m_id;
        std::string m_name;
        app::Color m_color = { 1.f, 1.f, 1.f, 1.f };
    };
} // namespace randomizer::online
