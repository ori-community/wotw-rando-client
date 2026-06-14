#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StartExitingAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StartExitingAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartExitingAction_DEFINED)
#include <Modloader/app/structs/StartExitingAction__Fields.h>
#if defined(IL2CPP_STRUCT_StartExitingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_StartExitingAction_DEFINED
struct StartExitingAction__Class;
struct StartExitingAction {
    struct StartExitingAction__Class* klass;
    MonitorData* monitor;
    struct StartExitingAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StartExitingAction_FWDDECL)
#define IL2CPP_STRUCT_StartExitingAction_FWDDECL
#include <Modloader/app/structs/StartExitingAction__Class.h>
#endif
#undef IL2CPP_STRUCT_StartExitingAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_StartExitingAction_DEFINED) && !defined(IL2CPP_STRUCT_StartExitingAction_FWDDECL)
#include <Modloader/app/structs/StartExitingAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StartExitingAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
