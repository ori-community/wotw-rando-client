#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PullablePole__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PullablePole__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PullablePole__VTable_DEFINED)
#define IL2CPP_STRUCT_PullablePole__VTable_DEFINED
struct PullablePole__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CanGrab;
    VirtualInvokeData OnGrabbed;
    VirtualInvokeData OnReleased;
    VirtualInvokeData GetPosition;
    VirtualInvokeData GetPosition_1;
    VirtualInvokeData GetDirection;
    VirtualInvokeData GetHorizontalAngle;
    VirtualInvokeData GetVerticalAngle;
    VirtualInvokeData IsVertical;
    VirtualInvokeData AdvancePosition;
    VirtualInvokeData AllowVertical;
    VirtualInvokeData AllowHorizontal;
    VirtualInvokeData AddForce;
    VirtualInvokeData AddImpulse;
    VirtualInvokeData RopeMinPosition;
    VirtualInvokeData RopeMaxPosition;
    VirtualInvokeData IsRopeSlippery;
    VirtualInvokeData CanHandStand;
    VirtualInvokeData OnGrabbed_1;
    VirtualInvokeData OnReleased_1;
    VirtualInvokeData GetRequirementsForTimeline;
};
#endif
#if !defined(IL2CPP_STRUCT_PullablePole__VTable_FWDDECL)
#define IL2CPP_STRUCT_PullablePole__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_PullablePole__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PullablePole__VTable_DEFINED) && !defined(IL2CPP_STRUCT_PullablePole__VTable_FWDDECL)
#include <Modloader/app/structs/PullablePole__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PullablePole__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
