#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacySpring {
    IL2CPP_REGISTER_METHOD(0x00A377C0, void, OnCollisionEnter, (app::LegacySpring * this_ptr, app::Collision * collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LegacySpring * this_ptr))
}
