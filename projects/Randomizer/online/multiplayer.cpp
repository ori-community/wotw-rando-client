#include <online/multiplayer.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/dev/object_visualizer.h>
#include <Core/events/task.h>
#include <Core/utils/color.h>
#include <Core/utils/misc.h>

#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/types/AreaMapUI.h>

#include <algorithm>
#include <unordered_map>

namespace online {
    MultiplayerUniverse::MultiplayerUniverse() {
        m_bus_handles.emplace_back(core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [this](auto, auto) { update(); }));
        m_bus_handles.emplace_back(core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [this](auto, auto) { request_full_sync(); }));
        m_bus_handles.emplace_back(core::api::game::event_bus().register_handler(GameEvent::Respawn, EventTiming::After, [this](auto, auto) { request_full_sync(); }));
        m_bus_handles.emplace_back(core::api::game::event_bus().register_handler(GameEvent::FinishedLoadingCheckpoint, EventTiming::After, [this](auto, auto) { request_full_sync(); }));
        m_bus_handles.emplace_back(core::api::game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, [this](auto, auto) { on_load(); }));
        m_bus_handles.emplace_back(core::api::uber_states::notification_bus().register_handler(
            [this](auto params) {
                if (!m_uber_state_handler.should_sync(params.state, params.value)) {
                    return;
                }

                Network::UberStateUpdateMessage message;
                message.mutable_state()->set_group(static_cast<int>(params.state.group()));
                message.mutable_state()->set_state(params.state.state());
                message.set_value(params.state.get());
                m_client->websocket_send(Network::Packet_PacketID_UberStateUpdateMessage, message);
            }
        ));
    }

    void MultiplayerUniverse::register_packet_handlers(NetworkClient& client) {
        m_client = &client;
        client.register_handler<Network::MultiverseInfoMessage>(
            Network::Packet_PacketID_MultiverseInfoMessage,
            [this](auto const& message) { handle_multiverse_info(message); }
        );

        client.register_handler<Network::UpdatePlayerPositionMessage>(
            Network::Packet_PacketID_UpdatePlayerPositionMessage,
            [this](auto const& message) {
                update_player_world_position(message.playerid(), message.x(), message.y(), message.ghostframedata());
                update_player_map_position(message.playerid(), message.x(), message.y());
            }
        );

        client.register_handler<Network::UpdatePlayerWorldPositionMessage>(
            Network::Packet_PacketID_UpdatePlayerWorldPositionMessage,
            [this](auto const& message) {
                update_player_world_position(message.playerid(), message.x(), message.y(), message.ghostframedata());
            }
        );

        client.register_handler<Network::UpdatePlayerMapPositionMessage>(
            Network::Packet_PacketID_UpdatePlayerMapPositionMessage,
            [this](auto const& message) {
                update_player_map_position(message.playerid(), message.x(), message.y());
            }
        );

        client.register_handler<Network::AuthenticatedMessage>(
            Network::Packet_PacketID_AuthenticatedMessage,
            [this](auto const& message) { handle_authenticated(message); }
        );

        client.register_handler<Network::VisibilityMessage>(
            Network::Packet_PacketID_Visibility,
            [this](auto const& message) { handle_visibility(message); }
        );

        client.register_handler<Network::UberStateUpdateMessage>(
            Network::Packet_PacketID_UberStateUpdateMessage,
            [this](auto const& message) { uber_state_update(message); }
        );

        client.register_handler<Network::UberStateBatchUpdateMessage>(
            Network::Packet_PacketID_UberStateBatchUpdateMessage,
            [this](auto const& message) { uber_state_batch_update(message); }
        );

        client.register_handler<Network::PrintTextMessage>(
            Network::Packet_PacketID_PrintTextMessage,
            [this](auto const& message) { print_text(message); }
        );

        client.register_handler<Network::PrintPickupMessage>(
            Network::Packet_PacketID_PrintPickupMessage,
            [this](auto const& message) { print_pickup(message); }
        );

        client.register_handler<Network::InitBingoMessage>(
            Network::Packet_PacketID_InitBingoMessage,
            [this](auto const& message) { initialize_bingo(message); }
        );

        client.register_handler<Network::SetSeedMessage>(
            Network::Packet_PacketID_SetSeedMessage,
            [this](auto const& message) { set_seed(message); }
        );
    }

    void MultiplayerUniverse::full_sync_states() {
        // Randomizer.Debug($"Syncing {SyncedUberStates.Count} states", false);
        Network::UberStateBatchUpdateMessage message;
        auto const& states = m_uber_state_handler.get_synced_states();
        for (auto state : states) {
            auto update = message.mutable_updates()->Add();
            update->mutable_state()->set_group(static_cast<int>(state.group()));
            update->mutable_state()->set_state(state.state());
            update->set_value(state.get());
        }

        m_client->websocket_send(Network::Packet_PacketID_UberStateBatchUpdateMessage, message);
    }

    void MultiplayerUniverse::update() {
        m_client->update();

        for (auto& player : m_player_avatars) {
            player.second->update();
        }

        auto position = core::api::game::player::get_position();
        std::string data;
        if (ghosts::has_new_frame_data()) {
            auto raw_data = ghosts::get_frame_data();
            std::transform(raw_data.begin(), raw_data.end(), std::back_inserter(data), [](std::byte b) {
                return static_cast<char>(b);
            });
        }

        Network::PlayerPositionMessage message;
        message.set_x(position.x);
        message.set_y(position.y);
        message.set_ghostframedata(data);
        m_client->udp_send(Network::Packet_PacketID_PlayerPositionMessage, message);

        m_uber_state_handler.update();
    }

    void MultiplayerUniverse::request_full_sync() {
        if (!app::classes::GameStateMachine::get_IsGame()) {
            return;
        }

        core::events::schedule_task_for_next_update([this]() {
            full_sync_states();
        });
    }

    void MultiplayerUniverse::on_load() {
        for (auto& player : m_player_avatars) {
            player.second->recreate();
        }

        request_full_sync();
    }

    std::optional<MultiplayerUniverse::PlayerInfo> MultiplayerUniverse::local_player() const {
        auto it = m_players.find(m_id);
        return it != m_players.end() ? it->second : std::optional<MultiplayerUniverse::PlayerInfo>();
    }

    Network::UniverseInfo const* find_universe_with_player(Network::MultiverseInfoMessage const& message, std::string_view id) {
        for (auto const& u : message.universes()) {
            for (auto const& w : u.worlds()) {
                for (auto const& m : w.members()) {
                    if (m.id() == id) {
                        return &u;
                    }
                }
            }
        }

        return nullptr;
    }

    void MultiplayerUniverse::handle_multiverse_info(Network::MultiverseInfoMessage const& message) {
        m_last_multiverse_info = message;
        auto universe = find_universe_with_player(message, m_id);
        if (universe == nullptr) {
            return;
        }

        std::unordered_map<std::string, PlayerInfo> info_players;
        for (auto const& world : universe->worlds()) {
            for (auto const& member : world.members()) {
                auto& player = info_players[member.id()];
                player.universe_id = universe->id();
                player.world = world;
                player.user = member;
            }
        }

        std::unordered_map<std::string, PlayerInfo> to_add;
        for (auto& info_player : info_players) {
            if (info_player.first == m_id) {
                continue;
            }

            if (!m_players.contains(info_player.first)) {
                to_add[info_player.first] = info_player.second;
            }
        }

        std::unordered_map<std::string, PlayerInfo> to_remove;
        for (auto& player : m_players) {
            if (player.first == m_id) {
                continue;
            }

            if (!info_players.contains(player.first)) {
                to_remove[player.first] = player.second;
            }
        }

        for (auto& player : to_remove) {
            m_player_avatars.erase(player.first);
        }

        for (auto& player : to_add) {
            m_player_avatars.try_emplace(player.first, std::make_unique<Player>());
        }

        m_players = info_players;

        for (auto& player : m_players) {
            if (player.first == m_id) {
                continue;
            }

            auto& player_avatar = m_player_avatars.find(player.first)->second;
            player_avatar->set_online(player.second.user.has_connectedmultiverseid());
            player_avatar->set_color(utils::hex_string_to_color(player.second.world.color()));
        }

        if (message.has_visibility()) {
            handle_visibility(message.visibility());
        }

        auto area_map = app::classes::types::AreaMapUI::get_class()->static_fields->Instance;
        if (area_map != nullptr && il2cpp::unity::is_valid(area_map->fields._PlayerPositionMarker_k__BackingField)) {
            // TODO: Add this to some sort of init thing.
            if (m_color.r < 0.99f || m_color.g < 0.99f || m_color.b < 0.99f || m_color.a < 0.99f) {
                utils::set_color(area_map->fields._PlayerPositionMarker_k__BackingField, m_color);
            }
        }

        // TODO: clearGameHandlers();
        m_game_type = message.handlertype();
        switch (m_game_type) {
            case Network::MultiverseInfoMessage_GameHandlerType_Normal:
                break;
            case Network::MultiverseInfoMessage_GameHandlerType_HideAndSeek: {
                Network::HideAndSeekGameHandlerClientInfo handler;
                handler.ParseFromString(message.handlerinfo());
                // TODO: HideAndSeek.ParseHandlerInfo(info);
                break;
            }
            case Network::MultiverseInfoMessage_GameHandlerType_Infection: {
                Network::InfectionGameHandlerClientInfo handler;
                handler.ParseFromString(message.handlerinfo());
                // TODO: Infection.ParseHandlerInfo(info);
                break;
            }
            default:
                break;
        }
    }

    void MultiplayerUniverse::handle_authenticated(Network::AuthenticatedMessage const& message) {
        m_id = message.user().id();
        m_name = message.user().name();
        if (m_last_multiverse_info.has_value()) {
            handle_multiverse_info(m_last_multiverse_info.value());
        }

        core::events::schedule_task_for_next_update([this]() {
            full_sync_states();
        });
    }

    void MultiplayerUniverse::handle_visibility(Network::VisibilityMessage const& message) {
        auto& hidden_in_world = message.hidden_in_world();
        auto& hidden_on_map = message.hidden_on_map();
        for (auto& player : m_player_avatars) {
            auto world = std::find(hidden_in_world.begin(), hidden_in_world.end(), player.first);
            player.second->set_visible_world(world == hidden_in_world.end());

            auto map = std::find(hidden_on_map.begin(), hidden_on_map.end(), player.first);
            player.second->set_visible_map(map == hidden_on_map.end());
        }
    }

    void MultiplayerUniverse::update_player_world_position(std::string_view player_id, float x, float y, std::string_view ghost_frame_data) {
        // InterOp.Multiplayer.update_player_position(id, x, y, ghostFrameData, ghostFrameData.Length);
        auto it = m_player_avatars.find(std::string(player_id));
        if (it != m_player_avatars.end()) {
            it->second->update_ghost(ghost_frame_data);
        }
    }

    void MultiplayerUniverse::update_player_map_position(std::string_view player_id, float x, float y) {
        auto it = m_player_avatars.find(std::string(player_id));
        if (it != m_player_avatars.end()) {
            it->second->update_map_position(x, y);
        }
    }

    void MultiplayerUniverse::uber_state_update(Network::UberStateUpdateMessage const& message) {
        if (!app::classes::GameStateMachine::get_IsGame()) {
            return;
        }

        auto state = message.state();
        m_uber_state_handler.change_uber_state(
            core::api::uber_states::UberState(state.group(), state.state()),
            message.value()
        );
    }

    void MultiplayerUniverse::uber_state_batch_update(Network::UberStateBatchUpdateMessage const& message) {
        if (!app::classes::GameStateMachine::get_IsGame()) {
            return;
        }

        if (message.resetbeforeapplying()) {
            // TODO: Fix this.
            // csharp_bridge::reset_uber_state_value_store();
        }

        for (auto const& update : message.updates()) {
            auto state = update.state();
            m_uber_state_handler.change_uber_state(
                core::api::uber_states::UberState(state.group(), state.state()),
                update.value()
            );
        }
    }

    void MultiplayerUniverse::print_text(Network::PrintTextMessage const& message) {
        // var message = PrintTextMessage.Parser.ParseFrom(packet.Packet_);
        // MessageController.ShowMessage(
        //     text
        //     : message.Text,
        //       time
        //     : message.HasTime ? new float ? (message.Time) : null,
        //       position
        //                       : new Vector2(message.Position),
        //       id
        //     : message.HasId ? message.Id : -1,
        //       showsBox
        //     : message.WithBox,
        //       alignment
        //     : (Alignment)message.Alignment,
        //       vertical
        //     : (VerticalAnchor)message.VerticalAnchor,
        //       horizontal
        //     : (HorizontalAnchor)message.HorizontalAnchor,
        //       screen
        //     : (ScreenPosition)message.ScreenPosition,
        //       queue
        //     : message.Queue,
        //       prioritized
        //     : message.Prioritized,
        //       log
        //     : true,
        //       useWorldCoordinates
        //     : message.UseInGameCoordinates
        // );
    }

    void MultiplayerUniverse::print_pickup(Network::PrintPickupMessage const& message) {
        // var message = PrintPickupMessage.Parser.ParseFrom(packet.Packet_);
        // MessageController.ShowPickup(
        //     text
        //     : message.Text,
        //       time
        //     : message.Time,
        //       prioritized
        //     : message.Prioritized,
        //       pickupPosition
        //     : message.PickupPosition != null ? new Vector2 ? (new Vector2(message.PickupPosition)) : null,
        //       log
        //                                      : true
        // );
    }

    void MultiplayerUniverse::initialize_bingo(Network::InitBingoMessage const& message) {
        std::unordered_set<core::api::uber_states::UberState> states;
        for (auto& id : message.uberid()) {
            states.emplace(id.group(), id.state());
        }

        m_uber_state_handler.set_synced_states(std::move(states));
    }

    void MultiplayerUniverse::set_seed(Network::SetSeedMessage const& message) {
        // csharp_bridge::set_seed(message.seed());
        // UberStateQueue.Add(new UberStateController.SetSeedCommand(seedMessage));
    }

    // void MultiplayerUniverse::player_used_catch(Network::PlayerUsedCatchingAbility const& message) {
    //
    // }
    //
    // void MultiplayerUniverse::player_caught(Network::PlayerCaught const& message) {
    //
    // }
} // namespace online