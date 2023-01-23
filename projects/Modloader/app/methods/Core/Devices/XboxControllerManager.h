#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XboxControllerManager.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::Core::Devices::XboxControllerManager {
    IL2CPP_REGISTER_METHOD(0x011F8410, app::XboxControllerManager*, get_CurrentController, ())
    IL2CPP_REGISTER_METHOD(0x011F8490, void, Vibrate, (app::XboxControllerManager * this_ptr, app::Vector2 magnitude, float duration))
    IL2CPP_REGISTER_METHOD(0x011F84C0, void, Awake, (app::XboxControllerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F85F0, void, OnDestroy, (app::XboxControllerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F8740, void, FixedUpdate, (app::XboxControllerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F8910, void, OnApplicationQuit, (app::XboxControllerManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F8910, void, OnApplicationFocus, (app::XboxControllerManager * this_ptr, bool focus_status))
    IL2CPP_REGISTER_METHOD(0x011F8920, void, ResetControllerVibration, ())
    IL2CPP_REGISTER_METHOD(0x011F89C0, void, SetCurrentMotorVibration, (uint32_t controller_index, app::Vector2 magnitude))
    IL2CPP_REGISTER_METHOD(0x011F8B20, void, ctor, (app::XboxControllerManager * this_ptr))
} // namespace app::classes::Core::Devices::XboxControllerManager
