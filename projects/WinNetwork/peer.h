#pragma once

#include <WinNetwork/constants.h>

#include <chrono>
#include <functional>
#include <initializer_list>
#include <string>
#include <vector>

#include <winsock2.h>


namespace network
{
    struct NetworkEvent
    {
        NetworkEvent()
            : type(NetworkEventType::Package)
            , peer_id(0)
            , size(0)
            , data(nullptr)
        {}

        NetworkEventType type;
        int peer_id;
        int size;
        char* data;
    };

    struct PeerData
    {
        PeerData()
            : id(0)
            , socket(0)
            , address()
            , buffer()
        {}

        int id;
        SOCKET socket;
        sockaddr address;
        std::vector<char> buffer;
        std::chrono::system_clock::time_point ping;
    };

    struct NetworkData
    {
        NetworkData()
            : port(0)
            , listen_queue_size(10)
            , is_server(true)
            , logging_callback()
            , event_handler()
            , errored(false)
            , next_id(1)
            , address()
            , wsa_data()
            , socket()
            , buffer()
            , peers()
        {}

        // Configuration
        std::string ip;
        int port;
        int listen_queue_size;
        bool is_server;
        std::function<void(std::string const&)> logging_callback;
        std::function<void(NetworkEvent const&)> event_handler;

        // Data
        bool errored;

        int next_id = 1;
        sockaddr_in address;
        WSADATA wsa_data;
        SOCKET socket;

        std::vector<char> buffer;
        std::vector<PeerData> peers;
        std::chrono::system_clock::time_point ping;
    };

    enum class NetworkError
    {
        Ok,
        AddressConversion,
        AddressResolver,
        Connection,
        CloseSocket,
        CreateSocket,
        SocketAccept,
        SocketBind,
        SocketConfiguration,
        SocketListen,
        SocketLost,
        SocketNonBlocking,
        WSACleanup,
        WSAStartup,
        Undefined
    };

    void send_str(PeerData& data, std::string const& str);
    bool send_str(NetworkData& data, int id, std::string const& str);

    NetworkError initialize_peer(NetworkData& data);
    NetworkError start_peer(NetworkData& data);
    NetworkError poll_peer(NetworkData& data);
    NetworkError shutdown_peer(NetworkData& data);
}
