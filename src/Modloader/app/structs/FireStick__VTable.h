#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FireStick__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FireStick__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireStick__VTable_DEFINED)
#define IL2CPP_STRUCT_FireStick__VTable_DEFINED
struct FireStick__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_CanBeHeld;
    VirtualInvokeData get_CanBeUsed;
    VirtualInvokeData get_CanBeDropped;
    VirtualInvokeData OnPickedUp;
    VirtualInvokeData OnDropped;
    VirtualInvokeData get_Weapon;
    VirtualInvokeData BeginUse;
    VirtualInvokeData EndUse;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_CanBeUsed_1;
    VirtualInvokeData get_Weapon_1;
    VirtualInvokeData SafeDestroy;
    VirtualInvokeData OnPickedUp_1;
    VirtualInvokeData OnDropped_1;
    VirtualInvokeData BeginUse_1;
    VirtualInvokeData EndUse_1;
    VirtualInvokeData GetAnimationType;
    VirtualInvokeData GetGravity;
    VirtualInvokeData GetThrowVelocityMultiplier;
    VirtualInvokeData OnStartAim;
    VirtualInvokeData OnUpdateAim;
    VirtualInvokeData OnThrow;
    VirtualInvokeData get_PreviusPositionForWaterfallInteraction;
    VirtualInvokeData get_PositionForWaterfallInteraction;
    VirtualInvokeData get_SpeedForWaterfallInteraction;
    VirtualInvokeData set_SpeedForWaterfallInteraction;
    VirtualInvokeData get_BoundsForWaterfallInteraction;
    VirtualInvokeData get_WaterfallIntersectionMode;
    VirtualInvokeData get_RigidbodyForWaterfallInteraction;
    VirtualInvokeData get_IsFlamable;
};
#endif
#if !defined(IL2CPP_STRUCT_FireStick__VTable_FWDDECL)
#define IL2CPP_STRUCT_FireStick__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_FireStick__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_FireStick__VTable_DEFINED) && !defined(IL2CPP_STRUCT_FireStick__VTable_FWDDECL)
#include <Modloader/app/structs/FireStick__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FireStick__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
