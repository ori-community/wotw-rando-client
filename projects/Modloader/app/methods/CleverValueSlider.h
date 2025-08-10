#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemGroup.h>
#include <Modloader/app/structs/CleverValueSlider.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::CleverValueSlider {
    IL2CPP_REGISTER_METHOD(0x012C19C0, float, get_Step, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01176330, void, set_Step, app::CleverValueSlider* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0061BAF0, float, get_AccelerationRampTime, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C1A70, float, get_NormalizedValue, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C1C20, void, set_NormalizedValue, app::CleverValueSlider* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x012C1D90, float, get_NormalizedDefaultValue, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C1E80, float, get_MouseDragStepParameter, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B39320, bool, get_IsActive, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C1EA0, void, set_IsActive, app::CleverValueSlider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012C1EC0, bool, get_IsVisible, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C1ED0, void, set_IsVisible, app::CleverValueSlider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012C1EE0, bool, get_IsHighlightVisible, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C1EF0, void, set_IsHighlightVisible, app::CleverValueSlider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x012C2090, void, Awake, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B99730, void, OnEnable, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanBeEntered, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C20B0, void, EnterInGroup, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C21C0, void, PlayDownSound, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C2510, void, PlayUpSound, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C2860, int32_t, get_HoldAccelerationMultiplier, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C2880, float, get_AcceleratedStep, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C29E0, void, Start, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C29F0, void, FixedUpdate, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C3C50, void, UpdateSlider, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C3EC0, void, SetSliderDefaultValueBar, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C4160, app::Rect, get_DotRect, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C4320, app::Rect, get_SliderRect, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C4330, void, CacheSliderBounds, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C4550, bool, OnMenuItemChangedInGroup, app::CleverValueSlider* this_ptr, app::CleverMenuItemGroup* group)
    IL2CPP_REGISTER_METHOD(0x012C4650, void, RefreshDisplayedValue, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012C4750, app::String*, GetValueToDisplay, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ApplyValueOnSliderReleased, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateStep, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00867970, void, ctor, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420240, void, _PlayDownSound_b__54_0, app::CleverValueSlider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420240, void, _PlayUpSound_b__55_0, app::CleverValueSlider* this_ptr)
} // namespace app::classes::CleverValueSlider
