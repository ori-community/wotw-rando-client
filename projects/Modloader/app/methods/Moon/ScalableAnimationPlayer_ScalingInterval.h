#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ScalableAnimationPlayer_ScalingInterval.h>

namespace app::classes::Moon::ScalableAnimationPlayer_ScalingInterval {
    IL2CPP_REGISTER_METHOD(0x01BAF170, float, get_NormalizedEnd, (app::ScalableAnimationPlayer_ScalingInterval * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ScalableAnimationPlayer_ScalingInterval * this_ptr))
} // namespace app::classes::Moon::ScalableAnimationPlayer_ScalingInterval
