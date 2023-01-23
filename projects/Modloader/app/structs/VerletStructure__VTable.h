#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure__VTable_DEFINED)
#define IL2CPP_STRUCT_VerletStructure__VTable_DEFINED
struct VerletStructure__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Moon_ISuspendable_get_Mask;
    VirtualInvokeData Moon_ISuspendable_set_Mask;
    VirtualInvokeData Moon_ISuspendable_get_IsSuspended;
    VirtualInvokeData Moon_ISuspendable_set_IsSuspended;
    VirtualInvokeData OnUpdatePhysics;
    VirtualInvokeData Moon_IUpdateHandler_get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData IFrustumOptimizable_OnFrustumEnter;
    VirtualInvokeData IFrustumOptimizable_OnFrustumExit;
    VirtualInvokeData get_InsideFrustum;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
};
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure__VTable_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_VerletStructure__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure__VTable_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure__VTable_FWDDECL)
#include <Modloader/app/structs/VerletStructure__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
