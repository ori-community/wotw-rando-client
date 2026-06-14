#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ELaunchOptionType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ELaunchOptionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ELaunchOptionType__Enum_DEFINED)
#define IL2CPP_STRUCT_ELaunchOptionType__Enum_DEFINED
enum class ELaunchOptionType__Enum : int32_t {
    k_ELaunchOptionType_None = 0x00000000,
    k_ELaunchOptionType_Default = 0x00000001,
    k_ELaunchOptionType_SafeMode = 0x00000002,
    k_ELaunchOptionType_Multiplayer = 0x00000003,
    k_ELaunchOptionType_Config = 0x00000004,
    k_ELaunchOptionType_OpenVR = 0x00000005,
    k_ELaunchOptionType_Server = 0x00000006,
    k_ELaunchOptionType_Editor = 0x00000007,
    k_ELaunchOptionType_Manual = 0x00000008,
    k_ELaunchOptionType_Benchmark = 0x00000009,
    k_ELaunchOptionType_Option1 = 0x0000000a,
    k_ELaunchOptionType_Option2 = 0x0000000b,
    k_ELaunchOptionType_Option3 = 0x0000000c,
    k_ELaunchOptionType_OculusVR = 0x0000000d,
    k_ELaunchOptionType_OpenVROverlay = 0x0000000e,
    k_ELaunchOptionType_OSVR = 0x0000000f,
    k_ELaunchOptionType_Dialog = 0x000003e8,
};
#endif
#if !defined(IL2CPP_STRUCT_ELaunchOptionType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ELaunchOptionType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ELaunchOptionType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ELaunchOptionType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ELaunchOptionType__Enum_FWDDECL)
#include <Modloader/app/structs/ELaunchOptionType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ELaunchOptionType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
