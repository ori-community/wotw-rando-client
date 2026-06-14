#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRButtonId__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRButtonId__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRButtonId__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRButtonId__Enum_DEFINED
enum class EVRButtonId__Enum : int32_t {
    k_EButton_System = 0x00000000,
    k_EButton_ApplicationMenu = 0x00000001,
    k_EButton_Grip = 0x00000002,
    k_EButton_DPad_Left = 0x00000003,
    k_EButton_DPad_Up = 0x00000004,
    k_EButton_DPad_Right = 0x00000005,
    k_EButton_DPad_Down = 0x00000006,
    k_EButton_A = 0x00000007,
    k_EButton_ProximitySensor = 0x0000001f,
    k_EButton_Axis0 = 0x00000020,
    k_EButton_Axis1 = 0x00000021,
    k_EButton_Axis2 = 0x00000022,
    k_EButton_Axis3 = 0x00000023,
    k_EButton_Axis4 = 0x00000024,
    k_EButton_SteamVR_Touchpad = 0x00000020,
    k_EButton_SteamVR_Trigger = 0x00000021,
    k_EButton_Dashboard_Back = 0x00000002,
    k_EButton_Max = 0x00000040,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRButtonId__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRButtonId__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRButtonId__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRButtonId__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRButtonId__Enum_FWDDECL)
#include <Modloader/app/structs/EVRButtonId__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRButtonId__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
