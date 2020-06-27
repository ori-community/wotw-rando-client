#include <peer.h>
#include <Ws2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

#include <binary_walker.h>

#include <Common/ext.h>

#include <vector>

namespace network
{
    int get_status(NetworkData& data, const SOCKET a_socket, bool read);
    void close_peer(NetworkData& data, PeerData& peer);

    void send_data(PeerData& data, const char* ptr, int size)
    {
        auto old_size = data.buffer.size();
        data.buffer.resize(old_size + size);
        binary::BinaryWalker walker;
        walker.data = data.buffer.data();
        walker.size = static_cast<int>(old_size + size);
        walker.cursor = static_cast<int>(old_size);
        binary::write_bw_data(walker, ptr, size);
    }

    bool send_data(NetworkData& data, int id, const char* ptr, int size)
    {
        auto it = std::find_if(data.peers.begin(), data.peers.end(), [&id](PeerData const& cd) -> bool {
            return cd.id == id;
        });

        auto test = it != data.peers.end();
        if (test)
            send_data(*it, ptr, size);

        return test;
    }

    void send_str(PeerData& data, std::string const& str)
    {
        auto old_size = data.buffer.size();
        auto size = str.size() + sizeof(int);
        data.buffer.resize(old_size + size);
        binary::BinaryWalker walker;
        walker.data = data.buffer.data();
        walker.size = static_cast<int>(old_size + size);
        walker.cursor = static_cast<int>(old_size);
        binary::write_str_bw(walker, str);
    }

    bool send_str(NetworkData& data, int id, std::string const& str)
    {
        auto it = std::find_if(data.peers.begin(), data.peers.end(), [&id](PeerData const& cd) -> bool {
            return cd.id == id;
        });

        auto test = it != data.peers.end();
        if (test)
            send_str(*it, str);

        return test;
    }

    bool set_pinging(NetworkData& data, int id, bool enabled)
    {
        auto it = std::find_if(data.peers.begin(), data.peers.end(), [&id](PeerData const& cd) -> bool {
            return cd.id == id;
        });

        auto test = it != data.peers.end();
        if (test)
        {
            it->ping_enabled = enabled;

            char packet[6];
            reinterpret_cast<int*>(packet)[0] = 2;
            reinterpret_cast<PackageType*>(packet)[4] = PackageType::ConfigPing;
            reinterpret_cast<bool*>(packet)[5] = enabled;

            send_data(data, id, packet, 6);
        }

        return test;
    }

    NetworkError initialize_peer(NetworkData& data)
    {
        data.errored = false;
        data.address = { 0 };
        data.address.sin_family = AF_INET;
        data.address.sin_port = htons(data.port);

        WSADATA wsaData;
        int result = WSAStartup(MAKEWORD(1, 1), &wsaData);
        if (result != 0)
        {
            data.logging_callback(format("WSAStartup() error %d\n", result));
            data.errored = true;
            return NetworkError::WSAStartup;
        }

        return NetworkError::Ok;
    }
    
    NetworkError initialize_socket(NetworkData& data)
    {
        if (data.errored)
            return NetworkError::Undefined;

        if (data.socket != INVALID_SOCKET)
        {
            int result = shutdown(data.socket, SD_BOTH);
            if (result != 0)
                data.logging_callback(format("socket shutdown() error %d\n", WSAGetLastError()));

            result = closesocket(data.socket);
            if (result != 0)
                data.logging_callback(format("socket closesocket() error %d\n", WSAGetLastError()));

            data.socket = INVALID_SOCKET;
        }

        data.socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (data.socket == INVALID_SOCKET)
        {
            data.logging_callback(format("socket() error %d\n", WSAGetLastError()));
            data.errored = true;
            return NetworkError::CreateSocket;
        }

        unsigned long argp = 1;
        int result = setsockopt(data.socket, SOL_SOCKET, SO_REUSEADDR, (char*)&argp, sizeof(argp));
        if (result != 0)
        {
            data.logging_callback(format("setsockopt() error %d\n", result));
            data.errored = true;
            return NetworkError::SocketConfiguration;
        }

        argp = 1;
        if (ioctlsocket(data.socket, FIONBIO, &argp) == SOCKET_ERROR)
        {
            data.logging_callback(format("ioctlsocket() error %d\n", WSAGetLastError()));
            data.errored = true;
            return NetworkError::SocketNonBlocking;
        }

        return NetworkError::Ok;
    }

