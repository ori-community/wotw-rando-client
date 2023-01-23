#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGameModeAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGameModeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameModeAction_DEFINED)
#include <Modloader/app/structs/SetGameModeAction__Fields.h>
#if defined(IL2CPP_STRUCT_SetGameModeAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SetGameModeAction_DEFINED
struct SetGameModeAction__Class;
struct SetGameModeAction {
    struct SetGameModeAction__Class* klass;
    MonitorData* monitor;
    struct SetGameModeAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGameModeAction_FWDDECL)
#define IL2CPP_STRUCT_SetGameModeAction_FWDDECL
#include <Modloader/app/structs/SetGameModeAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SetGameModeAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameModeAction_DEFINED) && !defined(IL2CPP_STRUCT_SetGameModeAction_FWDDECL)
#include <Modloader/app/structs/SetGameModeAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGameModeAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
