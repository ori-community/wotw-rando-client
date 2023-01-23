#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterControl__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterControl__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl__VTable_DEFINED)
#define IL2CPP_STRUCT_UberWaterControl__VTable_DEFINED
struct UberWaterControl__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData IInteractable_SetInteraction;
    VirtualInvokeData IInteractable_RemoveInteraction;
    VirtualInvokeData IInteractable_DoesOverlap;
    VirtualInvokeData IInteractable_GetPosition;
    VirtualInvokeData IInteractable_GetExplodePoint;
    VirtualInvokeData IInteractable_MaxRadius;
    VirtualInvokeData IInteractable_OnRegistered;
    VirtualInvokeData IInteractable_IsWater;
    VirtualInvokeData IInteractable_get_Index;
    VirtualInvokeData IInteractable_set_Index;
    VirtualInvokeData IInteractable_get_IsRegistered;
    VirtualInvokeData IInteractable_set_IsRegistered;
    VirtualInvokeData get_Bounds;
    VirtualInvokeData get_IsStatic;
    VirtualInvokeData Moon_TimeSlicer_IEnablingModifier_get_ShouldDisable;
    VirtualInvokeData Moon_TimeSlicer_IEnablingModifier_get_ShouldEnable;
    VirtualInvokeData Moon_TimeSlicer_IEnablingModifier_get_ShouldChildrenEnable;
    VirtualInvokeData Moon_TimeSlicer_IEnablingModifier_get_ShouldSetMoonReady;
    VirtualInvokeData ISceneRootPostEnableObserver_OnSceneRootPostEnable;
    VirtualInvokeData ISceneRootPreDisableObserver_OnSceneRootPreDisable;
    VirtualInvokeData IFrustumOptimizable_OnFrustumEnter;
    VirtualInvokeData IFrustumOptimizable_OnFrustumExit;
    VirtualInvokeData IFrustumOptimizable_get_InsideFrustum;
    VirtualInvokeData IFrustumOptimizable_get_Bounds;
    VirtualInvokeData get_AllowCacheBounds;
    VirtualInvokeData Game_IFrustumEnabled_OnFrustumInstantEnabled;
    VirtualInvokeData Moon_ISuspendable_get_Mask;
    VirtualInvokeData Moon_ISuspendable_set_Mask;
    VirtualInvokeData Moon_ISuspendable_get_IsSuspended;
    VirtualInvokeData Moon_ISuspendable_set_IsSuspended;
    VirtualInvokeData Moon_VisualDebug_IDebugRendererSubscriber_RenderDebug;
};
#endif
#if !defined(IL2CPP_STRUCT_UberWaterControl__VTable_FWDDECL)
#define IL2CPP_STRUCT_UberWaterControl__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberWaterControl__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterControl__VTable_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterControl__VTable_FWDDECL)
#include <Modloader/app/structs/UberWaterControl__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterControl__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