    NetworkError start_peer(NetworkData& data)
    {
        NetworkError output = initialize_socket(data);
        if (output != NetworkError::Ok)
            return output;

        if (data.is_server)
        {
            int result = bind(data.socket, reinterpret_cast<sockaddr*>(&data.address), sizeof(sockaddr_in));
            if (result == SOCKET_ERROR)
            {
                data.logging_callback(format("bind() error %d\n", WSAGetLastError()));
                data.errored = true;
                return NetworkError::SocketBind;
            }

            result = listen(data.socket, data.listen_queue_size);
            if (result == SOCKET_ERROR)
            {
                data.logging_callback(format("listen() error %d\n", WSAGetLastError()));
                data.errored = true;
                return NetworkError::SocketListen;
            }
        }
        else
        {
            addrinfo* res;
            addrinfo hints;
            memset(&hints, 0, sizeof(hints));
            hints.ai_family = AF_INET;
            hints.ai_socktype = SOCK_STREAM;
            hints.ai_flags |= AI_CANONNAME;

            int result = getaddrinfo(data.ip.c_str(), nullptr, &hints, &res);
            if (result != 0)
            {
                data.logging_callback(format("getaddringo() error '%d'\n", result));
                return NetworkError::AddressConversion;
            }

            while (res != nullptr)
            {
                data.address.sin_addr = ((struct sockaddr_in*)res->ai_addr)->sin_addr;
                PeerData peer;
                peer.socket = data.socket;
                peer.address = *reinterpret_cast<sockaddr*>(&data.address);

                int result = connect(peer.socket, &peer.address, sizeof(sockaddr_in));
                if (result == SOCKET_ERROR)
                {
                    int err = WSAGetLastError();
                    switch (err)
                    {
                    case WSAEISCONN:
                        data.logging_callback("already connected!\n");
                        res = nullptr;
                        break;
                    case WSAEWOULDBLOCK:
                    case WSAEALREADY:
                    {
                        peer.id = data.next_id++;
                        peer.ping = std::chrono::system_clock::now();

                        data.peers.push_back(peer);

                        NetworkEvent evt;
                        evt.peer_id = peer.id;
                        peer.socket = data.socket;
                        evt.type = NetworkEventType::Connected;
                        evt.size = 0;
                        evt.data = nullptr;
                        data.event_handler(evt);

                        res = nullptr;
                        break;
                    }
                    default:
                        data.logging_callback(format("peer connect() error %d\n", err));
                        res = res->ai_next;
                        if (res == nullptr)
                            return NetworkError::Connection;

                        break;
                    }
                }
            }
        }

        return NetworkError::Ok;
    }

    NetworkError accept_connection(NetworkData& data)
    {
        int peer_size = sizeof(sockaddr_in);
        PeerData peer;
        peer.socket = accept(data.socket, reinterpret_cast<sockaddr*>(&peer.address), &peer_size);
        if (peer.socket == INVALID_SOCKET)
        {
            data.logging_callback(format("accept() error %d\n", WSAGetLastError()));
            return NetworkError::SocketAccept;
        }

        peer.id = data.next_id++;
        peer.ping = std::chrono::system_clock::now();
        data.peers.push_back(peer);

        // Change this, wait for guid from client for identification before sending this.
        NetworkEvent evt;
        evt.peer_id = peer.id;
        evt.type = NetworkEventType::Connected;
        evt.size = 0;
        evt.data = nullptr;
        data.event_handler(evt);

        return NetworkError::Ok;
    }

    void recieve_packets(NetworkData& data)
    {
        data.buffer.clear();
        for (auto& peer : data.peers)
        {
            int status = get_status(data, peer.socket, true);
            if (status == 1)
            {
                if (peer.socket == INVALID_SOCKET)
                    continue;

                unsigned long data_size = 0;
                ioctlsocket(peer.socket, FIONREAD, &data_size);
                if (data_size > 0)
                {
                    auto used = static_cast<unsigned long>(data.buffer.size());
                    data.buffer.resize(static_cast<size_t>(used) + data_size, 0);
                    int result = recv(peer.socket, reinterpret_cast<char*>(&data.buffer[used]), data_size, 0);
                    if (result == SOCKET_ERROR)
                    {
                        data.logging_callback(format("peer %d recv() error %d\n", peer.id, WSAGetLastError()));
                        continue;
                    }

                    binary::BinaryWalker walker;
                    walker.cursor = 0;
                    walker.data = &data.buffer[used];
                    walker.size = data_size;
                    while (static_cast<unsigned long>(walker.cursor + 4) < data_size)
                    {
                        auto size = binary::read_bw<int>(walker);
                        if (static_cast<unsigned long>(walker.cursor + size) > data_size)
                            break;

                        if (size < 1)
                            continue;

                        auto type = *reinterpret_cast<PackageType*>(&walker.data[walker.cursor]);
                        if (type == PackageType::ConfigPing)
                        {
                            peer.ping = std::chrono::system_clock::now();
                            peer.ping_enabled = *reinterpret_cast<bool*>(&walker.data[walker.cursor + 1]);
                        }
                        else if (type == PackageType::Ping)
                            peer.ping = std::chrono::system_clock::now();

                        NetworkEvent evt;
                        evt.peer_id = peer.id;
                        evt.type = NetworkEventType::Package;
                        evt.size = size;
                        evt.data = &walker.data[walker.cursor];
                        data.event_handler(evt);
                        walker.cursor += size;
                    }
                }
            }
            else if (status == SOCKET_ERROR)
            {
                data.logging_callback(format("peer %d read error\n", peer.id));
                close_peer(data, peer);
                peer.socket = INVALID_SOCKET;
            }

            if (peer.ping_enabled)
            {
                auto delta = std::chrono::system_clock::now() - peer.ping;
                if (delta > PING_WAIT_TIME)
                {
                    data.logging_callback(format("peer %d timed out\n", peer.id));
                    close_peer(data, peer);
                    peer.socket = INVALID_SOCKET;
                }
            }
        }
    }

