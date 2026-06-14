#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetMultiplayerServerDetailsResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetMultiplayerServerDetailsResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMultiplayerServerDetailsResponse_DEFINED)
#include <Modloader/app/structs/GetMultiplayerServerDetailsResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetMultiplayerServerDetailsResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetMultiplayerServerDetailsResponse_DEFINED
struct GetMultiplayerServerDetailsResponse__Class;
struct GetMultiplayerServerDetailsResponse {
    struct GetMultiplayerServerDetailsResponse__Class* klass;
    MonitorData* monitor;
    struct GetMultiplayerServerDetailsResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetMultiplayerServerDetailsResponse_FWDDECL)
#define IL2CPP_STRUCT_GetMultiplayerServerDetailsResponse_FWDDECL
#include <Modloader/app/structs/GetMultiplayerServerDetailsResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetMultiplayerServerDetailsResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetMultiplayerServerDetailsResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetMultiplayerServerDetailsResponse_FWDDECL)
#include <Modloader/app/structs/GetMultiplayerServerDetailsResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetMultiplayerServerDetailsResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
