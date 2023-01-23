#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Input_Button__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Input_Button__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_Button__Enum_DEFINED)
#define IL2CPP_STRUCT_Input_Button__Enum_DEFINED
enum class Input_Button__Enum : int32_t {
    ButtonA = 0x00000000,
    ButtonX = 0x00000001,
    ButtonY = 0x00000002,
    ButtonB = 0x00000003,
    LeftTrigger = 0x00000004,
    RightTrigger = 0x00000005,
    LeftShoulder = 0x00000006,
    RightShoulder = 0x00000007,
    Left = 0x00000008,
    Right = 0x00000009,
    Up = 0x0000000a,
    Down = 0x0000000b,
    Unassigned = 0x0000000c,
    Any = 0x0000000d,
    LeftStick = 0x0000000e,
    RightStick = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_Input_Button__Enum_FWDDECL)
#define IL2CPP_STRUCT_Input_Button__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Input_Button__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Input_Button__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Input_Button__Enum_FWDDECL)
#include <Modloader/app/structs/Input_Button__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Input_Button__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
