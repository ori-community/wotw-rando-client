#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::XboxOneController {
    IL2CPP_REGISTER_METHOD(0x005977E0, app::Action*, get_OnLastControllerDisconnect, ())
    IL2CPP_REGISTER_METHOD(0x00597860, void, set_OnLastControllerDisconnect, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x005978F0, app::Action*, get_OnActiveControllerDisconnect, ())
    IL2CPP_REGISTER_METHOD(0x00597970, void, set_OnActiveControllerDisconnect, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x00597A00, app::Action_1_Int32_*, get_OnWillSwitchController, ())
    IL2CPP_REGISTER_METHOD(0x00597A80, void, set_OnWillSwitchController, (app::Action_1_Int32_ * value))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, GetGamepadPressingStart, ())
    IL2CPP_REGISTER_METHOD(0x00597B20, bool, RequireGamepad, (app::Action * success))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateGamepads, ())
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, get_ActiveGamepad, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_ActiveGamepad, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, uint64_t, get_ActiveController, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AutoSwitchController, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_AutoSwitchController, (bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetCurrentGamepad, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MakeFirstGamepadCurrent, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Vibrate, (float left, float right, float left_trigger, float right_trigger, float duration))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ResetControllerVibration, ())
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetAxis, (app::XboxOneController_Axis__Enum axis))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::XboxOneController * this_ptr))
} // namespace app::classes::XboxOneController
