#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::UI::ToggleGroup {
    IL2CPP_REGISTER_METHOD(0x0267C900, void, ctor, (app::ToggleGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0242E6B0, bool, get_allowSwitchOff, (app::ToggleGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_allowSwitchOff, (app::ToggleGroup * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0267CA60, void, ValidateToggleIsInGroup, (app::ToggleGroup * this_ptr, app::Toggle* toggle))
    IL2CPP_REGISTER_METHODINFO(0x04789470, ToggleGroup_ValidateToggleIsInGroup__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0267CBD0, void, NotifyToggleOn, (app::ToggleGroup * this_ptr, app::Toggle* toggle))
    IL2CPP_REGISTER_METHOD(0x0267CEA0, void, UnregisterToggle, (app::ToggleGroup * this_ptr, app::Toggle* toggle))
    IL2CPP_REGISTER_METHOD(0x0267CF60, void, RegisterToggle, (app::ToggleGroup * this_ptr, app::Toggle* toggle))
    IL2CPP_REGISTER_METHOD(0x0267D020, bool, AnyTogglesOn, (app::ToggleGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0267D200, app::IEnumerable_1_UnityEngine_UI_Toggle_*, ActiveToggles, (app::ToggleGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0267D3A0, void, SetAllTogglesOff, (app::ToggleGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0267D4B0, bool, _AnyTogglesOn_m__0, (app::Toggle * x))
    IL2CPP_REGISTER_METHODINFO(0x04734880, ToggleGroup__AnyTogglesOn_m__0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0267D4B0, bool, _ActiveToggles_m__1, (app::Toggle * x))
    IL2CPP_REGISTER_METHODINFO(0x04731EF8, ToggleGroup__ActiveToggles_m__1__MethodInfo)
} // namespace app::classes::UnityEngine::UI::ToggleGroup
