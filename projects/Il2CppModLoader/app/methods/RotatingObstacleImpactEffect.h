#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RotatingObstacleImpactEffect {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::RotatingObstacleImpactEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::RotatingObstacleImpactEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCollisionEnter, (app::RotatingObstacleImpactEffect * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RotatingObstacleImpactEffect * this_ptr))
} // namespace app::classes::RotatingObstacleImpactEffect
