#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetPositionAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetPositionAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetPositionAction_DEFINED)
#include <Modloader/app/structs/SetPositionAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetPositionAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetPositionAction_DEFINED
struct SetPositionAction__Class;
struct SetPositionAction {
    struct SetPositionAction__Class* klass;
    MonitorData* monitor;
    struct SetPositionAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetPositionAction_FWDDECL)
#define IL2CPP_STRUCT_SetPositionAction_FWDDECL
#include <Modloader/app/structs/SetPositionAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetPositionAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetPositionAction_DEFINED) && !defined(IL2CPP_STRUCT_SetPositionAction_FWDDECL)
#include <Modloader/app/structs/SetPositionAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetPositionAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
