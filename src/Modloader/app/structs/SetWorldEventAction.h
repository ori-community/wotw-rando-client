#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetWorldEventAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetWorldEventAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetWorldEventAction_DEFINED)
#include <Modloader/app/structs/SetWorldEventAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetWorldEventAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetWorldEventAction_DEFINED
struct SetWorldEventAction__Class;
struct SetWorldEventAction {
    struct SetWorldEventAction__Class* klass;
    MonitorData* monitor;
    struct SetWorldEventAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetWorldEventAction_FWDDECL)
#define IL2CPP_STRUCT_SetWorldEventAction_FWDDECL
#include <Modloader/app/structs/SetWorldEventAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetWorldEventAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetWorldEventAction_DEFINED) && !defined(IL2CPP_STRUCT_SetWorldEventAction_FWDDECL)
#include <Modloader/app/structs/SetWorldEventAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetWorldEventAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
