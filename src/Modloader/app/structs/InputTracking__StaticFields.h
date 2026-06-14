#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputTracking__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputTracking__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTracking__StaticFields_DEFINED)
#define IL2CPP_STRUCT_InputTracking__StaticFields_DEFINED
struct Action_1_UnityEngine_XR_XRNodeState_;
struct InputTracking__StaticFields {
    struct Action_1_UnityEngine_XR_XRNodeState_* trackingAcquired;
    struct Action_1_UnityEngine_XR_XRNodeState_* trackingLost;
    struct Action_1_UnityEngine_XR_XRNodeState_* nodeAdded;
    struct Action_1_UnityEngine_XR_XRNodeState_* nodeRemoved;
};
#endif
#if !defined(IL2CPP_STRUCT_InputTracking__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_InputTracking__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_XR_XRNodeState_.h>
#endif
#undef IL2CPP_STRUCT_InputTracking__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputTracking__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_InputTracking__StaticFields_FWDDECL)
#include <Modloader/app/structs/InputTracking__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputTracking__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
