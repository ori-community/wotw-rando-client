#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseAnimatorAction_PlayMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseAnimatorAction_PlayMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimatorAction_PlayMode__Enum_DEFINED)
#define IL2CPP_STRUCT_BaseAnimatorAction_PlayMode__Enum_DEFINED
enum class BaseAnimatorAction_PlayMode__Enum : int32_t {
    Restart = 0x00000000,
    RestartReversed = 0x00000001,
    Reverse = 0x00000002,
    Stop = 0x00000003,
    Continue = 0x00000004,
    ContinueForward = 0x00000005,
    ContinueReversed = 0x00000006,
    StopAtStart = 0x00000007,
    StopAtEnd = 0x00000008,
    RealContinueForward = 0x00000009,
    RealContinueReversed = 0x0000000a,
    Pause = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_BaseAnimatorAction_PlayMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_BaseAnimatorAction_PlayMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BaseAnimatorAction_PlayMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseAnimatorAction_PlayMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BaseAnimatorAction_PlayMode__Enum_FWDDECL)
#include <Modloader/app/structs/BaseAnimatorAction_PlayMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseAnimatorAction_PlayMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
