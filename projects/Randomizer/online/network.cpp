#include <Randomizer/online/network.h>

#include <Common/ext.h>
#include <Core/api/game/game.h>
#include <Core/events/task.h>
#include <Modloader/modloader.h>

#include <ixwebsocket/IXNetSystem.h>
#include <ixwebsocket/IXWebSocket.h>

#include <Randomizer/randomizer.h>
#include <fstream>

namespace randomizer::online {
    namespace {
        auto on_injected = modloader::event_bus().register_handler(
            ModloaderEvent::InjectionComplete,
            [](auto) {
                ix::initNetSystem();
            }
        );

        auto on_after_shutdown = core::api::game::event_bus().register_handler(
            GameEvent::Shutdown,
            EventTiming::After,
            [](auto, auto) {
                ix::uninitNetSystem();
            }
        );
    } // namespace

    NetworkClient::NetworkClient() :
        m_udp_socket(1024)
        , m_reconnect_websocket(false)
        , m_reopen_udp(false)
        , m_udp_id(-1) {
        m_websocket.setOnMessageCallback([this](const auto& msg) { websocket_handle_message(msg); });
        m_udp_socket.set_packet_handler([this](auto const& data) { udp_handle_message(data); });
        m_udp_socket.set_error_handler([this](auto error) { udp_handle_error(error); });
    }

    NetworkClient::~NetworkClient() = default;

    void NetworkClient::websocket_connect(std::string_view url) {
        m_websocket.stop();
        m_websocket.setUrl(std::string(url));
        m_websocket.setPingInterval(30);
        m_websocket.disableAutomaticReconnection();
        m_websocket.start();
        m_reconnect_websocket = true;
        modloader::info("network_client", "Network client connected.");
    }

    bool NetworkClient::websocket_connected() const {
        return m_websocket.getReadyState() == ix::ReadyState::Open;
    }

    void NetworkClient::udp_open(std::string_view server, int port) {
        auto result = m_udp_socket.open(server, port);
        if (result != modloader::UDPSocket::UDPError::Ok) {
            modloader::warn("network_client", "Failed to open udp socket.");
        }

        m_reopen_udp = true;
        ping_udp();
    }

    bool NetworkClient::udp_is_open() const {
        return m_udp_socket.is_open();
    }

    void NetworkClient::disconnect() {
        m_reconnect_websocket = false;
        m_reopen_udp = false;
        m_websocket.stop();
        m_udp_socket.close();
        modloader::info("network_client", "Network client disconnected.");
        core::events::schedule_task_for_next_update([&]{ m_event_bus.trigger_event(State::Closed); });
    }

    void NetworkClient::websocket_handle_message(ix::WebSocketMessagePtr const& msg) {
        switch (msg->type) {
            case ix::WebSocketMessageType::Message: {
                Network::Packet packet;
                if (!packet.ParseFromString(msg->str)) {
                    return;
                }

                if (packet.id() == Network::Packet_PacketID_AuthenticatedMessage) {
                    core::events::schedule_task_for_next_update([&]{ m_event_bus.trigger_event(State::Connected); });
                    Network::AuthenticatedMessage auth;
                    auth.ParseFromString(packet.packet());
                    m_udp_id = auth.udpid();
                    m_udp_key = std::vector<char>(auth.udpkey().begin(), auth.udpkey().end());
                }

                std::lock_guard guard(m_packet_mutex);
                m_packets.push_back(packet);
                break;
            }
            case ix::WebSocketMessageType::Open: {
                modloader::info("network_client", "Connected to server");
                // TODO: Get jwt from ipc with launcher.
                Network::AuthenticateMessage auth;
                auth.set_jwt(get_jwt());
                auth.set_client_version(randomizer::randomizer_version().to_string());
                websocket_send(Network::Packet_PacketID_AuthenticateMessage, auth);
                core::events::schedule_task_for_next_update([&]{ m_event_bus.trigger_event(State::Authenticating); });
                if (m_status_listener) {
                    m_status_listener(
                        {
                            .type = StatusType::WebsocketConnected,
                            .info = "Websocket connected",
                        }
                    );
                }
                break;
            }
            case ix::WebSocketMessageType::Close: {
                auto closed_reason = std::format("websocket closed '{}': {}", msg->closeInfo.code, msg->closeInfo.reason.c_str());
                modloader::warn(
                    "network_client",
                    closed_reason
                );

                if (m_reconnect_websocket) {
                    // If we are in here we did not expect this disconnect, underlying socket will auto reconnect.
                    core::events::schedule_task_for_next_update([&]{ m_event_bus.trigger_event(State::Reconnecting); });
                    core::events::schedule_task(3.f, [this] {
                        if (m_reconnect_websocket && !websocket_connected()) {
                            websocket_connect(m_websocket.getUrl());
                        }
                    });
                    if (m_status_listener) {
                        m_status_listener(
                            {
                                .type = StatusType::WebsocketClosedUnexpected,
                                .info = closed_reason,
                            }
                        );
                    }
                } else {
                    core::events::schedule_task_for_next_update([&]{ m_event_bus.trigger_event(State::Closed); });
                    if (m_status_listener) {
                        m_status_listener(
                            {
                                .type = StatusType::WebsocketClosed,
                                .info = closed_reason,
                            }
                        );
                    }
                }
                break;
            }
            case ix::WebSocketMessageType::Error:
                core::events::schedule_task(
                    10.f,
                    [this]() {
                        if (m_reconnect_websocket) {
                            websocket_connect(m_websocket.getUrl());
                        }
                    }
                );

                core::events::schedule_task_for_next_update([&]{ m_event_bus.trigger_event(State::Reconnecting); });

                if (m_status_listener) {
                    m_status_listener(
                        {
                            .type = StatusType::WebsocketError,
                            .info = msg->errorInfo.reason,
                        }
                    );
                }
                break;
            case ix::WebSocketMessageType::Ping:
            case ix::WebSocketMessageType::Pong:
            case ix::WebSocketMessageType::Fragment:
                return;
        }
    }

