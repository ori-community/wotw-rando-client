#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/PositionLerpTweenAnimator.h>

namespace app::classes::Moon::PositionLerpTweenAnimator {
    IL2CPP_REGISTER_METHOD(0x01BAB930, app::Transform*, get_EffectiveTranform, (app::PositionLerpTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BABA00, void, Awake, (app::PositionLerpTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BABD80, void, FixedUpdate, (app::PositionLerpTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BABF20, void, OnDrawGizmos, (app::PositionLerpTweenAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAC290, void, ctor, (app::PositionLerpTweenAnimator * this_ptr))
} // namespace app::classes::Moon::PositionLerpTweenAnimator
