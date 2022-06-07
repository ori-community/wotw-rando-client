#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PhysicsKeepAwake {
    IL2CPP_REGISTER_METHOD(0x01152A80, void, Awake, (app::PhysicsKeepAwake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01152B10, void, FixedUpdate, (app::PhysicsKeepAwake * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PhysicsKeepAwake * this_ptr))
}