    void NetworkClient::update() {
        std::vector<Network::Packet> local_packets; {
            std::lock_guard guard(m_packet_mutex);
            local_packets.insert(local_packets.end(), m_packets.begin(), m_packets.end());
            m_packets.clear();
        }

        for (auto const& packet: local_packets) {
            auto packet_callbacks = m_callbacks[packet.id()];
            for (auto const& callback: packet_callbacks) {
                callback(packet.id(), packet.packet());
            }
        }
    }

    void encrypt_decrypt(std::vector<char>& data, std::vector<char> const& key) {
        for (auto i = 0; i < data.size(); ++i) {
            data[i] = static_cast<char>(data[i] ^ key[i % key.size()]);
        }
    }

    void NetworkClient::udp_handle_message(std::vector<char> const& msg) {
        if (msg.empty()) {
            return;
        }

        if (m_udp_key.empty()) {
            modloader::warn("network_client", "Received a udp message while having no udp key.");
            return;
        }

        Network::UdpPacket udp_packet;
        udp_packet.ParseFromArray(msg.data(), static_cast<int>(msg.size()));
        auto& packet_ref = udp_packet.encryptedpacket();
        std::vector<char> packet_data(packet_ref.begin(), packet_ref.end());
        encrypt_decrypt(packet_data, m_udp_key);
        Network::Packet packet;
        packet.ParseFromArray(packet_data.data(), static_cast<int>(packet_data.size()));

        std::lock_guard guard(m_packet_mutex);
        m_packets.push_back(packet);
    }

    void NetworkClient::udp_handle_error(int error) {
        if (m_status_listener) {
            m_status_listener(
                {
                    .type = StatusType::UdpError,
                    .info = std::format("Udp socket encountered error ({}), reconnecting.", error),
                }
            );
        }

        if (m_reopen_udp) {
            core::events::schedule_task(
                10.f,
                [this]() {
                    udp_open(m_udp_socket.get_server(), m_udp_socket.get_port());
                }
            );
        }
    }

    void NetworkClient::ping_udp() {
        if (udp_is_open()) {
            m_udp_socket.send({});
            core::events::schedule_task(20.f, [this]() { ping_udp(); });
        }
    }

    std::string get_jwt() {
        std::ifstream jwt_file(modloader::base_path() / ".jwt");
        std::stringstream output;
        output << jwt_file.rdbuf();
        std::string jwt = output.str();
        trim(jwt);
        return jwt;
    }

    void NetworkClient::register_handler(Network::Packet_PacketID type, handler_callback const& handler) {
        m_callbacks[type].push_back(handler);
    }

    bool NetworkClient::websocket_send(Network::Packet const& packet) {
        if (!websocket_connected()) {
            return false;
        }

        auto info = m_websocket.send(packet.SerializeAsString(), true);
        if (!info.success) {
            modloader::warn("network_client", "Failed to send websocket packet.");
            if (m_status_listener) {
                m_status_listener(
                    {
                        .type = StatusType::WebsocketSendError,
                        .info = std::format("Failed to send websocket packet."),
                    }
                );
            }

            return false;
        }

        return true;
    }

    void NetworkClient::udp_send(Network::Packet const& packet) {
        if (m_udp_key.empty() || !udp_is_open()) {
            return;
        }

        Network::UdpPacket udp_packet;
        udp_packet.set_udpid(m_udp_id);

        auto str_packet = packet.SerializeAsString();
        std::vector<char> encrypted_packet(str_packet.begin(), str_packet.end());
        encrypt_decrypt(encrypted_packet, m_udp_key);
        udp_packet.set_encryptedpacket(std::string(encrypted_packet.data(), encrypted_packet.size()));

        auto serialized_encrypted_packet = udp_packet.SerializeAsString();
        m_udp_socket.send(std::span<char>{serialized_encrypted_packet});
    }
} // namespace randomizer::online
