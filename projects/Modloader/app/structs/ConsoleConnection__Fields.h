#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleConnection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleConnection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleConnection__Fields_DEFINED)
#include <Modloader/app/structs/ConsoleConnection_State__Enum.h>
#if defined(IL2CPP_STRUCT_ConsoleConnection_State__Enum_DEFINED)
#define IL2CPP_STRUCT_ConsoleConnection__Fields_DEFINED
struct TcpListener;
struct TcpClient;
struct NetworkStream;
struct Thread;
struct String;
struct __declspec(align(8)) ConsoleConnection__Fields {
    bool Received;
    struct TcpListener* m_server;
    struct TcpClient* m_client;
    struct NetworkStream* m_stream;
    float m_currentStateTime;
    bool m_connected;
    struct Thread* m_connectThread;
    struct Thread* m_fileThread;
    float m_replayDuration;
    struct String* m_replayPath;
    bool m_takeScreenshot;
    struct String* m_screenshotPath;
    struct String* m_ip;
    bool m_receiveFiles;
    ConsoleConnection_State__Enum m_state;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConsoleConnection__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConsoleConnection__Fields_FWDDECL
#include <Modloader/app/structs/NetworkStream.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TcpClient.h>
#include <Modloader/app/structs/TcpListener.h>
#include <Modloader/app/structs/Thread.h>
#endif
#undef IL2CPP_STRUCT_ConsoleConnection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleConnection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleConnection__Fields_FWDDECL)
#include <Modloader/app/structs/ConsoleConnection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleConnection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
