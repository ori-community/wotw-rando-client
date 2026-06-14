#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AxisEventData.h>
#include <Modloader/app/structs/CanvasUpdate__Enum.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Scrollbar.h>
#include <Modloader/app/structs/Scrollbar_Axis__Enum.h>
#include <Modloader/app/structs/Scrollbar_Direction__Enum.h>
#include <Modloader/app/structs/Scrollbar_ScrollEvent.h>
#include <Modloader/app/structs/Selectable.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::UnityEngine::UI::Scrollbar {
    IL2CPP_REGISTER_METHOD(0x0266F180, void, ctor, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2BCB0, app::RectTransform*, get_handleRect, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F3B0, void, set_handleRect, app::Scrollbar* this_ptr, app::RectTransform* value)
    IL2CPP_REGISTER_METHOD(0x0266F480, app::Scrollbar_Direction__Enum, get_direction, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F490, void, set_direction, app::Scrollbar* this_ptr, app::Scrollbar_Direction__Enum value)
    IL2CPP_REGISTER_METHOD(0x0266F540, float, get_value, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F630, void, set_value, app::Scrollbar* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0266F640, float, get_size, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F650, void, set_size, app::Scrollbar* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0266F760, int32_t, get_numberOfSteps, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F770, void, set_numberOfSteps, app::Scrollbar* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01F36B60, app::Scrollbar_ScrollEvent*, get_onValueChanged, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBB0, void, set_onValueChanged, app::Scrollbar* this_ptr, app::Scrollbar_ScrollEvent* value)
    IL2CPP_REGISTER_METHOD(0x0266F860, float, get_stepSize, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebuild, app::Scrollbar* this_ptr, app::CanvasUpdate__Enum executing)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LayoutComplete, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F890, void, OnEnable, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F8D0, void, OnDisable, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F8E0, void, UpdateCachedReferences, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F630, void, Set_1, app::Scrollbar* this_ptr, float input)
    IL2CPP_REGISTER_METHOD(0x0266FAC0, void, Set_2, app::Scrollbar* this_ptr, float input, bool send_callback)
    IL2CPP_REGISTER_METHOD(0x0266FC10, void, OnRectTransformDimensionsChange, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266FC50, app::Scrollbar_Axis__Enum, get_axis, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266FC60, bool, get_reverseValue, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266FC80, void, UpdateVisuals, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266FF00, void, UpdateDrag, app::Scrollbar* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x02670290, bool, MayDrag, app::Scrollbar* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x02670300, void, OnBeginDrag, app::Scrollbar* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x026705C0, void, OnDrag, app::Scrollbar* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x026706A0, void, OnPointerDown, app::Scrollbar* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x02670830, app::IEnumerator*, ClickRepeat, app::Scrollbar* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x02670990, void, OnPointerUp, app::Scrollbar* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x026709D0, void, OnMove, app::Scrollbar* this_ptr, app::AxisEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x02670D80, app::Selectable*, FindSelectableOnLeft, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02670DB0, app::Selectable*, FindSelectableOnRight, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02670DE0, app::Selectable*, FindSelectableOnUp, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02670E10, app::Selectable*, FindSelectableOnDown, app::Scrollbar* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02670E40, void, OnInitializePotentialDrag, app::Scrollbar* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x02670E60, void, SetDirection, app::Scrollbar* this_ptr, app::Scrollbar_Direction__Enum direction, bool include_rect_layouts)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, ICanvasElement_get_transform, app::Scrollbar* this_ptr)
} // namespace app::classes::UnityEngine::UI::Scrollbar
