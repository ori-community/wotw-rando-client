#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetRemoteLoginEndpointResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetRemoteLoginEndpointResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetRemoteLoginEndpointResponse_DEFINED)
#include <Modloader/app/structs/GetRemoteLoginEndpointResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetRemoteLoginEndpointResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetRemoteLoginEndpointResponse_DEFINED
struct GetRemoteLoginEndpointResponse__Class;
struct GetRemoteLoginEndpointResponse {
    struct GetRemoteLoginEndpointResponse__Class* klass;
    MonitorData* monitor;
    struct GetRemoteLoginEndpointResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetRemoteLoginEndpointResponse_FWDDECL)
#define IL2CPP_STRUCT_GetRemoteLoginEndpointResponse_FWDDECL
#include <Modloader/app/structs/GetRemoteLoginEndpointResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetRemoteLoginEndpointResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetRemoteLoginEndpointResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetRemoteLoginEndpointResponse_FWDDECL)
#include <Modloader/app/structs/GetRemoteLoginEndpointResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetRemoteLoginEndpointResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
