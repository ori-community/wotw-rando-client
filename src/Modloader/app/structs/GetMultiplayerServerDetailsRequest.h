#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetMultiplayerServerDetailsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetMultiplayerServerDetailsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMultiplayerServerDetailsRequest_DEFINED)
#include <Modloader/app/structs/GetMultiplayerServerDetailsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetMultiplayerServerDetailsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetMultiplayerServerDetailsRequest_DEFINED
struct GetMultiplayerServerDetailsRequest__Class;
struct GetMultiplayerServerDetailsRequest {
    struct GetMultiplayerServerDetailsRequest__Class* klass;
    MonitorData* monitor;
    struct GetMultiplayerServerDetailsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetMultiplayerServerDetailsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetMultiplayerServerDetailsRequest_FWDDECL
#include <Modloader/app/structs/GetMultiplayerServerDetailsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetMultiplayerServerDetailsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMultiplayerServerDetailsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetMultiplayerServerDetailsRequest_FWDDECL)
#include <Modloader/app/structs/GetMultiplayerServerDetailsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetMultiplayerServerDetailsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
