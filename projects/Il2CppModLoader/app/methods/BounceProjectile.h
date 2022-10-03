#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::BounceProjectile {
    IL2CPP_REGISTER_METHOD(0x00D3F910, void, FixedUpdate, (app::BounceProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3FA70, void, OnCollisionStay, (app::BounceProjectile * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00D3FF60, void, OnCollisionEnter, (app::BounceProjectile * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00D404B0, void, ctor, (app::BounceProjectile * this_ptr))
} // namespace app::classes::BounceProjectile
