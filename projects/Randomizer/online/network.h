#pragma once

#include <string_view>
#include <vector>

#include <ixwebsocket/IXWebSocket.h>
#include <ixwebsocket/IXWebSocketMessage.h>

#include <proto/packets.pb.h>

#include <Modloader/udp_socket.h>

namespace online {
    class NetworkClient {
    public:
        using handler_callback = std::function<void(Network::Packet_PacketID, std::string)>;

        NetworkClient();
        ~NetworkClient();

        void websocket_connect(std::string_view url);
        bool websocket_want_connection() const { return reconnect_websocket; }
        bool websocket_connected() const;
        void websocket_send(Network::Packet const& packet);

        template <typename T>
        void websocket_send(Network::Packet_PacketID id, T const& data) {
            Network::Packet packet;
            packet.set_id(id);
            packet.set_packet(data.SerializeAsString());
            websocket_send(packet);
        }

        void udp_open(std::string_view server, int port);
        bool udp_is_open() const;
        void udp_send(Network::Packet const& packet);

        template <typename T>
        void udp_send(Network::Packet_PacketID id, T const& data) {
            Network::Packet packet;
            packet.set_id(id);
            packet.set_packet(data.SerializeAsString());
            udp_send(packet);
        }

        void disconnect();
        bool wants_connection() { return reconnect_websocket; }

        void update();
        void register_handler(Network::Packet_PacketID packet, handler_callback handler);

        template <typename T>
        void register_handler(Network::Packet_PacketID packet, std::function<void(T const&)> handler) {
            register_handler(packet, [handler](Network::Packet_PacketID, std::string data) {
                T message;
                message.ParseFromString(data);
                handler(message);
            });
        }

    private:
        void websocket_handle_message(ix::WebSocketMessagePtr const& msg);
        void udp_handle_message(std::vector<char> const& msg);
        void udp_handle_error(int error);
        void ping_udp();

        std::mutex packet_mutex;
        std::vector<Network::Packet> packets;
        std::unordered_map<Network::Packet_PacketID, std::vector<handler_callback>> callbacks;
        ix::WebSocket websocket;
        modloader::UDPSocket udp_socket;

        bool reconnect_websocket;
        bool reopen_udp;

        int udp_id;
        std::vector<char> udp_key;
    };
} // namespace online
