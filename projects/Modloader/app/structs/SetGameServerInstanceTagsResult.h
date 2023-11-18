#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGameServerInstanceTagsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGameServerInstanceTagsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceTagsResult_DEFINED)
#include <Modloader/app/structs/SetGameServerInstanceTagsResult__Fields.h>
#if defined(IL2CPP_STRUCT_SetGameServerInstanceTagsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SetGameServerInstanceTagsResult_DEFINED
struct SetGameServerInstanceTagsResult__Class;
struct SetGameServerInstanceTagsResult {
    struct SetGameServerInstanceTagsResult__Class* klass;
    MonitorData* monitor;
    struct SetGameServerInstanceTagsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceTagsResult_FWDDECL)
#define IL2CPP_STRUCT_SetGameServerInstanceTagsResult_FWDDECL
#include <Modloader/app/structs/SetGameServerInstanceTagsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SetGameServerInstanceTagsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceTagsResult_DEFINED) && !defined(IL2CPP_STRUCT_SetGameServerInstanceTagsResult_FWDDECL)
#include <Modloader/app/structs/SetGameServerInstanceTagsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGameServerInstanceTagsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
