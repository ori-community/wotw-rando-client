#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TcpClient_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TcpClient_INITIALIZING
#if !defined(IL2CPP_STRUCT_TcpClient_DEFINED)
#include <Modloader/app/structs/TcpClient__Fields.h>
#if defined(IL2CPP_STRUCT_TcpClient__Fields_DEFINED)
#define IL2CPP_STRUCT_TcpClient_DEFINED
struct TcpClient__Class;
struct TcpClient {
    struct TcpClient__Class* klass;
    MonitorData* monitor;
    struct TcpClient__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TcpClient_FWDDECL)
#define IL2CPP_STRUCT_TcpClient_FWDDECL
#include <Modloader/app/structs/TcpClient__Class.h>
#endif
#undef IL2CPP_STRUCT_TcpClient_INITIALIZING
#if !defined(IL2CPP_STRUCT_TcpClient_DEFINED) && !defined(IL2CPP_STRUCT_TcpClient_FWDDECL)
#include <Modloader/app/structs/TcpClient.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TcpClient.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
