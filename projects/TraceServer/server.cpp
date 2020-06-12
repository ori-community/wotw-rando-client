#include <server.h>
#pragma comment(lib, "ws2_32.lib")
#include <ext.h>
#include <vector>

int get_read_status(ServerData& data, const SOCKET a_socket);
void close_client(ServerData& data, ClientData& client);

ServerError initialize_server(ServerData& data)
{
    data.errored = false;
    data.address = {0};
    data.address.sin_family = AF_INET;
    data.address.sin_port = htons(data.port);

    WSADATA wsaData;
    int result = WSAStartup(MAKEWORD(1, 1), &wsaData);
    if (result != 0)
    {
        data.logging_callback(format("WSAStartup() error %d\n", result));
        data.errored = true;
        return ServerError::WSAStartup;
    }

    data.listen_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (data.listen_socket == INVALID_SOCKET)
    {
        data.logging_callback(format("socket() error %d\n", WSAGetLastError()));
        data.errored = true;
        return ServerError::CreateSocket;
    }

    unsigned long argp = 1;
    result = setsockopt(data.listen_socket, SOL_SOCKET, SO_REUSEADDR, (char*)&argp, sizeof(argp));
    if (result != 0)
    {
        data.logging_callback(format("setsockopt() error %d\n", result));
        data.errored = true;
        return ServerError::SocketConfiguration;
    }

    argp = 1;
    if (ioctlsocket(data.listen_socket, FIONBIO, &argp) == SOCKET_ERROR)
    {
        data.logging_callback(format("ioctlsocket() error %d\n", WSAGetLastError()));
        data.errored = true;
        return ServerError::SocketNonBlocking;
    }

    return ServerError::Ok;
}

ServerError start_server(ServerData& data)
{
    if (data.errored)
        return ServerError::Undefined;

    int result = bind(data.listen_socket, reinterpret_cast<sockaddr*>(&data.address), sizeof(sockaddr_in));
    if (result == SOCKET_ERROR)
    {
        data.logging_callback(format("bind() error %d\n", WSAGetLastError()));
        data.errored = true;
        return ServerError::SocketBind;
    }

    result = listen(data.listen_socket, data.listen_queue_size);
    if (result == SOCKET_ERROR)
    {
        data.logging_callback(format("listen() error %d\n", WSAGetLastError()));
        data.errored = true;
        return ServerError::SocketListen;
    }

    return ServerError::Ok;
}

ServerError poll_server(ServerData& data)
{
    if (data.errored)
        return ServerError::Undefined;

    int result = get_read_status(data, data.listen_socket);
    if (result == SOCKET_ERROR)
    {
        for (auto& client : data.clients)
        {
            close_client(data, client);
            client.socket = INVALID_SOCKET;
        }

        data.clients.clear();
        return ServerError::SocketLost;
    }

    if (result == 1)
    {
        data.logging_callback(format("connecting client..."));

        int client_size = sizeof(sockaddr_in);
        ClientData client;
        client.socket = accept(data.listen_socket, reinterpret_cast<sockaddr*>(&client.address), &client_size);
        if (client.socket == INVALID_SOCKET)
        {
            data.logging_callback(format("accept() error %d\n", WSAGetLastError()));
            return ServerError::SocketAccept;
        }

        client.id = data.next_id++;
        data.clients.push_back(client);
        data.logging_callback(format("\rconnected client %d\n", data.clients.size()));

        ServerEvent evt;
        evt.client_id = client.id;
        evt.type = ServerEventType::ClientConnected;
        evt.size = 0;
        evt.data = nullptr;
        data.event_handler(evt);
    }
    else
    {
        // Read incoming packages.
        data.buffer.clear();
        for (auto& client : data.clients)
        {
            int status = get_read_status(data, client.socket);
            if (status == 1)
            {
                if (client.socket == INVALID_SOCKET)
                    continue;

                unsigned long data_size = 0;
                ioctlsocket(client.socket, FIONREAD, &data_size);
                if (data_size > 0)
                {
                    auto used = static_cast<unsigned long>(data.buffer.size());
                    data.buffer.resize(static_cast<size_t>(used) + data_size, 0);
                    result = recv(client.socket, reinterpret_cast<char*>(&data.buffer[used]), data_size, 0);
                    if (result == SOCKET_ERROR)
                    {
                        data.logging_callback(format("client %d recv() error %d\n", client.id, WSAGetLastError()));
                        return ServerError::SocketRecieve;
                    }

                    ServerEvent evt;
                    evt.client_id = client.id;
                    evt.type = ServerEventType::ClientPackage;
                    evt.size = data_size;
                    evt.data = &data.buffer[used];
                    data.event_handler(evt);
                }
            }
            else if (status == SOCKET_ERROR)
            {
                data.logging_callback(format("\rclient %d read error\n", client.id));
                close_client(data, client);
                client.socket = INVALID_SOCKET;
            }
        }

        // Send outgoing packages.
        for (auto& client : data.clients)
        {
            if (client.socket == INVALID_SOCKET)
                continue;

            if (client.buffer.empty())
                continue;

            result = send(client.socket, reinterpret_cast<const char*>(&data.buffer[0]), static_cast<int>(data.buffer.size()), 0);
            if (result == SOCKET_ERROR)
            {
                data.logging_callback(format("\rclient %d send error %d\n", client.id, WSAGetLastError()));

                close_client(data, client);
                client.socket = INVALID_SOCKET;
            }

            client.buffer.clear();
        }

        if (data.clients.size() > 0)
        {
            for (int i = (signed)data.clients.size() - 1; i >= 0; --i)
            {
                if (data.clients[i].socket == INVALID_SOCKET)
                {
                    ServerEvent evt;
                    evt.client_id = data.clients[i].id;
                    evt.type = ServerEventType::ClientDisconnected;
                    evt.size = 0;
                    evt.data = nullptr;
                    data.event_handler(evt);

                    data.clients[i].id;
                    data.clients.erase(data.clients.begin() + i);
                }
            }
        }
    }


    return ServerError::Ok;
}

void close_client(ServerData& data, ClientData& client)
{
    if (data.errored)
        return;

    int result = shutdown(client.socket, SD_BOTH);
    if (result != 0)
    {
        data.logging_callback(format("socket shutdown() error %d\n", WSAGetLastError()));
    }

    result = closesocket(client.socket);
    if (result != 0)
    {
        data.logging_callback(format("socket closesocket() error %d\n", WSAGetLastError()));
    }
}

int get_read_status(ServerData& data, const SOCKET a_socket)
{
    static const timeval instantSpeedPlease = { 0,0 };
    fd_set a = { 1, {a_socket} };
    int result = select(0, &a, 0, 0, &instantSpeedPlease);
    if (result == SOCKET_ERROR)
        result = WSAGetLastError();

    if (result != 0 && result != 1)
    {
        data.logging_callback(format("select() error %d\n", result));
        return SOCKET_ERROR;
    }

    return result;
}

ServerError shutdown_server(ServerData& data)
{
    if (data.listen_socket != INVALID_SOCKET)
    {
        int result = closesocket(data.listen_socket); // server closes, it doesn't shut down
        if (result != 0)
        {
            data.logging_callback(format("closesocket() error %d\n", WSAGetLastError()));
            return ServerError::CloseSocket;
        }

        data.listen_socket = INVALID_SOCKET;
    }

    int result = WSACleanup();
    if (result != 0)
    {
        data.logging_callback(format("WSACleanup() error %d\n", result));
        return ServerError::WSACleanup;
    }

    return ServerError::Ok;
}