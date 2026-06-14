#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetIntAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetIntAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetIntAction_DEFINED)
#include <Modloader/app/structs/SetIntAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetIntAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetIntAction_DEFINED
struct SetIntAction__Class;
struct SetIntAction {
    struct SetIntAction__Class* klass;
    MonitorData* monitor;
    struct SetIntAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetIntAction_FWDDECL)
#define IL2CPP_STRUCT_SetIntAction_FWDDECL
#include <Modloader/app/structs/SetIntAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetIntAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetIntAction_DEFINED) && !defined(IL2CPP_STRUCT_SetIntAction_FWDDECL)
#include <Modloader/app/structs/SetIntAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetIntAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
