#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketAddress_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketAddress_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAddress_DEFINED)
#include <Modloader/app/structs/SocketAddress__Fields.h>
#if defined(IL2CPP_STRUCT_SocketAddress__Fields_DEFINED)
#define IL2CPP_STRUCT_SocketAddress_DEFINED
struct SocketAddress__Class;
struct SocketAddress {
    struct SocketAddress__Class* klass;
    MonitorData* monitor;
    struct SocketAddress__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SocketAddress_FWDDECL)
#define IL2CPP_STRUCT_SocketAddress_FWDDECL
#include <Modloader/app/structs/SocketAddress__Class.h>
#endif
#undef IL2CPP_STRUCT_SocketAddress_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketAddress_DEFINED) && !defined(IL2CPP_STRUCT_SocketAddress_FWDDECL)
#include <Modloader/app/structs/SocketAddress.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketAddress.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
