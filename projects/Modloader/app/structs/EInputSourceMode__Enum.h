#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EInputSourceMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EInputSourceMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EInputSourceMode__Enum_DEFINED)
#define IL2CPP_STRUCT_EInputSourceMode__Enum_DEFINED
enum class EInputSourceMode__Enum : int32_t {
    k_EInputSourceMode_None = 0x00000000,
    k_EInputSourceMode_Dpad = 0x00000001,
    k_EInputSourceMode_Buttons = 0x00000002,
    k_EInputSourceMode_FourButtons = 0x00000003,
    k_EInputSourceMode_AbsoluteMouse = 0x00000004,
    k_EInputSourceMode_RelativeMouse = 0x00000005,
    k_EInputSourceMode_JoystickMove = 0x00000006,
    k_EInputSourceMode_JoystickMouse = 0x00000007,
    k_EInputSourceMode_JoystickCamera = 0x00000008,
    k_EInputSourceMode_ScrollWheel = 0x00000009,
    k_EInputSourceMode_Trigger = 0x0000000a,
    k_EInputSourceMode_TouchMenu = 0x0000000b,
    k_EInputSourceMode_MouseJoystick = 0x0000000c,
    k_EInputSourceMode_MouseRegion = 0x0000000d,
    k_EInputSourceMode_RadialMenu = 0x0000000e,
    k_EInputSourceMode_SingleButton = 0x0000000f,
    k_EInputSourceMode_Switches = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_EInputSourceMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_EInputSourceMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EInputSourceMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EInputSourceMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EInputSourceMode__Enum_FWDDECL)
#include <Modloader/app/structs/EInputSourceMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EInputSourceMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
