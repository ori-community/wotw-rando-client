#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EInputSource__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EInputSource__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EInputSource__Enum_DEFINED)
#define IL2CPP_STRUCT_EInputSource__Enum_DEFINED
enum class EInputSource__Enum : int32_t {
    k_EInputSource_None = 0x00000000,
    k_EInputSource_LeftTrackpad = 0x00000001,
    k_EInputSource_RightTrackpad = 0x00000002,
    k_EInputSource_Joystick = 0x00000003,
    k_EInputSource_ABXY = 0x00000004,
    k_EInputSource_Switch = 0x00000005,
    k_EInputSource_LeftTrigger = 0x00000006,
    k_EInputSource_RightTrigger = 0x00000007,
    k_EInputSource_LeftBumper = 0x00000008,
    k_EInputSource_RightBumper = 0x00000009,
    k_EInputSource_Gyro = 0x0000000a,
    k_EInputSource_CenterTrackpad = 0x0000000b,
    k_EInputSource_RightJoystick = 0x0000000c,
    k_EInputSource_DPad = 0x0000000d,
    k_EInputSource_Key = 0x0000000e,
    k_EInputSource_Mouse = 0x0000000f,
    k_EInputSource_LeftGyro = 0x00000010,
    k_EInputSource_Count = 0x00000011,
};
#endif
#if !defined(IL2CPP_STRUCT_EInputSource__Enum_FWDDECL)
#define IL2CPP_STRUCT_EInputSource__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EInputSource__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EInputSource__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EInputSource__Enum_FWDDECL)
#include <Modloader/app/structs/EInputSource__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EInputSource__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
