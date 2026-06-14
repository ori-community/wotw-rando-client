#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGameServerInstanceStateResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGameServerInstanceStateResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceStateResult_DEFINED)
#include <Modloader/app/structs/SetGameServerInstanceStateResult__Fields.h>
#if defined(IL2CPP_STRUCT_SetGameServerInstanceStateResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SetGameServerInstanceStateResult_DEFINED
struct SetGameServerInstanceStateResult__Class;
struct SetGameServerInstanceStateResult {
    struct SetGameServerInstanceStateResult__Class* klass;
    MonitorData* monitor;
    struct SetGameServerInstanceStateResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceStateResult_FWDDECL)
#define IL2CPP_STRUCT_SetGameServerInstanceStateResult_FWDDECL
#include <Modloader/app/structs/SetGameServerInstanceStateResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SetGameServerInstanceStateResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceStateResult_DEFINED) && !defined(IL2CPP_STRUCT_SetGameServerInstanceStateResult_FWDDECL)
#include <Modloader/app/structs/SetGameServerInstanceStateResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGameServerInstanceStateResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
