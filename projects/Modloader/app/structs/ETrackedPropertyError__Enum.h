#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ETrackedPropertyError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ETrackedPropertyError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ETrackedPropertyError__Enum_DEFINED)
#define IL2CPP_STRUCT_ETrackedPropertyError__Enum_DEFINED
enum class ETrackedPropertyError__Enum : int32_t {
    TrackedProp_Success = 0x00000000,
    TrackedProp_WrongDataType = 0x00000001,
    TrackedProp_WrongDeviceClass = 0x00000002,
    TrackedProp_BufferTooSmall = 0x00000003,
    TrackedProp_UnknownProperty = 0x00000004,
    TrackedProp_InvalidDevice = 0x00000005,
    TrackedProp_CouldNotContactServer = 0x00000006,
    TrackedProp_ValueNotProvidedByDevice = 0x00000007,
    TrackedProp_StringExceedsMaximumLength = 0x00000008,
    TrackedProp_NotYetAvailable = 0x00000009,
    TrackedProp_PermissionDenied = 0x0000000a,
    TrackedProp_InvalidOperation = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_ETrackedPropertyError__Enum_FWDDECL)
#define IL2CPP_STRUCT_ETrackedPropertyError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ETrackedPropertyError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ETrackedPropertyError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ETrackedPropertyError__Enum_FWDDECL)
#include <Modloader/app/structs/ETrackedPropertyError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ETrackedPropertyError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
