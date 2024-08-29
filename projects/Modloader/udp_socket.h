#pragma once

#include <Modloader/macros.h>

#include <functional>
#include <memory>
#include <span>
#include <string>
#include <vector>

namespace modloader {
    struct UDPSocketData;

    class IL2CPP_MODLOADER_DLLEXPORT UDPSocket {
    public:
        enum class UDPError {
            Ok,
            AlreadyOpen,
            WSAInit,
            HostResolving,
            SocketCreation,
            SocketConnection,
        };

        using error_callback = std::function<void(int)>;
        using packet_callback = std::function<void(std::vector<char> const&)>;

        UDPSocket(int buffer_length);
        ~UDPSocket();

        UDPError open(std::string_view server, int port);
        void close();
        bool is_open() const;

        bool send(std::span<char> message) const;
        void set_packet_handler(packet_callback handler);
        void set_error_handler(error_callback handler);

        std::string_view get_server() const { return server; }
        int get_port() const { return port; }

    private:
        void receive();

        packet_callback packet_handler;
        error_callback error_handler;

        std::unique_ptr<UDPSocketData> data;

        std::string server;
        int port;
    };
} // namespace modloader
