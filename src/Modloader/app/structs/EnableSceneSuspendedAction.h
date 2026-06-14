#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnableSceneSuspendedAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnableSceneSuspendedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableSceneSuspendedAction_DEFINED)
#include <Modloader/app/structs/EnableSceneSuspendedAction__Fields.h>
#if defined(IL2CPP_STRUCT_EnableSceneSuspendedAction__Fields_DEFINED)
#define IL2CPP_STRUCT_EnableSceneSuspendedAction_DEFINED
struct EnableSceneSuspendedAction__Class;
struct EnableSceneSuspendedAction {
    struct EnableSceneSuspendedAction__Class* klass;
    MonitorData* monitor;
    struct EnableSceneSuspendedAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnableSceneSuspendedAction_FWDDECL)
#define IL2CPP_STRUCT_EnableSceneSuspendedAction_FWDDECL
#include <Modloader/app/structs/EnableSceneSuspendedAction__Class.h>
#endif
#undef IL2CPP_STRUCT_EnableSceneSuspendedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableSceneSuspendedAction_DEFINED) && !defined(IL2CPP_STRUCT_EnableSceneSuspendedAction_FWDDECL)
#include <Modloader/app/structs/EnableSceneSuspendedAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnableSceneSuspendedAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
