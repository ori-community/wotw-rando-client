#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPAddress__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPAddress__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPAddress__StaticFields_DEFINED)
#define IL2CPP_STRUCT_IPAddress__StaticFields_DEFINED
struct IPAddress;
struct IPAddress__StaticFields {
    struct IPAddress* Any;
    struct IPAddress* Loopback;
    struct IPAddress* Broadcast;
    struct IPAddress* None;
    struct IPAddress* IPv6Any;
    struct IPAddress* IPv6Loopback;
    struct IPAddress* IPv6None;
};
#endif
#if !defined(IL2CPP_STRUCT_IPAddress__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_IPAddress__StaticFields_FWDDECL
#include <Modloader/app/structs/IPAddress.h>
#endif
#undef IL2CPP_STRUCT_IPAddress__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPAddress__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_IPAddress__StaticFields_FWDDECL)
#include <Modloader/app/structs/IPAddress__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPAddress__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
