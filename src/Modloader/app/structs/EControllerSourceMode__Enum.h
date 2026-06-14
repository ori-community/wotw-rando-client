#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EControllerSourceMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EControllerSourceMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EControllerSourceMode__Enum_DEFINED)
#define IL2CPP_STRUCT_EControllerSourceMode__Enum_DEFINED
enum class EControllerSourceMode__Enum : int32_t {
    k_EControllerSourceMode_None = 0x00000000,
    k_EControllerSourceMode_Dpad = 0x00000001,
    k_EControllerSourceMode_Buttons = 0x00000002,
    k_EControllerSourceMode_FourButtons = 0x00000003,
    k_EControllerSourceMode_AbsoluteMouse = 0x00000004,
    k_EControllerSourceMode_RelativeMouse = 0x00000005,
    k_EControllerSourceMode_JoystickMove = 0x00000006,
    k_EControllerSourceMode_JoystickMouse = 0x00000007,
    k_EControllerSourceMode_JoystickCamera = 0x00000008,
    k_EControllerSourceMode_ScrollWheel = 0x00000009,
    k_EControllerSourceMode_Trigger = 0x0000000a,
    k_EControllerSourceMode_TouchMenu = 0x0000000b,
    k_EControllerSourceMode_MouseJoystick = 0x0000000c,
    k_EControllerSourceMode_MouseRegion = 0x0000000d,
    k_EControllerSourceMode_RadialMenu = 0x0000000e,
    k_EControllerSourceMode_SingleButton = 0x0000000f,
    k_EControllerSourceMode_Switches = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_EControllerSourceMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_EControllerSourceMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EControllerSourceMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EControllerSourceMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EControllerSourceMode__Enum_FWDDECL)
#include <Modloader/app/structs/EControllerSourceMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EControllerSourceMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
