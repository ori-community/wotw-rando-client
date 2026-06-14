#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSystemManager__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSystemManager__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemManager__VTable_DEFINED)
#define IL2CPP_STRUCT_PhysicalSystemManager__VTable_DEFINED
struct PhysicalSystemManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData IFrustumOptimizable_OnFrustumEnter;
    VirtualInvokeData IFrustumOptimizable_OnFrustumExit;
    VirtualInvokeData get_InsideFrustum;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
    VirtualInvokeData Moon_ISuspendable_get_Mask;
    VirtualInvokeData Moon_ISuspendable_set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData ISceneRootPreEnableObserver_OnSceneRootPreEnable;
    VirtualInvokeData OnSceneRootPreDisable;
    VirtualInvokeData OnLateUpdate;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData Moon_TimeSlicer_IEnablingModifier_get_ShouldDisable;
    VirtualInvokeData Moon_TimeSlicer_IEnablingModifier_get_ShouldEnable;
    VirtualInvokeData Moon_TimeSlicer_IEnablingModifier_get_ShouldChildrenEnable;
    VirtualInvokeData Moon_TimeSlicer_IEnablingModifier_get_ShouldSetMoonReady;
    VirtualInvokeData ISceneRootPostEnableObserver_OnSceneRootPostEnable;
    VirtualInvokeData Game_IFrustumEnabled_OnFrustumInstantEnabled;
    VirtualInvokeData IRecordable_get_ParsingGroup;
    VirtualInvokeData Prewarm;
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSystemManager__VTable_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSystemManager__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_PhysicalSystemManager__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSystemManager__VTable_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSystemManager__VTable_FWDDECL)
#include <Modloader/app/structs/PhysicalSystemManager__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSystemManager__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
