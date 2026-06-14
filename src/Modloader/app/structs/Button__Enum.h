#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Button__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Button__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Button__Enum_DEFINED)
#define IL2CPP_STRUCT_Button__Enum_DEFINED
enum class Button__Enum : int32_t {
    GamepadButtonA = 0x00000000,
    GamepadButtonB = 0x00000001,
    GamepadButtonX = 0x00000002,
    GamepadButtonY = 0x00000003,
    GamepadButtonLeftShoulder = 0x00000004,
    GamepadButtonRightShoulder = 0x00000005,
    GamepadButtonView = 0x00000006,
    GamepadButtonMenu = 0x00000007,
    GamepadButtonLeftThumbstick = 0x00000008,
    GamepadButtonRightThumbstick = 0x00000009,
    GamepadButtonDPadUp = 0x0000000a,
    GamepadButtonDPadDown = 0x0000000b,
    GamepadButtonDPadLeft = 0x0000000c,
    GamepadButtonDPadRight = 0x0000000d,
    LeftTrigger = 0x0000000e,
    RightTrigger = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_Button__Enum_FWDDECL)
#define IL2CPP_STRUCT_Button__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Button__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Button__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Button__Enum_FWDDECL)
#include <Modloader/app/structs/Button__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Button__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
