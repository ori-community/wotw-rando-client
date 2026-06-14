#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AxisEventData.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CanvasUpdate__Enum.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/Selectable.h>
#include <Modloader/app/structs/Slider.h>
#include <Modloader/app/structs/Slider_Axis__Enum.h>
#include <Modloader/app/structs/Slider_Direction__Enum.h>
#include <Modloader/app/structs/Slider_SliderEvent.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::UnityEngine::UI::Slider {
    IL2CPP_REGISTER_METHOD(0x02675C10, void, ctor, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2BCB0, app::RectTransform*, get_fillRect, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02675E40, void, set_fillRect, app::Slider* this_ptr, app::RectTransform* value)
    IL2CPP_REGISTER_METHOD(0x01F36B20, app::RectTransform*, get_handleRect, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02675F10, void, set_handleRect, app::Slider* this_ptr, app::RectTransform* value)
    IL2CPP_REGISTER_METHOD(0x02675FE0, app::Slider_Direction__Enum, get_direction, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02675FF0, void, set_direction, app::Slider* this_ptr, app::Slider_Direction__Enum value)
    IL2CPP_REGISTER_METHOD(0x026760A0, float, get_minValue, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026760B0, void, set_minValue, app::Slider* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x026761A0, float, get_maxValue, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026761B0, void, set_maxValue, app::Slider* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x026762A0, bool, get_wholeNumbers, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026762B0, void, set_wholeNumbers, app::Slider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x026763A0, float, get_value, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02676470, void, set_value, app::Slider* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02676490, float, get_normalizedValue, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026765C0, void, set_normalizedValue, app::Slider* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x026766B0, app::Slider_SliderEvent*, get_onValueChanged, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0065FBF0, void, set_onValueChanged, app::Slider* this_ptr, app::Slider_SliderEvent* value)
    IL2CPP_REGISTER_METHOD(0x026766C0, float, get_stepSize, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebuild, app::Slider* this_ptr, app::CanvasUpdate__Enum executing)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LayoutComplete, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026766F0, void, OnEnable, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0266F8D0, void, OnDisable, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02676740, void, OnDidApplyAnimationProperties, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02676A00, void, UpdateCachedReferences, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02676E10, float, ClampValue, app::Slider* this_ptr, float input)
    IL2CPP_REGISTER_METHOD(0x02676470, void, Set_1, app::Slider* this_ptr, float input)
    IL2CPP_REGISTER_METHOD(0x02676F20, void, Set_2, app::Slider* this_ptr, float input, bool send_callback)
    IL2CPP_REGISTER_METHOD(0x02677020, void, OnRectTransformDimensionsChange, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02677060, app::Slider_Axis__Enum, get_axis, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02677070, bool, get_reverseValue, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02677090, void, UpdateVisuals, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x026774F0, void, UpdateDrag, app::Slider* this_ptr, app::PointerEventData* event_data, app::Camera* cam)
    IL2CPP_REGISTER_METHOD(0x02670290, bool, MayDrag, app::Slider* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x026778F0, void, OnPointerDown, app::Slider* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x02677B60, void, OnDrag, app::Slider* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x02677BB0, void, OnMove, app::Slider* this_ptr, app::AxisEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x02677ED0, app::Selectable*, FindSelectableOnLeft, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02677F00, app::Selectable*, FindSelectableOnRight, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02677F30, app::Selectable*, FindSelectableOnUp, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02677F60, app::Selectable*, FindSelectableOnDown, app::Slider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02670E40, void, OnInitializePotentialDrag, app::Slider* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x02677F90, void, SetDirection, app::Slider* this_ptr, app::Slider_Direction__Enum direction, bool include_rect_layouts)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, ICanvasElement_get_transform, app::Slider* this_ptr)
} // namespace app::classes::UnityEngine::UI::Slider
