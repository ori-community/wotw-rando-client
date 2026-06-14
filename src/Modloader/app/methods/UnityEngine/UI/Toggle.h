#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/CanvasUpdate__Enum.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/Toggle.h>
#include <Modloader/app/structs/ToggleGroup.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::UnityEngine::UI::Toggle {
    IL2CPP_REGISTER_METHOD(0x0267BD60, void, ctor, app::Toggle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F36B40, app::ToggleGroup*, get_group, app::Toggle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267BF40, void, set_group, app::Toggle* this_ptr, app::ToggleGroup* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Rebuild, app::Toggle* this_ptr, app::CanvasUpdate__Enum executing)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LayoutComplete, app::Toggle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, app::Toggle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267BF70, void, OnEnable, app::Toggle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267BFB0, void, OnDisable, app::Toggle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267BFE0, void, OnDidApplyAnimationProperties, app::Toggle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267C180, void, SetToggleGroup, app::Toggle* this_ptr, app::ToggleGroup* new_group, bool set_member_value)
    IL2CPP_REGISTER_METHOD(0x0267C4B0, bool, get_isOn, app::Toggle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267C4C0, void, set_isOn, app::Toggle* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0267C4C0, void, Set_1, app::Toggle* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0267C4D0, void, Set_2, app::Toggle* this_ptr, bool value, bool send_callback)
    IL2CPP_REGISTER_METHOD(0x0267C680, void, PlayEffect, app::Toggle* this_ptr, bool instant)
    IL2CPP_REGISTER_METHOD(0x0267C790, void, Start, app::Toggle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267C7A0, void, InternalToggle, app::Toggle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0267C800, void, OnPointerClick, app::Toggle* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x0267C7A0, void, OnSubmit, app::Toggle* this_ptr, app::BaseEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, ICanvasElement_get_transform, app::Toggle* this_ptr)
} // namespace app::classes::UnityEngine::UI::Toggle
