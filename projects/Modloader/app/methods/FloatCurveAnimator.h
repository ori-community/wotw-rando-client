#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FloatCurveAnimator {
    IL2CPP_REGISTER_METHOD(0x01270690, void, CacheOriginals, (app::FloatCurveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01270710, void, SampleValue, (app::FloatCurveAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x01270690, void, RestoreToOriginalState, (app::FloatCurveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FD4D0, float, IAnimatedValueProvider_float__GetValue, (app::FloatCurveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01270800, bool, IAnimatedValueProvider_bool__GetValue, (app::FloatCurveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::FloatCurveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::FloatCurveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01270820, bool, WasSampled, (app::FloatCurveAnimator * this_ptr, int32_t frames))
    IL2CPP_REGISTER_METHOD(0x012708F0, void, ctor, (app::FloatCurveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, IAnimatedValueProvider_float__get_name, (app::FloatCurveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, IAnimatedValueProvider_bool__get_name, (app::FloatCurveAnimator * this_ptr))
} // namespace app::classes::FloatCurveAnimator
