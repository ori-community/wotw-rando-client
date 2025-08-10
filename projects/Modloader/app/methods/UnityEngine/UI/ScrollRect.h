#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/CanvasUpdate__Enum.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/ScrollRect.h>
#include <Modloader/app/structs/ScrollRect_MovementType__Enum.h>
#include <Modloader/app/structs/ScrollRect_ScrollRectEvent.h>
#include <Modloader/app/structs/ScrollRect_ScrollbarVisibility__Enum.h>
#include <Modloader/app/structs/Scrollbar.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector3__Array.h>

namespace app::classes::UnityEngine::UI::ScrollRect {
    IL2CPP_REGISTER_METHOD(0x02668580, void, ctor, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F22F90, app::RectTransform*, get_content, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_content, app::ScrollRect* this_ptr, app::RectTransform* value)
    IL2CPP_REGISTER_METHOD(0x0265F400, bool, get_horizontal, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_horizontal, app::ScrollRect* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02668810, bool, get_vertical, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004379D0, void, set_vertical, app::ScrollRect* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01F22030, app::ScrollRect_MovementType__Enum, get_movementType, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5130, void, set_movementType, app::ScrollRect* this_ptr, app::ScrollRect_MovementType__Enum value)
    IL2CPP_REGISTER_METHOD(0x024CF360, float, get_elasticity, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_elasticity, app::ScrollRect* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02668820, bool, get_inertia, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004FBAD0, void, set_inertia, app::ScrollRect* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01F2C500, float, get_decelerationRate, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_decelerationRate, app::ScrollRect* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02668830, float, get_scrollSensitivity, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01045ED0, void, set_scrollSensitivity, app::ScrollRect* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01F1A580, app::RectTransform*, get_viewport, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02668840, void, set_viewport, app::ScrollRect* this_ptr, app::RectTransform* value)
    IL2CPP_REGISTER_METHOD(0x02668850, app::Scrollbar*, get_horizontalScrollbar, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02668860, void, set_horizontalScrollbar, app::ScrollRect* this_ptr, app::Scrollbar* value)
    IL2CPP_REGISTER_METHOD(0x02668BB0, app::Scrollbar*, get_verticalScrollbar, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02668BC0, void, set_verticalScrollbar, app::ScrollRect* this_ptr, app::Scrollbar* value)
    IL2CPP_REGISTER_METHOD(0x02668F10, app::ScrollRect_ScrollbarVisibility__Enum, get_horizontalScrollbarVisibility, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02668F20, void, set_horizontalScrollbarVisibility, app::ScrollRect* this_ptr, app::ScrollRect_ScrollbarVisibility__Enum value)
    IL2CPP_REGISTER_METHOD(0x02668F30, app::ScrollRect_ScrollbarVisibility__Enum, get_verticalScrollbarVisibility, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02668F40, void, set_verticalScrollbarVisibility, app::ScrollRect* this_ptr, app::ScrollRect_ScrollbarVisibility__Enum value)
    IL2CPP_REGISTER_METHOD(0x024B65B0, float, get_horizontalScrollbarSpacing, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02668F50, void, set_horizontalScrollbarSpacing, app::ScrollRect* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02668F60, float, get_verticalScrollbarSpacing, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02668F70, void, set_verticalScrollbarSpacing, app::ScrollRect* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02668F80, app::ScrollRect_ScrollRectEvent*, get_onValueChanged, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_onValueChanged, app::ScrollRect* this_ptr, app::ScrollRect_ScrollRectEvent* value)
    IL2CPP_REGISTER_METHOD(0x02668F90, app::RectTransform*, get_viewRect, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026690C0, app::Vector2, get_velocity, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026690E0, void, set_velocity, app::ScrollRect* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x02669110, app::RectTransform*, get_rectTransform, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026691F0, void, Rebuild, app::ScrollRect* this_ptr, app::CanvasUpdate__Enum executing)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LayoutComplete, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026692E0, void, UpdateCachedData, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026698C0, void, OnEnable, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02669C20, void, OnDisable, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266A020, bool, IsActive, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266A110, void, EnsureLayoutHasRebuilt, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266A240, void, StopMovement, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266A300, void, OnScroll, app::ScrollRect* this_ptr, app::PointerEventData* data)
    IL2CPP_REGISTER_METHOD(0x0266A660, void, OnInitializePotentialDrag, app::ScrollRect* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x0266A740, void, OnBeginDrag, app::ScrollRect* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x0266A910, void, OnEndDrag, app::ScrollRect* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x0266A940, void, OnDrag, app::ScrollRect* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x0266AC30, void, SetContentAnchoredPosition, app::ScrollRect* this_ptr, app::Vector2 position)
    IL2CPP_REGISTER_METHOD(0x0266AE40, void, LateUpdate, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266B7C0, void, UpdatePrevData, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266B910, void, UpdateScrollbars, app::ScrollRect* this_ptr, app::Vector2 offset)
    IL2CPP_REGISTER_METHOD(0x0266BC50, app::Vector2, get_normalizedPosition, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266BC90, void, set_normalizedPosition, app::ScrollRect* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0266BCE0, float, get_horizontalNormalizedPosition, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266BEC0, void, set_horizontalNormalizedPosition, app::ScrollRect* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0266BEE0, float, get_verticalNormalizedPosition, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266C0E0, void, set_verticalNormalizedPosition, app::ScrollRect* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0266BEC0, void, SetHorizontalNormalizedPosition, app::ScrollRect* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0266C0E0, void, SetVerticalNormalizedPosition, app::ScrollRect* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0266C100, void, SetNormalizedPosition, app::ScrollRect* this_ptr, float value, int32_t axis)
    IL2CPP_REGISTER_METHOD(0x0266C480, float, RubberDelta, float over_stretching, float view_size)
    IL2CPP_REGISTER_METHOD(0x0266C580, void, OnRectTransformDimensionsChange, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266C590, bool, get_hScrollingNeeded, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266C5F0, bool, get_vScrollingNeeded, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputHorizontal, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputVertical, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_minWidth, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_preferredWidth, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_flexibleWidth, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_minHeight, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_preferredHeight, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_flexibleHeight, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266C650, int32_t, get_layoutPriority, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266C660, void, SetLayoutHorizontal, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266D220, void, SetLayoutVertical, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266D500, void, UpdateScrollbarVisibility, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0266D600,
        void,
        UpdateOneScrollbarVisibility,
        bool x_scrolling_needed,
        bool x_axis_enabled,
        app::ScrollRect_ScrollbarVisibility__Enum scrollbar_visibility,
        app::Scrollbar* scrollbar
    )
    IL2CPP_REGISTER_METHOD(0x0266D800, void, UpdateScrollbarLayout, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266DBD0, void, UpdateBounds, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0266E430,
        void,
        AdjustBounds,
        app::Bounds* view_bounds,
        app::Vector2* content_pivot,
        app::Vector3* content_size,
        app::Vector3* content_pos
    )
    IL2CPP_REGISTER_METHOD(0x0266E5C0, app::Bounds, GetBounds, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266E750, app::Bounds, InternalGetBounds, app::Vector3__Array* corners, app::Matrix4x4* view_world_to_local_matrix)
    IL2CPP_REGISTER_METHOD(0x0266EC40, app::Vector2, CalculateOffset, app::ScrollRect* this_ptr, app::Vector2 delta)
    IL2CPP_REGISTER_METHOD(
        0x0266EC90,
        app::Vector2,
        InternalCalculateOffset,
        app::Bounds* view_bounds,
        app::Bounds* content_bounds,
        bool horizontal,
        bool vertical,
        app::ScrollRect_MovementType__Enum movement_type,
        app::Vector2* delta
    )
    IL2CPP_REGISTER_METHOD(0x0266EF30, void, SetDirty, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F000, void, SetDirtyCaching, app::ScrollRect* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, ICanvasElement_get_transform, app::ScrollRect* this_ptr)
} // namespace app::classes::UnityEngine::UI::ScrollRect
