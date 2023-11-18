#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EDeviceActivityLevel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EDeviceActivityLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EDeviceActivityLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_EDeviceActivityLevel__Enum_DEFINED
enum class EDeviceActivityLevel__Enum : int32_t {
    k_EDeviceActivityLevel_Unknown = -1,
    k_EDeviceActivityLevel_Idle = 0x00000000,
    k_EDeviceActivityLevel_UserInteraction = 0x00000001,
    k_EDeviceActivityLevel_UserInteraction_Timeout = 0x00000002,
    k_EDeviceActivityLevel_Standby = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_EDeviceActivityLevel__Enum_FWDDECL)
#define IL2CPP_STRUCT_EDeviceActivityLevel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EDeviceActivityLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EDeviceActivityLevel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EDeviceActivityLevel__Enum_FWDDECL)
#include <Modloader/app/structs/EDeviceActivityLevel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EDeviceActivityLevel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
