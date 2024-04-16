#include <Randomizer/online/multiplayer.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/api/uber_states/uber_state_handlers.h>
#include <Core/core.h>
#include <Core/dev/object_visualizer.h>
#include <Core/events/task.h>
#include <Core/utils/color.h>
#include <Core/utils/misc.h>

#include <Modloader/app/methods/GameStateMachine.h>
#include <Modloader/app/types/AreaMapUI.h>

#include <Core/api/game/debug_menu.h>
#include <Core/save_meta/save_meta.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/stats/game_stats.h>
#include <Randomizer/tracking/game_tracker.h>
#include <algorithm>
#include <unordered_map>

namespace randomizer::online {
    template<class Msg, std::enable_if_t<std::is_base_of_v<google::protobuf::Message, Msg>>>
    std::unique_ptr<Msg> clone_protobuf_message(const Msg* msg) {
        std::unique_ptr<Msg> p(msg->New());
        p->CopyFrom(*msg);
        return p;
    }

    MultiplayerUniverse::MultiplayerUniverse() {
        m_bus_handles.emplace_back(core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [this](auto, auto) { update(); }));
        m_bus_handles.emplace_back(core::api::game::event_bus().register_handler(GameEvent::NewGameInitialized, EventTiming::After, [this](auto, auto) { request_full_sync(); }));
        m_bus_handles.emplace_back(core::api::game::event_bus().register_handler(GameEvent::Respawn, EventTiming::After, [this](auto, auto) { request_full_sync(); }));
        m_bus_handles.emplace_back(core::api::game::event_bus().register_handler(GameEvent::RestoreCheckpoint, EventTiming::After, [this](auto, auto) { request_full_sync(); }));
        m_bus_handles.emplace_back(core::api::game::event_bus().register_handler(GameEvent::FinishedLoadingSave, EventTiming::After, [this](auto, auto) { on_load(); }));
        m_bus_handles.emplace_back(core::api::uber_states::notification_bus().register_handler([this](auto params) {
            if (is_in_incorrect_save_file() || !m_uber_state_handler.should_sync(params.state, params.previous_value)) {
                return;
            }

            Network::UberStateUpdateMessage message;
            message.mutable_state()->set_group(static_cast<int>(params.state.group()));
            message.mutable_state()->set_state(params.state.state());
            message.set_value(params.state.get());
            m_client->websocket_send(Network::Packet_PacketID_UberStateUpdateMessage, message);
        }));
    }

    void MultiplayerUniverse::register_packet_handlers(NetworkClient& client) {
        m_client = &client;
        client.register_handler<Network::MultiverseInfoMessage>(Network::Packet_PacketID_MultiverseInfoMessage, [this](auto const& message) { handle_multiverse_info(message); });

        client.register_handler<Network::UpdatePlayerPositionMessage>(Network::Packet_PacketID_UpdatePlayerPositionMessage, [this](auto const& message) {
            update_player_world_position(message->playerid(), message->x(), message->y(), message->ghostframedata());
            update_player_map_position(message->playerid(), message->x(), message->y());
        });

        client.register_handler<Network::UpdatePlayerWorldPositionMessage>(Network::Packet_PacketID_UpdatePlayerWorldPositionMessage, [this](auto const& message) {
            update_player_world_position(message->playerid(), message->x(), message->y(), message->ghostframedata());
        });

        client.register_handler<Network::UpdatePlayerMapPositionMessage>(Network::Packet_PacketID_UpdatePlayerMapPositionMessage, [this](auto const& message) {
            update_player_map_position(message->playerid(), message->x(), message->y());
        });

        client.register_handler<Network::AuthenticatedMessage>(Network::Packet_PacketID_AuthenticatedMessage, [this](auto const& message) { handle_authenticated(message); });

        client.register_handler<Network::UberStateUpdateMessage>(Network::Packet_PacketID_UberStateUpdateMessage, [this](auto const& message) { uber_state_update(message); });

        client.register_handler<Network::UberStateBatchUpdateMessage>(Network::Packet_PacketID_UberStateBatchUpdateMessage, [this](auto const& message) { uber_state_batch_update(message); });

        client.register_handler<Network::PrintTextMessage>(Network::Packet_PacketID_PrintTextMessage, [this](auto const& message) { print_text(message); });

        client.register_handler<Network::PrintPickupMessage>(Network::Packet_PacketID_PrintPickupMessage, [](auto const& message) { print_pickup(message); });

        client.register_handler<Network::InitGameSyncMessage>(Network::Packet_PacketID_InitGameSyncMessage, [this](auto const& message) { initialize_game_sync(message); });

        client.register_handler<Network::SetSeedMessage>(Network::Packet_PacketID_SetSeedMessage, [this](auto const& message) { set_seed(message); });

        client.register_handler<Network::SetBlockStartingNewGameMessage>(Network::Packet_PacketID_SetBlockStartingNewGameMessage, [this](auto const& message) {
            set_should_block_starting_new_game(message->blockstartingnewgame());
        });

        client.register_handler<Network::SetSaveGuidRestrictionsMessage>(Network::Packet_PacketID_SetSaveGuidRestrictionsMessage, [this](auto const& message) {
            process_set_save_guid_restrictions_message(*message);
        });

        client.register_handler<Network::SetEnforceSeedDifficultyMessage>(Network::Packet_PacketID_SetEnforceSeedDifficultyMessage, [this](auto const& message) {
            process_set_enforce_seed_difficulty_message(*message);
        });

        client.register_handler<Network::OverrideInGameTimeMessage>(Network::Packet_PacketID_OverrideInGameTimeMessage, [this](auto const& message) {
            randomizer::timing::override_in_game_time(message->in_game_time());
        });
    }

    void MultiplayerUniverse::full_sync_states() {
        if (is_in_incorrect_save_file()) {
            return;
        }

        Network::UberStateBatchUpdateMessage message;
        auto const& states = m_uber_state_handler.get_synced_states();

        for (auto state: states) {
            const auto value = state.get();
            if (!uber_state_handler().should_sync(state, value)) {
                continue;
            }

            const auto update = message.mutable_updates()->Add();
            update->mutable_state()->set_group(static_cast<int>(state.group()));
            update->mutable_state()->set_state(state.state());
            update->set_value(value);
        }

        m_client->websocket_send(Network::Packet_PacketID_UberStateBatchUpdateMessage, message);
    }

    void MultiplayerUniverse::update() {
        m_client->update();

        for (auto& player: m_player_avatars) {
            player.second->update();
        }

        auto position = core::api::game::player::get_position();
        std::string data;
        if (ghosts::has_new_frame_data()) {
            auto raw_data = ghosts::get_frame_data();
            std::transform(raw_data.begin(), raw_data.end(), std::back_inserter(data), [](std::byte b) { return static_cast<char>(b); });
        }

        Network::PlayerPositionMessage message;
        message.set_x(position.x);
        message.set_y(position.y);
        message.set_ghostframedata(data);
        m_client->udp_send(Network::Packet_PacketID_PlayerPositionMessage, message);

        m_uber_state_handler.update();

        if (m_report_player_save_guid.has_value() && m_client->websocket_connected()) {
            Network::SetPlayerSaveGuidMessage guid_message;
            guid_message.mutable_playersaveguid()->set_a(m_report_player_save_guid.value().A);
            guid_message.mutable_playersaveguid()->set_b(m_report_player_save_guid.value().B);
            guid_message.mutable_playersaveguid()->set_c(m_report_player_save_guid.value().C);
            guid_message.mutable_playersaveguid()->set_d(m_report_player_save_guid.value().D);

            const auto did_send = m_client->websocket_send(Network::Packet_PacketID_SetPlayerSaveGuidMessage, guid_message);

            if (did_send) {
                m_report_player_save_guid = std::nullopt;
            }
        }
    }

    void MultiplayerUniverse::request_full_sync() {
        if (!app::classes::GameStateMachine::get_IsGame()) {
            return;
        }

        core::events::schedule_task_for_next_update([this]() { full_sync_states(); });
    }

    void show_incorrect_save_message() {
        core::message_controller().queue_central({
            .text = core::Property<std::string>("The save file you have loaded is not associated with this multiplayer game.\nPlease exit to the main menu and create a new save file\nor load the correct one."),
            .duration = 8.f,
            .prioritized = true,
        });
    }

    void MultiplayerUniverse::on_load() {
        for (auto& player: m_player_avatars) {
            player.second->recreate();
        }

        if (is_in_incorrect_save_file()) {
            show_incorrect_save_message();
        }

        request_full_sync();
    }

    std::optional<MultiplayerUniverse::PlayerInfo> MultiplayerUniverse::local_player() const {
        auto it = m_players.find(m_id);
        return it != m_players.end() ? it->second : std::optional<MultiplayerUniverse::PlayerInfo>();
    }

    Network::WorldInfo const* MultiplayerUniverse::get_world(const int id) const { return id < 0 || id >= m_current_world_infos.size() ? nullptr : m_current_world_infos[id]; }

    void MultiplayerUniverse::report_player_ready(const bool ready) const {
        Network::ReportPlayerRaceReadyMessage message;
        message.set_raceready(ready);
        m_client->websocket_send(Network::Packet_PacketID_ReportPlayerRaceReadyMessage, message);
    }

    void MultiplayerUniverse::report_in_game_time(const float in_game_time, const bool is_finished) const {
        Network::ReportInGameTimeMessage message;
        message.set_in_game_time(in_game_time);
        message.set_is_finished(is_finished);
        m_client->websocket_send(Network::Packet_PacketID_ReportInGameTimeMessage, message);
    }

    void MultiplayerUniverse::report_player_save_guid(core::MoodGuid save_guid) {
        m_report_player_save_guid = save_guid;
    }

    Network::UniverseInfo const* find_universe_with_player(Network::MultiverseInfoMessage const& message, std::string_view id) {
        for (auto const& u: message.universes()) {
            for (auto const& w: u.worlds()) {
                for (auto const& m: w.memberships()) {
                    if (m.user().id() == id) {
                        return &u;
                    }
                }
            }
        }

        return nullptr;
    }

    void MultiplayerUniverse::clear_current_multiverse_info() {
        m_current_multiverse_info = nullptr;
        m_event_bus.trigger_event(Event::MultiverseUpdated, EventTiming::After);
    }

    void MultiplayerUniverse::handle_multiverse_info(const std::shared_ptr<Network::MultiverseInfoMessage>& message) {
        m_event_bus.trigger_event(Event::MultiverseUpdated, EventTiming::Before);

        m_current_multiverse_info = message;

        auto universe = find_universe_with_player(*m_current_multiverse_info, m_id);
        if (universe != nullptr) {
            m_current_universe_info = universe;
            m_current_world_infos.clear();
            std::unordered_map<std::string, PlayerInfo> info_players;
            for (auto& world: universe->worlds()) {
                m_current_world_infos.push_back(&world);
                for (auto const& memberhip: world.memberships()) {
                    auto& player = info_players[memberhip.user().id()];
                    player.universe_id = universe->id();
                    player.world = world;
                    player.universe = *universe;
                    player.user = memberhip.user();
                }
            }

            std::unordered_map<std::string, PlayerInfo> to_add;
            for (auto& info_player: info_players) {
                if (info_player.first == m_id) {
                    continue;
                }

                if (!m_players.contains(info_player.first)) {
                    to_add[info_player.first] = info_player.second;
                }
            }

            std::unordered_map<std::string, PlayerInfo> to_remove;
            for (auto& player: m_players) {
                if (player.first == m_id) {
                    continue;
                }

                if (!info_players.contains(player.first)) {
                    to_remove[player.first] = player.second;
                }
            }

            for (const auto& id: to_remove | std::views::keys) {
                m_player_avatars.erase(id);
            }

            for (const auto& id: to_add | std::views::keys) {
                m_player_avatars.try_emplace(id, std::make_unique<Player>(id));
            }

            std::unordered_set<std::string> connected_user_ids;
            connected_user_ids.insert_range(message->connecteduserids());

            m_players = info_players;
            for (auto& [id, player]: m_players) {
                if (id == m_id) {
                    continue;
                }

                const auto& player_avatar = m_player_avatars.find(id)->second;
                player_avatar->set_name(player.user.name());
                player_avatar->set_online(connected_user_ids.contains(player.user.id()));
                player_avatar->set_color(utils::hex_string_to_color(player.world.color(), true));
            }

            // Currently broken as the server never sends it.
            // if (message.has_visibility()) {
            //     handle_visibility(message.visibility());
            // }

            auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
            if (area_map != nullptr && il2cpp::unity::is_valid(area_map->fields._PlayerPositionMarker_k__BackingField)) {
                // TODO: Add this to some sort of init thing.
                if (m_color.r < 0.99f || m_color.g < 0.99f || m_color.b < 0.99f || m_color.a < 0.99f) {
                    utils::set_color(area_map->fields._PlayerPositionMarker_k__BackingField, m_color);
                }
            }
        }

        m_event_bus.trigger_event(Event::MultiverseUpdated, EventTiming::After);
    }

    void MultiplayerUniverse::handle_authenticated(std::shared_ptr<Network::AuthenticatedMessage> const& message) {
        m_id = message->user().id();
        m_name = message->user().name();

        if (m_current_multiverse_info != nullptr) {
            handle_multiverse_info(m_current_multiverse_info);
        }
    }

    // void MultiplayerUniverse::handle_visibility(std::shared_ptr<Network::VisibilityMessage> const& message) const {
    //     auto const& hidden_in_world = message->hidden_in_world();
    //     auto const& hidden_on_map = message->hidden_on_map();
    //     for (const auto& [name, avatar]: m_player_avatars) {
    //         auto world = std::ranges::find(hidden_in_world, name);
    //         avatar->set_visible_world(world == hidden_in_world.end());
    //
    //         auto map = std::ranges::find(hidden_on_map, name);
    //         avatar->set_visible_map(map == hidden_on_map.end());
    //     }
    // }

    void MultiplayerUniverse::update_player_world_position(std::string_view player_id, float x, float y, std::string_view ghost_frame_data) {
        // InterOp.Multiplayer.update_player_position(id, x, y, ghostFrameData, ghostFrameData.Length);
        const auto it = m_player_avatars.find(std::string(player_id));
        if (it != m_player_avatars.end()) {
            it->second->update_ghost(ghost_frame_data);
        }
    }

    void MultiplayerUniverse::update_player_map_position(std::string_view player_id, float x, float y) {
        const auto it = m_player_avatars.find(std::string(player_id));
        if (it != m_player_avatars.end()) {
            it->second->update_map_position(x, y);
        }
    }

    void MultiplayerUniverse::uber_state_update(std::shared_ptr<Network::UberStateUpdateMessage> const& message) {
        if (!GameStateMachine::get_IsGame()) {
            return;
        }

        const auto& state = message->state();
        m_uber_state_handler.change_uber_state(core::api::uber_states::UberState(state.group(), state.state()), message->value());
    }

    void MultiplayerUniverse::uber_state_batch_update(std::shared_ptr<Network::UberStateBatchUpdateMessage> const& message) {
        if (!GameStateMachine::get_IsGame()) {
            return;
        }

        if (message->resetbeforeapplying()) {
            core::api::uber_states::clear();
        }

        for (auto const& update: message->updates()) {
            const auto& state = update.state();
            m_uber_state_handler.change_uber_state(core::api::uber_states::UberState(state.group(), state.state()), update.value());
        }
    }

    void MultiplayerUniverse::print_text(std::shared_ptr<Network::PrintTextMessage> const& message) {
        std::shared_ptr<core::api::messages::MessageBox> box = nullptr;
        if (message->has_id()) {
            auto it = m_message_boxes.find(message->id());
            if (it != m_message_boxes.end() && it->second->state != message_handle_t::MessageState::Finished) {
                box = it->second->message.lock();
                it->second->time_left = message->time();
            }
        }

        const bool is_constructed = box == nullptr;
        if (is_constructed) {
            box = std::make_shared<core::api::messages::MessageBox>();
        }

        app::Vector3 position{};
        if (message->has_position()) {
            const auto& pos2 = message->position();
            position.x = pos2.x();
            position.y = pos2.y();
        }

        box->text().process_and_set(message->text());
        box->position().set(position);
        box->screen_position().set(static_cast<core::api::messages::ScreenPosition>(message->screenposition()));
        box->alignment().set(static_cast<app::AlignmentMode__Enum>(message->alignment()));
        box->horizontal_anchor().set(static_cast<app::HorizontalAnchorMode__Enum>(message->horizontalanchor()));
        box->vertical_anchor().set(static_cast<app::VerticalAnchorMode__Enum>(message->verticalanchor()));
        box->use_world_coordinates().set(message->useingamecoordinates());
        box->fade_in().set(message->fadeinlength());
        box->fade_out().set(message->fadeoutlength());
        box->show_box().set(message->withbox());

        if (is_constructed) {
            auto sync = core::message_controller().queue(
                box,
                {
                    .duration = message->has_time() ? std::optional(message->time()) : std::nullopt,
                    .queue = message->has_queue() ? std::optional(message->queue()) : std::nullopt,
                    .prioritized = message->prioritized(),
                    .play_sound = message->withsound(),
                }
            );

            if (message->has_id()) {
                m_message_boxes[message->id()] = std::move(sync);
            }
        }
    }

    void MultiplayerUniverse::print_pickup(std::shared_ptr<Network::PrintPickupMessage> const& message) {
        auto const& position = message->pickupposition();
        core::message_controller().queue_central({
            .text = core::Property<std::string>(message->text()),
            .duration = message->time(),
            .prioritized = message->prioritized(),
            .pickup_position = app::Vector3{position.x(), position.y(), 0},
        });
    }

    void MultiplayerUniverse::process_set_save_guid_restrictions_message(const Network::SetSaveGuidRestrictionsMessage& message) {
        m_should_restrict_to_save_guid = message.shouldrestrictsaveguid();

        if (m_should_restrict_to_save_guid) {
            if (message.has_playersaveguid()) {
                const auto& save_guid = message.playersaveguid();
                core::MoodGuid guid(save_guid.a(), save_guid.b(), save_guid.c(), save_guid.d());
                m_restrict_to_save_guid = guid;
            }

            if (is_in_incorrect_save_file()) {
                show_incorrect_save_message();
            } else {
                request_full_sync();
            }
        }
    }

    void MultiplayerUniverse::process_set_enforce_seed_difficulty_message(const Network::SetEnforceSeedDifficultyMessage& message) {
        if (message.shouldenforceseeddifficulty() != m_should_enforce_seed_difficulty) {
            set_enforce_seed_difficulty(message.shouldenforceseeddifficulty());
        }
    }

    void MultiplayerUniverse::initialize_game_sync(std::shared_ptr<Network::InitGameSyncMessage> const& message) {
        core::api::game::debug_menu::set_should_prevent_cheats(message->preventcheats());
        if (message->preventcheats() && core::api::game::debug_menu::was_debug_active_this_session()) {
            randomizer::server_disconnect();
            core::message_controller().queue_central({
                .text = core::Property<std::string>::format(
                    "It is #forbidden# to play this game with #Debug Mode# enabled.\n"
                    "Please start the game without Debug Mode.\n"
                    "Disabling Debug Mode after starting the game is not enough because\n"
                    "it can have persistent effects on the game even after turning it off."
                ),
                .duration = 20.f,
                .prioritized = true,
            });
            return;
        }

        Network::SetSaveGuidRestrictionsMessage save_guid_restrictions_message = message->saveguidrestrictions();
        process_set_save_guid_restrictions_message(save_guid_restrictions_message);

        Network::SetEnforceSeedDifficultyMessage enforce_seed_difficulty_message = message->enforceseeddifficulty();
        process_set_enforce_seed_difficulty_message(enforce_seed_difficulty_message);

        std::unordered_set<core::api::uber_states::UberState> states;
        for (auto& id: message->uberid()) {
            states.emplace(id.group(), id.state());
        }

        m_uber_state_handler.set_synced_states(std::move(states));

        if (m_should_block_starting_new_game != message->blockstartingnewgame()) {
            m_event_bus.trigger_event(Event::ShouldBlockStartingNewGameChanged, EventTiming::Before);
            m_should_block_starting_new_game = message->blockstartingnewgame();
            m_event_bus.trigger_event(Event::ShouldBlockStartingNewGameChanged, EventTiming::After);
        }

        request_full_sync();
    }

    void MultiplayerUniverse::set_seed(std::shared_ptr<Network::SetSeedMessage> const& message) { seed::set_server_seed_content(message->seed_content()); }

    void MultiplayerUniverse::set_restrict_to_save_guid(const std::optional<core::MoodGuid>& value) { m_restrict_to_save_guid = value; }
    void MultiplayerUniverse::set_should_restrict_to_save_guid(bool value) { m_should_restrict_to_save_guid = value; }

    void MultiplayerUniverse::set_should_block_starting_new_game(bool value) {
        if (m_should_block_starting_new_game != value) {
            m_event_bus.trigger_event(Event::ShouldBlockStartingNewGameChanged, EventTiming::Before);
            m_should_block_starting_new_game = value;
            m_event_bus.trigger_event(Event::ShouldBlockStartingNewGameChanged, EventTiming::After);
        }
    }

    void MultiplayerUniverse::set_enforce_seed_difficulty(bool value) {
        m_event_bus.trigger_event(Event::ShouldEnforceSeedDifficultyChanged, EventTiming::Before);
        m_should_enforce_seed_difficulty = value;
        m_event_bus.trigger_event(Event::ShouldEnforceSeedDifficultyChanged, EventTiming::After);
    }

    bool MultiplayerUniverse::is_in_incorrect_save_file() const {
        if (!m_should_restrict_to_save_guid) {
            return false;
        }

        if (!GameStateMachine::get_IsGame()) {
            return false;
        }

        if (!m_restrict_to_save_guid.has_value()) {
            return true;
        }

        return m_restrict_to_save_guid.value() != core::save_meta::get_current_save_guid();
    }

    // void MultiplayerUniverse::player_used_catch(Network::PlayerUsedCatchingAbility const& message) {
    //
    // }
    //
    // void MultiplayerUniverse::player_caught(Network::PlayerCaught const& message) {
    //
    // }
} // namespace randomizer::online
