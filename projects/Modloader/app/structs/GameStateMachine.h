#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameStateMachine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameStateMachine_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameStateMachine_DEFINED)
#include <Modloader/app/structs/GameStateMachine__Fields.h>
#if defined(IL2CPP_STRUCT_GameStateMachine__Fields_DEFINED)
#define IL2CPP_STRUCT_GameStateMachine_DEFINED
struct GameStateMachine__Class;
struct GameStateMachine {
    struct GameStateMachine__Class* klass;
    MonitorData* monitor;
    struct GameStateMachine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameStateMachine_FWDDECL)
#define IL2CPP_STRUCT_GameStateMachine_FWDDECL
#include <Modloader/app/structs/GameStateMachine__Class.h>
#endif
#undef IL2CPP_STRUCT_GameStateMachine_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameStateMachine_DEFINED) && !defined(IL2CPP_STRUCT_GameStateMachine_FWDDECL)
#include <Modloader/app/structs/GameStateMachine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameStateMachine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
