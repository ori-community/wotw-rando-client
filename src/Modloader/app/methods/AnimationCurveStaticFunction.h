#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationCurve.h>

namespace app::classes::AnimationCurveStaticFunction {
    IL2CPP_REGISTER_METHOD(0x004FC620, float, CurveDuration, app::AnimationCurve* curve)
    IL2CPP_REGISTER_METHOD(0x004FC750, bool, IsLooping, app::AnimationCurve* curve)
    IL2CPP_REGISTER_METHOD(0x004FC800, float, EvaluateSlope, app::AnimationCurve* curve, float time, float delta)
} // namespace app::classes::AnimationCurveStaticFunction
