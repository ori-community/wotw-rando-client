#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::FlameExtinguisher {
    IL2CPP_REGISTER_METHOD(0x012239A0, void, OnFlameEnter, (app::FlameExtinguisher * this_ptr, app::Flammable * flammable))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FlameExtinguisher * this_ptr))
}
