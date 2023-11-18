#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScalableAnimationPlayer_c.h>
#include <Modloader/app/structs/ScalableAnimationPlayer_ScalingInterval.h>

namespace app::classes::Moon::ScalableAnimationPlayer___c {
    IL2CPP_REGISTER_METHOD(0x01BAEFA0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ScalableAnimationPlayer_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAF0E0, int32_t, _UpdateIntervals_b__39_0, (app::ScalableAnimationPlayer_c * this_ptr, app::ScalableAnimationPlayer_ScalingInterval* c1, app::ScalableAnimationPlayer_ScalingInterval* c2))
} // namespace app::classes::Moon::ScalableAnimationPlayer___c
