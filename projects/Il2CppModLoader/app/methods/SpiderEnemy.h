#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiderEnemy {
    IL2CPP_REGISTER_METHOD(0x011BB730, void, Awake, (app::SpiderEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BB7F0, void, FixedUpdate, (app::SpiderEnemy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BC500, app::Vector2, GetSpringForce, (app::SpiderEnemy * this_ptr, float spring, float distance, app::Vector2 actual_distance))
    IL2CPP_REGISTER_METHOD(0x011BC640, void, ctor, (app::SpiderEnemy * this_ptr))
} // namespace app::classes::SpiderEnemy
