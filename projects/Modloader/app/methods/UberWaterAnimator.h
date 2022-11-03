#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberWaterAnimator {
    IL2CPP_REGISTER_METHOD(0x01292FC0, float, get_Duration, (app::UberWaterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01293340, bool, get_IsLooping, (app::UberWaterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01293640, void, CacheOriginals, (app::UberWaterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01293730, void, RestoreToOriginalState, (app::UberWaterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01293850, void, SampleValue, (app::UberWaterAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x01293A60, void, ctor, (app::UberWaterAnimator * this_ptr))
} // namespace app::classes::UberWaterAnimator
