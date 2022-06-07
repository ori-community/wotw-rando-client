#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::PositionLerpTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x01BAB930, app::Transform *, get_EffectiveTranform, (app::PositionLerpTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BABA00, void, Awake, (app::PositionLerpTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BABD80, void, FixedUpdate, (app::PositionLerpTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BABF20, void, OnDrawGizmos, (app::PositionLerpTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAC290, void, ctor, (app::PositionLerpTweenAnimator * this_ptr))
}
