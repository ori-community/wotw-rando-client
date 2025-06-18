#include <Modloader/udp_socket.h>

#include <Ws2tcpip.h>
#include <winsock2.h>
#include <atomic>
#include <string>
#include <thread>

namespace modloader {
    struct WinsockManager {
        bool initialized = false;
        WSADATA wsa;
        int error = 0;

        WinsockManager() {
            if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
                error = WSAGetLastError();
            } else {
                initialized = true;
            }
        }

        ~WinsockManager() {
            WSACleanup();
            initialized = false;
        }
    };

    WinsockManager winsock_manager;

    struct UDPSocketData {
        SOCKET socket;
        std::vector<char> buffer;
        std::thread receive_thread;

        std::atomic<bool> is_open;
    };

    UDPSocket::UDPSocket(int buffer_length)
            : data(std::make_unique<UDPSocketData>()) {
        data->buffer.resize(buffer_length);
        data->is_open = false;
    }

    UDPSocket::~UDPSocket() {}

    UDPSocket::UDPError UDPSocket::open(std::string_view host, int port) {
        if (data->is_open)
            return UDPError::AlreadyOpen;

        this->host = host;
        this->port = port;

        if (!winsock_manager.initialized) {
            if (error_handler != nullptr)
                error_handler(winsock_manager.error);

            return UDPError::WSAInit;
        }

        addrinfo hints{ 0 };
        addrinfo* result;
        memset(&hints, 0, sizeof(hints));
        hints.ai_family = PF_UNSPEC;
        hints.ai_socktype = SOCK_DGRAM;
        std::string str_port = std::to_string(port);
        auto error_code = getaddrinfo(host.data(), str_port.c_str(), &hints, &result);

        if (error_code != 0) {
            return UDPError::HostResolving;
        }

        addrinfo* actual_address = result;
        for (; actual_address != nullptr; actual_address = actual_address->ai_next) {
            // create socket
            if ((data->socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == INVALID_SOCKET) {
                if (error_handler != nullptr)
                    error_handler(WSAGetLastError());

                return UDPError::SocketCreation;
            }

            auto connection_result = connect(data->socket, actual_address->ai_addr, actual_address->ai_addrlen);
            if (connection_result != SOCKET_ERROR) {
                break;
            }

            closesocket(data->socket);
            data->socket = INVALID_SOCKET;
        }

        freeaddrinfo(result);

        if (data->socket == INVALID_SOCKET) {
            return UDPError::SocketConnection;
        }

        data->is_open = true;
        data->receive_thread = std::thread([this]() { receive(); });

        return UDPError::Ok;
    }

    void UDPSocket::close() {
        if (!data->is_open)
            return;

        data->is_open = false;
        closesocket(data->socket);
        if (data->receive_thread.joinable())
            data->receive_thread.join();
    }

    bool UDPSocket::is_open() const {
        return data->is_open;
    }

    bool UDPSocket::send(std::span<char> message) const {
        if (!data->is_open)
            return false;

        auto result = ::send(
            data->socket,
            message.data(),
            message.size_bytes(),
            0
        );

        return result != SOCKET_ERROR;
    }

    void UDPSocket::receive() {
        while (data->is_open) {
            auto result = recv(
                data->socket,
                data->buffer.data(),
                data->buffer.size(),
                0
            );

            if (result != SOCKET_ERROR) {
                packet_handler(data->buffer);
                memset(data->buffer.data(), '\0', data->buffer.size());
            } else {
                close();
                if (error_handler != nullptr)
                    error_handler(WSAGetLastError());
            }
        }
    }

    void UDPSocket::set_packet_handler(packet_callback handler) {
        packet_handler = handler;
    }

    void UDPSocket::set_error_handler(error_callback handler) {
        error_handler = handler;
    }
} // namespace modloader
