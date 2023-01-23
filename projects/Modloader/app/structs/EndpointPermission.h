#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EndpointPermission_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EndpointPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndpointPermission_DEFINED)
#include <Modloader/app/structs/EndpointPermission__Fields.h>
#if defined(IL2CPP_STRUCT_EndpointPermission__Fields_DEFINED)
#define IL2CPP_STRUCT_EndpointPermission_DEFINED
struct EndpointPermission__Class;
struct EndpointPermission {
    struct EndpointPermission__Class* klass;
    MonitorData* monitor;
    struct EndpointPermission__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EndpointPermission_FWDDECL)
#define IL2CPP_STRUCT_EndpointPermission_FWDDECL
#include <Modloader/app/structs/EndpointPermission__Class.h>
#endif
#undef IL2CPP_STRUCT_EndpointPermission_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndpointPermission_DEFINED) && !defined(IL2CPP_STRUCT_EndpointPermission_FWDDECL)
#include <Modloader/app/structs/EndpointPermission.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EndpointPermission.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
