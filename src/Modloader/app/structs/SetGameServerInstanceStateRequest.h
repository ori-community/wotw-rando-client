#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGameServerInstanceStateRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGameServerInstanceStateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceStateRequest_DEFINED)
#include <Modloader/app/structs/SetGameServerInstanceStateRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetGameServerInstanceStateRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetGameServerInstanceStateRequest_DEFINED
struct SetGameServerInstanceStateRequest__Class;
struct SetGameServerInstanceStateRequest {
    struct SetGameServerInstanceStateRequest__Class* klass;
    MonitorData* monitor;
    struct SetGameServerInstanceStateRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceStateRequest_FWDDECL)
#define IL2CPP_STRUCT_SetGameServerInstanceStateRequest_FWDDECL
#include <Modloader/app/structs/SetGameServerInstanceStateRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetGameServerInstanceStateRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceStateRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetGameServerInstanceStateRequest_FWDDECL)
#include <Modloader/app/structs/SetGameServerInstanceStateRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGameServerInstanceStateRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
