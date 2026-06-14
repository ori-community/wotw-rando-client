#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameStateMachine_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameStateMachine_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameStateMachine_State__Enum_DEFINED)
#define IL2CPP_STRUCT_GameStateMachine_State__Enum_DEFINED
enum class GameStateMachine_State__Enum : int32_t {
    Logos = 0x00000000,
    StartScreen = 0x00000001,
    TitleScreen = 0x00000002,
    Game = 0x00000003,
    MenuRace = 0x00000004,
    WatchCutscenes = 0x00000005,
    TrialEnd = 0x00000006,
    Prologue = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_GameStateMachine_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_GameStateMachine_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GameStateMachine_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameStateMachine_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GameStateMachine_State__Enum_FWDDECL)
#include <Modloader/app/structs/GameStateMachine_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameStateMachine_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
