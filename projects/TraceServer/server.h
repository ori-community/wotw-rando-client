#include <functional>
#include <initializer_list>
#include <string>
#include <vector>

#include <winsock2.h>

enum class ServerEventType
{
    ClientPackage,
    ClientConnected,
    ClientDisconnected
};

struct ServerEvent
{
    ServerEvent()
        : type(ServerEventType::ClientPackage)
        , client_id(0)
        , size(0)
        , data(nullptr)
    {}

    ServerEventType type;
    int client_id;
    int size;
    char* data;
};

struct ClientData
{
    ClientData()
        : id(0)
        , socket(0)
        , address()
        , buffer()
    {}

    int id;
    SOCKET socket;
    sockaddr address;
    std::vector<char> buffer;
};

struct ServerData
{
    // Configuration
    int port;
    int listen_queue_size;
    std::function<void(std::string const&)> logging_callback;
    std::function<void(ServerEvent const&)> event_handler;

    // Data
    bool errored;

    int next_id = 1;
    sockaddr_in address;
    WSADATA wsa_data;
    SOCKET listen_socket;

    std::vector<char> buffer;
    std::vector<ClientData> clients;
};

enum class ServerError
{
    Ok,
    WSAStartup,
    WSACleanup,
    AddressResolver,
    CreateSocket,
    CloseSocket,
    SocketAccept,
    SocketConfiguration,
    SocketNonBlocking,
    SocketBind,
    SocketListen,
    SocketLost,
    SocketRecieve,
    Undefined
};

ServerError initialize_server(ServerData& data);
ServerError start_server(ServerData& data);
ServerError poll_server(ServerData& data);
ServerError shutdown_server(ServerData& data);
