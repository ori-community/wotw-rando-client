#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRApplicationType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRApplicationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRApplicationType__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRApplicationType__Enum_DEFINED
enum class EVRApplicationType__Enum : int32_t {
    VRApplication_Other = 0x00000000,
    VRApplication_Scene = 0x00000001,
    VRApplication_Overlay = 0x00000002,
    VRApplication_Background = 0x00000003,
    VRApplication_Utility = 0x00000004,
    VRApplication_VRMonitor = 0x00000005,
    VRApplication_SteamWatchdog = 0x00000006,
    VRApplication_Bootstrapper = 0x00000007,
    VRApplication_Max = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRApplicationType__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRApplicationType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRApplicationType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRApplicationType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRApplicationType__Enum_FWDDECL)
#include <Modloader/app/structs/EVRApplicationType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRApplicationType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
