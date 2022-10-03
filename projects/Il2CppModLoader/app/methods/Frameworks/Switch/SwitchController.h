#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::frameworks::Switch::SwitchController {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Vibrate_1, (float left, float right, float left_trigger, float right_trigger, float duration))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetControllerVibration, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LoadVibrationData, (app::SwitchController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5B020, void, LoadVibrationJson, (app::SwitchController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5B100, void, LoadVibrationBinary, (app::SwitchController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5B490, void, Vibrate_2, (uint32_t id, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00F5B550, void, Vibrate_3, (uint32_t id, app::Vector3 position, bool force))
    IL2CPP_REGISTER_METHOD(0x00F5B710, void, Vibrate_4, (uint32_t id, app::Vector3 position, float volume, bool force))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitializeControllers, ())
    IL2CPP_REGISTER_METHOD(0x00F5B850, void, Update, (app::SwitchController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DoUpdate, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ShowApplet, ())
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetButton, (app::Button__Enum button))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, GetAxis, (app::Axis__Enum_1 axis))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SwitchController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5B8E0, void, cctor, ())
} // namespace app::classes::frameworks::Switch::SwitchController
