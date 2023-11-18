#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EControllerSource__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EControllerSource__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EControllerSource__Enum_DEFINED)
#define IL2CPP_STRUCT_EControllerSource__Enum_DEFINED
enum class EControllerSource__Enum : int32_t {
    k_EControllerSource_None = 0x00000000,
    k_EControllerSource_LeftTrackpad = 0x00000001,
    k_EControllerSource_RightTrackpad = 0x00000002,
    k_EControllerSource_Joystick = 0x00000003,
    k_EControllerSource_ABXY = 0x00000004,
    k_EControllerSource_Switch = 0x00000005,
    k_EControllerSource_LeftTrigger = 0x00000006,
    k_EControllerSource_RightTrigger = 0x00000007,
    k_EControllerSource_LeftBumper = 0x00000008,
    k_EControllerSource_RightBumper = 0x00000009,
    k_EControllerSource_Gyro = 0x0000000a,
    k_EControllerSource_CenterTrackpad = 0x0000000b,
    k_EControllerSource_RightJoystick = 0x0000000c,
    k_EControllerSource_DPad = 0x0000000d,
    k_EControllerSource_Key = 0x0000000e,
    k_EControllerSource_Mouse = 0x0000000f,
    k_EControllerSource_LeftGyro = 0x00000010,
    k_EControllerSource_Count = 0x00000011,
};
#endif
#if !defined(IL2CPP_STRUCT_EControllerSource__Enum_FWDDECL)
#define IL2CPP_STRUCT_EControllerSource__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EControllerSource__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EControllerSource__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EControllerSource__Enum_FWDDECL)
#include <Modloader/app/structs/EControllerSource__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EControllerSource__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
