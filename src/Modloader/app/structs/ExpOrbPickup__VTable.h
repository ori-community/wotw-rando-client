#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpOrbPickup__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpOrbPickup__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpOrbPickup__VTable_DEFINED)
#define IL2CPP_STRUCT_ExpOrbPickup__VTable_DEFINED
struct ExpOrbPickup__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData OnFrustumEnter;
    VirtualInvokeData OnFrustumExit;
    VirtualInvokeData get_InsideFrustum;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
    VirtualInvokeData get_EffectiveCollectedEffect;
    VirtualInvokeData OnPoolDespawned_1;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData Awake;
    VirtualInvokeData OnCollectorCandidateTouch;
    VirtualInvokeData Collected;
    VirtualInvokeData PickupStateChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_ExpOrbPickup__VTable_FWDDECL)
#define IL2CPP_STRUCT_ExpOrbPickup__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ExpOrbPickup__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpOrbPickup__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ExpOrbPickup__VTable_FWDDECL)
#include <Modloader/app/structs/ExpOrbPickup__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpOrbPickup__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
