#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AnimationCurveStaticFunction {
    IL2CPP_REGISTER_METHOD(0x004FC620, float, CurveDuration, (app::AnimationCurve * curve))
    IL2CPP_REGISTER_METHOD(0x004FC750, bool, IsLooping, (app::AnimationCurve * curve))
    IL2CPP_REGISTER_METHOD(0x004FC800, float, EvaluateSlope, (app::AnimationCurve * curve, float time, float delta))
}
