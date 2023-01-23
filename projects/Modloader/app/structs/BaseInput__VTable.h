#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseInput__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseInput__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseInput__VTable_DEFINED)
#define IL2CPP_STRUCT_BaseInput__VTable_DEFINED
struct BaseInput__VTable {
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
    VirtualInvokeData get_compositionString;
    VirtualInvokeData get_imeCompositionMode;
    VirtualInvokeData set_imeCompositionMode;
    VirtualInvokeData get_compositionCursorPos;
    VirtualInvokeData set_compositionCursorPos;
    VirtualInvokeData get_mousePresent;
    VirtualInvokeData GetMouseButtonDown;
    VirtualInvokeData GetMouseButtonUp;
    VirtualInvokeData GetMouseButton;
    VirtualInvokeData get_mousePosition;
    VirtualInvokeData get_mouseScrollDelta;
    VirtualInvokeData get_touchSupported;
    VirtualInvokeData get_touchCount;
    VirtualInvokeData GetTouch;
    VirtualInvokeData GetAxisRaw;
    VirtualInvokeData GetButtonDown;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseInput__VTable_FWDDECL)
#define IL2CPP_STRUCT_BaseInput__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_BaseInput__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseInput__VTable_DEFINED) && !defined(IL2CPP_STRUCT_BaseInput__VTable_FWDDECL)
#include <Modloader/app/structs/BaseInput__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseInput__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
