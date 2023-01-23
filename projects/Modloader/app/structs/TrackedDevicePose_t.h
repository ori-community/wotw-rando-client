#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrackedDevicePose_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrackedDevicePose_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackedDevicePose_t_DEFINED)
#include <Modloader/app/structs/ETrackingResult__Enum.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/HmdVector3_t.h>
#if defined(IL2CPP_STRUCT_HmdMatrix34_t_DEFINED) && defined(IL2CPP_STRUCT_HmdVector3_t_DEFINED) && defined(IL2CPP_STRUCT_ETrackingResult__Enum_DEFINED)
#define IL2CPP_STRUCT_TrackedDevicePose_t_DEFINED
struct TrackedDevicePose_t {
    struct HmdMatrix34_t mDeviceToAbsoluteTracking;
    struct HmdVector3_t vVelocity;
    struct HmdVector3_t vAngularVelocity;
    ETrackingResult__Enum eTrackingResult;

    bool bPoseIsValid;
    bool bDeviceIsConnected;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrackedDevicePose_t_FWDDECL)
#define IL2CPP_STRUCT_TrackedDevicePose_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_TrackedDevicePose_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackedDevicePose_t_DEFINED) && !defined(IL2CPP_STRUCT_TrackedDevicePose_t_FWDDECL)
#include <Modloader/app/structs/TrackedDevicePose_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrackedDevicePose_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
