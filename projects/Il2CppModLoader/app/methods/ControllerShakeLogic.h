#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ControllerShakeLogic {
    IL2CPP_REGISTER_METHOD(0x011F22A0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x011F2370, void, Awake, (app::ControllerShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F2420, void, OnEnable, (app::ControllerShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F24D0, void, OnDestroy, (app::ControllerShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F25F0, void, FixedUpdate, (app::ControllerShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F2600, void, UpdateShake, (app::ControllerShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F29A0, void, Vibrate, (float strength, float time))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ControllerShakeLogic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011F2C70, void, cctor, ())
}
