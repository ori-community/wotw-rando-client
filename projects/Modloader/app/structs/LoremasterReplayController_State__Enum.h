#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoremasterReplayController_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoremasterReplayController_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoremasterReplayController_State__Enum_DEFINED)
#define IL2CPP_STRUCT_LoremasterReplayController_State__Enum_DEFINED
enum class LoremasterReplayController_State__Enum : int32_t {
    OutsideReplayMode = 0x00000000,
    InsideReplayMode = 0x00000001,
    WaitingToApply = 0x00000002,
    Applying = 0x00000003,
    WaitingToExit = 0x00000004,
    Exitting = 0x00000005,
    WaitingToRestart = 0x00000006,
    FadeOutAfterReplayExit = 0x00000007,
    FadeOutAfterApplied = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_LoremasterReplayController_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_LoremasterReplayController_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LoremasterReplayController_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoremasterReplayController_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LoremasterReplayController_State__Enum_FWDDECL)
#include <Modloader/app/structs/LoremasterReplayController_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoremasterReplayController_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
