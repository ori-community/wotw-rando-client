#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGameModeAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGameModeAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameModeAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/GameStateMachine_State__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_GameStateMachine_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SetGameModeAction__Fields_DEFINED
struct SetGameModeAction__Fields {
    struct ActionMethod__Fields _;
    GameStateMachine_State__Enum StateToSet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGameModeAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetGameModeAction__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SetGameModeAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameModeAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetGameModeAction__Fields_FWDDECL)
#include <Modloader/app/structs/SetGameModeAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGameModeAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
