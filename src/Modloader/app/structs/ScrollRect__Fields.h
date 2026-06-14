#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScrollRect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScrollRect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollRect__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/DrivenRectTransformTracker.h>
#include <Modloader/app/structs/ScrollRect_MovementType__Enum.h>
#include <Modloader/app/structs/ScrollRect_ScrollbarVisibility__Enum.h>
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ScrollRect_MovementType__Enum_DEFINED) && defined(IL2CPP_STRUCT_ScrollRect_ScrollbarVisibility__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_DrivenRectTransformTracker_DEFINED)
#define IL2CPP_STRUCT_ScrollRect__Fields_DEFINED
struct RectTransform;
struct Scrollbar;
struct ScrollRect_ScrollRectEvent;
struct Vector3__Array;
struct ScrollRect__Fields {
    struct UIBehaviour__Fields _;
    struct RectTransform* m_Content;
    bool m_Horizontal;
    bool m_Vertical;
    ScrollRect_MovementType__Enum m_MovementType;

    float m_Elasticity;
    bool m_Inertia;
    float m_DecelerationRate;
    float m_ScrollSensitivity;
    struct RectTransform* m_Viewport;
    struct Scrollbar* m_HorizontalScrollbar;
    struct Scrollbar* m_VerticalScrollbar;
    ScrollRect_ScrollbarVisibility__Enum m_HorizontalScrollbarVisibility;

    ScrollRect_ScrollbarVisibility__Enum m_VerticalScrollbarVisibility;

    float m_HorizontalScrollbarSpacing;
    float m_VerticalScrollbarSpacing;
    struct ScrollRect_ScrollRectEvent* m_OnValueChanged;
    struct Vector2 m_PointerStartLocalCursor;
    struct Vector2 m_ContentStartPosition;
    struct RectTransform* m_ViewRect;
    struct Bounds m_ContentBounds;
    struct Bounds m_ViewBounds;
    struct Vector2 m_Velocity;
    bool m_Dragging;
    bool m_Scrolling;
    struct Vector2 m_PrevPosition;
    struct Bounds m_PrevContentBounds;
    struct Bounds m_PrevViewBounds;
    bool m_HasRebuiltLayout;
    bool m_HSliderExpand;
    bool m_VSliderExpand;
    float m_HSliderHeight;
    float m_VSliderWidth;
    struct RectTransform* m_Rect;
    struct RectTransform* m_HorizontalScrollbarRect;
    struct RectTransform* m_VerticalScrollbarRect;
    struct DrivenRectTransformTracker m_Tracker;
    struct Vector3__Array* m_Corners;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScrollRect__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScrollRect__Fields_FWDDECL
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/ScrollRect_ScrollRectEvent.h>
#include <Modloader/app/structs/Scrollbar.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_ScrollRect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollRect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScrollRect__Fields_FWDDECL)
#include <Modloader/app/structs/ScrollRect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScrollRect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
