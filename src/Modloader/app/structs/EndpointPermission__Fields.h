#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EndpointPermission__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EndpointPermission__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndpointPermission__Fields_DEFINED)
#include <Modloader/app/structs/TransportType__Enum.h>
#if defined(IL2CPP_STRUCT_TransportType__Enum_DEFINED)
#define IL2CPP_STRUCT_EndpointPermission__Fields_DEFINED
struct String;
struct IPAddress__Array;
struct __declspec(align(8)) EndpointPermission__Fields {
    struct String* hostname;
    int32_t port;
    TransportType__Enum transport;

    bool resolved;
    bool hasWildcard;
    struct IPAddress__Array* addresses;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EndpointPermission__Fields_FWDDECL)
#define IL2CPP_STRUCT_EndpointPermission__Fields_FWDDECL
#include <Modloader/app/structs/IPAddress__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EndpointPermission__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndpointPermission__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EndpointPermission__Fields_FWDDECL)
#include <Modloader/app/structs/EndpointPermission__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EndpointPermission__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
