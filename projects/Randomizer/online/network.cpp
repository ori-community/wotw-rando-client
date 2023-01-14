#include <online/network.h>

#include <Common/ext.h>
#include <Core/events/task.h>
#include <Modloader/modloader.h>

#include <ixwebsocket/IXNetSystem.h>
#include <ixwebsocket/IXUserAgent.h>
#include <ixwebsocket/IXWebSocket.h>

#include <fstream>

namespace online {
    namespace {
        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            ix::initNetSystem();
        });
    } // namespace

    NetworkClient::NetworkClient()
            : udp_socket(1024)
            , reconnect_websocket(false)
            , reopen_udp(false)
            , udp_id(-1) {
        websocket.setOnMessageCallback([this](const auto& msg) { websocket_handle_message(msg); });
        udp_socket.set_packet_handler([this](auto const& data) { udp_handle_message(data); });
        udp_socket.set_error_handler([this](auto error) { udp_handle_error(error); });
    }

    NetworkClient::~NetworkClient() = default;

    void NetworkClient::websocket_connect(std::string_view url) {
        websocket.setUrl(std::string(url));
        websocket.setPingInterval(30);
        websocket.start();
        reconnect_websocket = true;
    }

    bool NetworkClient::websocket_connected() const {
        return websocket.getReadyState() == ix::ReadyState::Open;
    }

    void NetworkClient::udp_open(std::string_view server, int port) {
        auto result = udp_socket.open(server, port);
        if (result != modloader::UDPSocket::UDPError::Ok) {
            modloader::trace(modloader::MessageType::Warning, 0, "network_client", "Failed to open udp socket.");
        }

        reopen_udp = true;
        ping_udp();
    }

    bool NetworkClient::udp_is_open() const {
        return udp_socket.is_open();
    }

    void NetworkClient::disconnect() {
        reconnect_websocket = false;
        reopen_udp = false;
        websocket.close();
        udp_socket.close();
    }

    void NetworkClient::websocket_handle_message(ix::WebSocketMessagePtr const& msg) {
        switch (msg->type) {
            case ix::WebSocketMessageType::Message: {
                Network::Packet packet;
                if (!packet.ParseFromString(msg->str))
                    return;

                if (packet.id() == Network::Packet_PacketID_AuthenticatedMessage) {
                    Network::AuthenticatedMessage auth;
                    auth.ParseFromString(packet.packet());
                    udp_id = auth.udpid();
                    udp_key = std::vector<char>(auth.udpkey().begin(), auth.udpkey().end());
                }

                packet_mutex.lock();
                packets.push_back(packet);
                packet_mutex.unlock();
                break;
            }
            case ix::WebSocketMessageType::Open: {
                modloader::trace(modloader::MessageType::Info, 3, "network_client", "Connected to server");
                // TODO: Get jwt from ipc with laucher.
                std::ifstream jwt_file(modloader::base_path / ".jwt");
                std::stringstream output;
                output << jwt_file.rdbuf();
                std::string jwt = output.str();
                trim(jwt);

                Network::AuthenticateMessage auth;
                auth.set_jwt(jwt);
                websocket_send(Network::Packet_PacketID_AuthenticateMessage, auth);
                break;
            }
            case ix::WebSocketMessageType::Close:
                // TODO: Add a ingame message for this.
                modloader::trace(
                    modloader::MessageType::Info,
                    2,
                    "network_client",
                    fmt::format("websocket closed '{}': {}", msg->closeInfo.code, msg->closeInfo.reason.c_str())
                );

                if (reconnect_websocket) {
                    // If we are in here we did not expect this disconnect.
                    // TODO: Show ingame disconnect message.
                    core::events::schedule_task(5.f, [this]() {
                        websocket_connect(websocket.getUrl());
                    });
                }
                break;
            case ix::WebSocketMessageType::Error:
                // TODO: Add a ingame message for this.
                //    Randomizer.Error("WebSocket", $"{e} {e?.Exception}", false);
                core::events::schedule_task(10.f, [this]() {
                    websocket_connect(websocket.getUrl());
                });
                break;
            case ix::WebSocketMessageType::Ping:
            case ix::WebSocketMessageType::Pong:
            case ix::WebSocketMessageType::Fragment:
                return;
        }
    }

    void NetworkClient::update() {
        packet_mutex.lock();
        auto local_packets = packets;
        packets.clear();
        packet_mutex.unlock();

        for (auto const& packet : local_packets) {
            auto packet_callbacks = callbacks[packet.id()];
            for (auto callback : packet_callbacks)
                callback(packet.id(), packet.packet());
        }
    }

    void encrypt_decrypt(std::vector<char>& data, std::vector<char> const& key) {
        for (auto i = 0; i < data.size(); ++i)
            data[i] ^= key[i % key.size()];
    }

    void NetworkClient::udp_handle_message(std::vector<char> const& msg) {
        if (msg.empty()) {
            return;
        }

        if (udp_key.empty()) {
            modloader::warn("network_client", "Received a udp message while having no udp key.");
            return;
        }

        Network::UdpPacket udp_packet;
        udp_packet.ParseFromArray(msg.data(), msg.size());
        auto& packet_ref = udp_packet.encryptedpacket();
        std::vector<char> packet(packet_ref.begin(), packet_ref.end());
        encrypt_decrypt(packet, udp_key);
    }

    void NetworkClient::udp_handle_error(int error) {
        // TODO: Add a ingame message for this.
        //    Randomizer.Error("UDP", $"{e} {e?.Exception}", false);
        if (reopen_udp) {
            core::events::schedule_task(10.f, [this]() {
                udp_open(udp_socket.get_server(), udp_socket.get_port());
            });
        }
    }

    void NetworkClient::ping_udp() {
        if (udp_is_open()) {
            udp_socket.send({});
            core::events::schedule_task(20.f, [this]() {
                ping_udp();
            });
        }
    }

    void NetworkClient::register_handler(Network::Packet_PacketID type, handler_callback handler) {
        callbacks[type].push_back(handler);
    }

    void NetworkClient::websocket_send(Network::Packet const& packet) {
        auto info = websocket.send(packet.SerializeAsString(), true);
        if (!info.success) {
            modloader::warn("network_client", "Failed to send websocket packet.");
        }
    }

    void NetworkClient::udp_send(Network::Packet const& packet) {
        if (udp_key.empty()) {
            return;
        }

        Network::UdpPacket udp_packet;
        udp_packet.set_udpid(udp_id);

        auto str_packet = packet.SerializeAsString();
        std::vector<char> encrypted_packet(str_packet.begin(), str_packet.end());
        encrypt_decrypt(encrypted_packet, udp_key);
        udp_packet.set_encryptedpacket(std::string(encrypted_packet.data(), encrypted_packet.size()));

        auto serialized_encrypted_packet = udp_packet.SerializeAsString();
        udp_socket.send(std::span<char>{ serialized_encrypted_packet });
    }
} // namespace online
