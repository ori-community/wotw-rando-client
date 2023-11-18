#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetRemoteLoginEndpointRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetRemoteLoginEndpointRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetRemoteLoginEndpointRequest_DEFINED)
#include <Modloader/app/structs/GetRemoteLoginEndpointRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetRemoteLoginEndpointRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetRemoteLoginEndpointRequest_DEFINED
struct GetRemoteLoginEndpointRequest__Class;
struct GetRemoteLoginEndpointRequest {
    struct GetRemoteLoginEndpointRequest__Class* klass;
    MonitorData* monitor;
    struct GetRemoteLoginEndpointRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetRemoteLoginEndpointRequest_FWDDECL)
#define IL2CPP_STRUCT_GetRemoteLoginEndpointRequest_FWDDECL
#include <Modloader/app/structs/GetRemoteLoginEndpointRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetRemoteLoginEndpointRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetRemoteLoginEndpointRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetRemoteLoginEndpointRequest_FWDDECL)
#include <Modloader/app/structs/GetRemoteLoginEndpointRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetRemoteLoginEndpointRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
