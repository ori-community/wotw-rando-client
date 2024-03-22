#pragma once

#include <Randomizer/online/network.h>
#include <Randomizer/online/player.h>
#include <Randomizer/online/uber_state_handler.h>

#include <Core/api/graphics/textures.h>
#include <Core/messages/message_controller.h>

#include <packets.pb.h>

#include <string>
#include <vector>
#include <Core/mood_guid.h>

namespace randomizer::online {
    class MultiplayerUniverse {
    public:
        enum class Event {
            ShouldBlockStartingNewGameChanged,
            MultiverseUpdated,
        };

        struct PlayerInfo {
            uint64_t universe_id;
            Network::WorldInfo world;
            Network::UniverseInfo universe;
            Network::UserInfo user;
        };

        MultiplayerUniverse();
        MultiplayerUniverse(MultiplayerUniverse&& other) = delete;
        MultiplayerUniverse(MultiplayerUniverse const& other) = delete;
        ~MultiplayerUniverse() = default;

        auto& event_bus() { return m_event_bus; };

        void register_packet_handlers(NetworkClient& client);
        void full_sync_states();

        bool should_block_starting_new_game() const { return m_should_block_starting_new_game; }
        app::Color local_player_color() const { return m_color; }
        std::optional<PlayerInfo> local_player() const;
        Network::WorldInfo const* get_world(int id) const;
        auto multiverse_info() const { return m_current_multiverse_info; }
        void report_player_ready(bool ready) const;
        void report_in_game_time(float in_game_time, bool is_finished) const;

        int player_count() const { return static_cast<int>(m_players.size()); }

        void report_player_save_guid(core::MoodGuid save_guid);

        UberStateHandler& uber_state_handler() { return m_uber_state_handler; }

        const std::optional<core::MoodGuid>& restrict_to_save_guid() const { return m_restrict_to_save_guid; };
        void set_restrict_to_save_guid(std::optional<core::MoodGuid> value) const;

        bool is_in_incorrect_save_file() const;
        void set_restrict_to_save_guid(const std::optional<core::MoodGuid>& value);

    private:
        struct MessageBoxStorage {
            std::optional<float> time;
        };

        void update();
        void on_load();
        void request_full_sync();

        void clear_current_multiverse_info();
        void handle_multiverse_info(std::shared_ptr<Network::MultiverseInfoMessage> const& message);
        void handle_authenticated(std::shared_ptr<Network::AuthenticatedMessage> const& message);
        void handle_visibility(std::shared_ptr<Network::VisibilityMessage> const& message) const;

        void update_player_world_position(std::string_view player_id, float x, float y, std::string_view ghost_frame_data);
        void update_player_map_position(std::string_view player_id, float x, float y);

        void uber_state_update(std::shared_ptr<Network::UberStateUpdateMessage> const& message);
        void uber_state_batch_update(std::shared_ptr<Network::UberStateBatchUpdateMessage> const& message);

        void print_text(std::shared_ptr<Network::PrintTextMessage> const& message);
        static void print_pickup(std::shared_ptr<Network::PrintPickupMessage> const& message);

        void process_set_save_guid_restrictions_message(Network::SetSaveGuidRestrictionsMessage& message);

        void initialize_game_sync(std::shared_ptr<Network::InitGameSyncMessage> const& message);
        void set_seed(std::shared_ptr<Network::SetSeedMessage> const& message);

        common::TimedMultiEventBus<Event> m_event_bus;

        std::vector<common::registration_handle_t> m_bus_handles;
        Network::MultiverseInfoMessage::GameHandlerType m_game_type = Network::MultiverseInfoMessage_GameHandlerType_Normal;
        std::shared_ptr<Network::MultiverseInfoMessage> m_current_multiverse_info;
        std::optional<Network::UniverseInfo const*> m_current_universe_info;
        std::vector<Network::WorldInfo const*> m_current_world_infos;

        std::unordered_map<std::string, PlayerInfo> m_players;
        std::unordered_map<std::string, std::unique_ptr<Player>> m_player_avatars;
        std::unordered_map<int, message_handle_ptr_t> m_message_boxes;

        UberStateHandler m_uber_state_handler;
        NetworkClient* m_client = nullptr;
        std::string m_id;
        std::string m_name;
        app::Color m_color = { 1.f, 1.f, 1.f, 1.f };
        bool m_should_block_starting_new_game = false;

        std::optional<core::MoodGuid> m_restrict_to_save_guid = std::nullopt;
        bool m_should_restrict_to_save_guid = false;
        std::optional<core::MoodGuid> m_report_player_save_guid = std::nullopt;
    };
} // namespace randomizer::online