    void send_packets(NetworkData& data)
    {
        for (auto& peer : data.peers)
        {
            int status = get_status(data, peer.socket, false);
            if (status == INVALID_SOCKET)
            {
                close_peer(data, peer);
                peer.socket = INVALID_SOCKET;
            }
            else if (status == 1)
            {
                if (peer.socket == INVALID_SOCKET)
                    continue;

                if (peer.buffer.empty())
                    continue;

                int result = send(peer.socket, reinterpret_cast<const char*>(&peer.buffer[0]), static_cast<int>(peer.buffer.size()), 0);
                (void*)&result;
                //if (result == SOCKET_ERROR)
                //    data.logging_callback(format("\rpeer %d send error %d\n", peer.id, WSAGetLastError()));

                peer.buffer.clear();
            }
        }
    }

    void cleanup_peers(NetworkData& data)
    {
        if (data.peers.size() > 0)
        {
            for (int i = (signed)data.peers.size() - 1; i >= 0; --i)
            {
                if (data.peers[i].socket == INVALID_SOCKET)
                {
                    NetworkEvent evt;
                    evt.peer_id = data.peers[i].id;
                    evt.type = NetworkEventType::Disconnected;
                    evt.size = 0;
                    evt.data = nullptr;
                    data.event_handler(evt);

                    data.peers[i].id;
                    data.peers.erase(data.peers.begin() + i);
                }
            }
        }
    }

    NetworkError poll_peer(NetworkData& data)
    {
        if (data.errored)
            return NetworkError::Undefined;

        NetworkError output = NetworkError::Ok;
        if (data.is_server)
        {
            int result = get_status(data, data.socket, true);
            if (result == SOCKET_ERROR)
            {
                for (auto& peer : data.peers)
                {
                    close_peer(data, peer);
                    peer.socket = INVALID_SOCKET;
                }

                data.peers.clear();
                output = NetworkError::SocketLost;
            }
            else if (result == 1)
                output = accept_connection(data);
        }

        if (output == NetworkError::Ok)
        {
            auto time = std::chrono::system_clock::now();
            auto delta = time - data.ping;
            if (delta > PING_INTERVAL)
            {
                data.ping = time;
                char packet[5];
                reinterpret_cast<int*>(packet)[0] = 1;
                reinterpret_cast<PackageType*>(packet)[4] = PackageType::Ping;
                for (auto& peer : data.peers)
                    if (peer.ping_enabled)
                        send_data(peer, packet, 5);
            }

            recieve_packets(data);
            send_packets(data);
            cleanup_peers(data);

            if (!data.is_server && data.peers.empty() && data.retry_client_connect) {
                // Retry connection.
                // maybe initialize as well?
                start_peer(data);
            }
        }

        return output;
    }

    void close_peer(NetworkData& data, PeerData& peer)
    {
        if (data.errored)
            return;

        int result = shutdown(peer.socket, SD_BOTH);
        if (result != 0)
            data.logging_callback(format("socket shutdown() error %d\n", WSAGetLastError()));

        result = closesocket(peer.socket);
        if (result != 0)
            data.logging_callback(format("socket closesocket() error %d\n", WSAGetLastError()));

        peer.socket = INVALID_SOCKET;
    }

    int get_status(NetworkData& data, const SOCKET a_socket, bool read)
    {
        static const timeval instantSpeedPlease = { 0,0 };
        fd_set s;
        FD_ZERO(&s);
#pragma warning(push)
#pragma warning(disable: 6319)
        FD_SET(a_socket, &s);
#pragma warning(pop)

        int result = 0;
        if (read)
            result = select(0, &s, 0, 0, &instantSpeedPlease);
        else
            result = select(0, 0, &s, 0, &instantSpeedPlease);
        
        if (result == SOCKET_ERROR)
            result = WSAGetLastError();

        if (result != 0 && result != 1)
        {
            data.logging_callback(format("select() error %d\n", result));
            return SOCKET_ERROR;
        }

        return result;
    }

    NetworkError shutdown_peer(NetworkData& data)
    {
        if (data.socket != INVALID_SOCKET)
        {
            int result = closesocket(data.socket); // server closes, it doesn't shut down
            if (result != 0)
            {
                data.logging_callback(format("closesocket() error %d\n", WSAGetLastError()));
                return NetworkError::CloseSocket;
            }

            data.socket = INVALID_SOCKET;
        }

        int result = WSACleanup();
        if (result != 0)
        {
            data.logging_callback(format("WSACleanup() error %d\n", result));
            return NetworkError::WSACleanup;
        }

        return NetworkError::Ok;
    }
}
