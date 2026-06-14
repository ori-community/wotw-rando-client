#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Socket__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Socket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Socket__Fields_DEFINED)
#include <Modloader/app/structs/AddressFamily__Enum.h>
#include <Modloader/app/structs/ProtocolType__Enum.h>
#include <Modloader/app/structs/SocketType__Enum.h>
#if defined(IL2CPP_STRUCT_AddressFamily__Enum_DEFINED) && defined(IL2CPP_STRUCT_SocketType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ProtocolType__Enum_DEFINED)
#define IL2CPP_STRUCT_Socket__Fields_DEFINED
struct SafeSocketHandle;
struct EndPoint;
struct SemaphoreSlim;
struct __declspec(align(8)) Socket__Fields {
    bool is_closed;
    bool is_listening;
    bool useOverlappedIO;
    int32_t linger_timeout;
    AddressFamily__Enum addressFamily;

    SocketType__Enum socketType;

    ProtocolType__Enum protocolType;

    struct SafeSocketHandle* m_Handle;
    struct EndPoint* seed_endpoint;
    struct SemaphoreSlim* ReadSem;
    struct SemaphoreSlim* WriteSem;
    bool is_blocking;
    bool is_bound;
    bool is_connected;
    int32_t m_IntCleanedUp;
    bool connect_in_progress;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Socket__Fields_FWDDECL)
#define IL2CPP_STRUCT_Socket__Fields_FWDDECL
#include <Modloader/app/structs/EndPoint.h>
#include <Modloader/app/structs/SafeSocketHandle.h>
#include <Modloader/app/structs/SemaphoreSlim.h>
#endif
#undef IL2CPP_STRUCT_Socket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Socket__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Socket__Fields_FWDDECL)
#include <Modloader/app/structs/Socket__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Socket__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
