#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGameServerInstanceDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGameServerInstanceDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceDataRequest_DEFINED)
#include <Modloader/app/structs/SetGameServerInstanceDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetGameServerInstanceDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetGameServerInstanceDataRequest_DEFINED
struct SetGameServerInstanceDataRequest__Class;
struct SetGameServerInstanceDataRequest {
    struct SetGameServerInstanceDataRequest__Class* klass;
    MonitorData* monitor;
    struct SetGameServerInstanceDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceDataRequest_FWDDECL)
#define IL2CPP_STRUCT_SetGameServerInstanceDataRequest_FWDDECL
#include <Modloader/app/structs/SetGameServerInstanceDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetGameServerInstanceDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetGameServerInstanceDataRequest_FWDDECL)
#include <Modloader/app/structs/SetGameServerInstanceDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGameServerInstanceDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
