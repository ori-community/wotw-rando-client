#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::InterpolateCollider {
    IL2CPP_REGISTER_METHOD(0x0063D190, void, Awake, (app::InterpolateCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063DA90, void, FixedUpdate, (app::InterpolateCollider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063E080, void, ctor, (app::InterpolateCollider * this_ptr))
}
