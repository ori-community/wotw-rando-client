#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CleverValueSliderHideMenu {
    IL2CPP_REGISTER_METHOD(0x012C4840, float, get_Value, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047552E8, CleverValueSliderHideMenu_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012C4890, void, set_Value, (app::CleverValueSliderHideMenu * this_ptr, float value))
    IL2CPP_REGISTER_METHODINFO(0x04742678, CleverValueSliderHideMenu_set_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x012C1EE0, bool, get_IsHighlightVisible, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C48E0, void, set_IsHighlightVisible, (app::CleverValueSliderHideMenu * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x012C4B90, bool, get_ShouldSKipUiBackgroundBlur, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C4BB0, void, OnEnable, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C4DF0, void, OnDisable, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C4FC0, void, OnAwake, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C5200, void, FixedUpdate, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateValue, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C52B0, void, EnableBackground, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C5620, void, DisableBackground, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C5A90, void, BackPressed, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F480, CleverValueSliderHideMenu_BackPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBackgroundEnabled, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBackgroundDisabled, (app::CleverValueSliderHideMenu * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C5B70, void, ctor, (app::CleverValueSliderHideMenu * this_ptr))
} // namespace app::classes::CleverValueSliderHideMenu
