#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayerInput {
    IL2CPP_REGISTER_METHOD(0x014111C0, void, ClearControls, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddXboxOneControls, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AddSwitchControls, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01411A70, void, AddControllerControls, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01414010, void, AddKeyboardControls, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014149F0, void, AddKeyCodesToButtonInput, (app::PlayerInput * this_ptr, app::KeyCode__Enum__Array* key_codes, app::CompoundButtonInput* button_input))
    IL2CPP_REGISTER_METHOD(0x01414C70, void, Awake, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01416840, float, SimplifyAxis, (app::PlayerInput * this_ptr, float x))
    IL2CPP_REGISTER_METHOD(0x014168F0, void, ApplyDeadzone, (app::PlayerInput * this_ptr, float* x, float* y, float dead_zone))
    IL2CPP_REGISTER_METHOD(0x01416A40, void, FixedUpdate, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01417880, void, RefreshControls, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01418100, void, RefreshControlScheme, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01418300, void, InitInputCache, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01418750, void, RefreshLastPressedButton, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01418900, bool, get_WasKeyboardUsedLast, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014189C0, bool, get_IsUsingMouse, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01418A80, bool, get_WasKeyboardKeyUsedLast, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01418A90, bool, KeyboardUsedLast_1, (app::PlayerInput * this_ptr, app::IButtonInput* i_button_input))
    IL2CPP_REGISTER_METHOD(0x01418C90, bool, KeyboardUsedLast_2, (app::PlayerInput * this_ptr, app::IAxisInput* i_axis_input))
    IL2CPP_REGISTER_METHOD(0x01418EC0, bool, IsAnyStartPressed, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01419290, void, ctor, (app::PlayerInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0141CBF0, void, cctor, ())
} // namespace app::classes::PlayerInput
