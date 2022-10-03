#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Core::Input {
    IL2CPP_REGISTER_METHOD(0x011F91E0, int32_t, get_NormalizedHorizontal, ())
    IL2CPP_REGISTER_METHOD(0x011F9290, float, get_NormalizedVertical, ())
    IL2CPP_REGISTER_METHOD(0x011F9350, app::Vector2, get_Axis, ())
    IL2CPP_REGISTER_METHOD(0x011F93E0, app::Vector2, get_MenuAxis, ())
    IL2CPP_REGISTER_METHOD(0x011F9470, app::Vector2, get_AnalogAxisLeft, ())
    IL2CPP_REGISTER_METHOD(0x011F9500, app::Vector2, get_AnalogAxisRight, ())
    IL2CPP_REGISTER_METHOD(0x011F9590, app::Vector2, get_DigiPadAxis, ())
    IL2CPP_REGISTER_METHOD(0x011F9630, app::Vector2, get_CursorPositionScreen, ())
    IL2CPP_REGISTER_METHOD(0x011F97F0, app::Vector2, get_CursorPositionUI, ())
    IL2CPP_REGISTER_METHOD(0x011F99B0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x011F9A30, app::Input_InputButtonProcessor__Array*, get_Buttons, ())
    IL2CPP_REGISTER_METHOD(0x011F9E80, bool, get_OnAnyButtonPressed, ())
    IL2CPP_REGISTER_METHOD(0x011F9F20, bool, get_AnyButtonPressed, ())
    IL2CPP_REGISTER_METHOD(0x011F9FC0, bool, get_AnyButtonReleased, ())
    IL2CPP_REGISTER_METHOD(0x011FA060, bool, get_OnAnyButtonReleased, ())
    IL2CPP_REGISTER_METHOD(0x011FA100, void, SetAllUsed, (bool used))
    IL2CPP_REGISTER_METHOD(0x011FA190, app::Input_InputButtonProcessor*, GetButton, (app::Input_Button__Enum button))
    IL2CPP_REGISTER_METHOD(0x011FA5B0, app::Input_InputButtonProcessor*, GetCommand, (app::Input_Command__Enum command))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Input_1 * this_ptr))
} // namespace app::classes::Core::Input
