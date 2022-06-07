#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoveWithCondition {
    IL2CPP_REGISTER_METHOD(0x00869390, float, get_m_normalizedSpeed, (app::MoveWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008693A0, float, GetTweenNormalizedValue, (app::MoveWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008693B0, void, Awake, (app::MoveWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00869520, void, FixedUpdate, (app::MoveWithCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00869990, void, ctor, (app::MoveWithCondition * this_ptr))
}
