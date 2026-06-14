#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PointerEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PointerEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerEventData__Fields_DEFINED)
#include <Modloader/app/structs/BaseEventData__Fields.h>
#include <Modloader/app/structs/PointerEventData_InputButton__Enum.h>
#include <Modloader/app/structs/RaycastResult.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_BaseEventData__Fields_DEFINED) && defined(IL2CPP_STRUCT_RaycastResult_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_PointerEventData_InputButton__Enum_DEFINED)
#define IL2CPP_STRUCT_PointerEventData__Fields_DEFINED
struct GameObject;
struct List_1_UnityEngine_GameObject_;
struct PointerEventData__Fields {
    struct BaseEventData__Fields _;
    struct GameObject* _pointerEnter_k__BackingField;
    struct GameObject* m_PointerPress;
    struct GameObject* _lastPress_k__BackingField;
    struct GameObject* _rawPointerPress_k__BackingField;
    struct GameObject* _pointerDrag_k__BackingField;
    struct RaycastResult _pointerCurrentRaycast_k__BackingField;
    struct RaycastResult _pointerPressRaycast_k__BackingField;
    struct List_1_UnityEngine_GameObject_* hovered;
    bool _eligibleForClick_k__BackingField;
    int32_t _pointerId_k__BackingField;
    struct Vector2 _position_k__BackingField;
    struct Vector2 _delta_k__BackingField;
    struct Vector2 _pressPosition_k__BackingField;
    struct Vector3 _worldPosition_k__BackingField;
    struct Vector3 _worldNormal_k__BackingField;
    float _clickTime_k__BackingField;
    int32_t _clickCount_k__BackingField;
    struct Vector2 _scrollDelta_k__BackingField;
    bool _useDragThreshold_k__BackingField;
    bool _dragging_k__BackingField;
    PointerEventData_InputButton__Enum _button_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PointerEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PointerEventData__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_PointerEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PointerEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PointerEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PointerEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PointerEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
