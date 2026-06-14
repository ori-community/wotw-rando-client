#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AvailableTrackingData__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AvailableTrackingData__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AvailableTrackingData__Enum_DEFINED)
#define IL2CPP_STRUCT_AvailableTrackingData__Enum_DEFINED
enum class AvailableTrackingData__Enum : int32_t {
    None = 0x00000000,
    PositionAvailable = 0x00000001,
    RotationAvailable = 0x00000002,
    VelocityAvailable = 0x00000004,
    AngularVelocityAvailable = 0x00000008,
    AccelerationAvailable = 0x00000010,
    AngularAccelerationAvailable = 0x00000020,
};
#endif
#if !defined(IL2CPP_STRUCT_AvailableTrackingData__Enum_FWDDECL)
#define IL2CPP_STRUCT_AvailableTrackingData__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AvailableTrackingData__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AvailableTrackingData__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AvailableTrackingData__Enum_FWDDECL)
#include <Modloader/app/structs/AvailableTrackingData__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AvailableTrackingData__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
