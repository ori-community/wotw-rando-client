#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGameServerInstanceTagsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGameServerInstanceTagsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceTagsRequest_DEFINED)
#include <Modloader/app/structs/SetGameServerInstanceTagsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetGameServerInstanceTagsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetGameServerInstanceTagsRequest_DEFINED
struct SetGameServerInstanceTagsRequest__Class;
struct SetGameServerInstanceTagsRequest {
    struct SetGameServerInstanceTagsRequest__Class* klass;
    MonitorData* monitor;
    struct SetGameServerInstanceTagsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceTagsRequest_FWDDECL)
#define IL2CPP_STRUCT_SetGameServerInstanceTagsRequest_FWDDECL
#include <Modloader/app/structs/SetGameServerInstanceTagsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetGameServerInstanceTagsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceTagsRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetGameServerInstanceTagsRequest_FWDDECL)
#include <Modloader/app/structs/SetGameServerInstanceTagsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGameServerInstanceTagsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
