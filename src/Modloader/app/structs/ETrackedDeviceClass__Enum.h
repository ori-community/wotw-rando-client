#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ETrackedDeviceClass__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ETrackedDeviceClass__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ETrackedDeviceClass__Enum_DEFINED)
#define IL2CPP_STRUCT_ETrackedDeviceClass__Enum_DEFINED
enum class ETrackedDeviceClass__Enum : int32_t {
    Invalid = 0x00000000,
    HMD = 0x00000001,
    Controller = 0x00000002,
    GenericTracker = 0x00000003,
    TrackingReference = 0x00000004,
    DisplayRedirect = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_ETrackedDeviceClass__Enum_FWDDECL)
#define IL2CPP_STRUCT_ETrackedDeviceClass__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ETrackedDeviceClass__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ETrackedDeviceClass__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ETrackedDeviceClass__Enum_FWDDECL)
#include <Modloader/app/structs/ETrackedDeviceClass__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ETrackedDeviceClass__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
