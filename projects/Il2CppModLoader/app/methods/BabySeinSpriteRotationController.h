#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BabySeinSpriteRotationController {
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (app::BabySeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (app::BabySeinSpriteRotationController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F780D0, void, FixedUpdate, (app::BabySeinSpriteRotationController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::BabySeinSpriteRotationController * this_ptr))
}
