#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseInputModule__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseInputModule__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseInputModule__VTable_DEFINED)
#define IL2CPP_STRUCT_BaseInputModule__VTable_DEFINED
struct BaseInputModule__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Awake;
    VirtualInvokeData OnEnable;
    VirtualInvokeData Start;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData IsActive;
    VirtualInvokeData OnRectTransformDimensionsChange;
    VirtualInvokeData OnBeforeTransformParentChanged;
    VirtualInvokeData OnTransformParentChanged;
    VirtualInvokeData OnDidApplyAnimationProperties;
    VirtualInvokeData OnCanvasGroupChanged;
    VirtualInvokeData OnCanvasHierarchyChanged;
    VirtualInvokeData IsDestroyed;
    VirtualInvokeData __unknown;
    VirtualInvokeData GetAxisEventData;
    VirtualInvokeData GetBaseEventData;
    VirtualInvokeData IsPointerOverGameObject;
    VirtualInvokeData ShouldActivateModule;
    VirtualInvokeData DeactivateModule;
    VirtualInvokeData ActivateModule;
    VirtualInvokeData UpdateModule;
    VirtualInvokeData IsModuleSupported;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseInputModule__VTable_FWDDECL)
#define IL2CPP_STRUCT_BaseInputModule__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_BaseInputModule__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseInputModule__VTable_DEFINED) && !defined(IL2CPP_STRUCT_BaseInputModule__VTable_FWDDECL)
#include <Modloader/app/structs/BaseInputModule__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseInputModule__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
