#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Extensions::AnimationCurveExtensions {
    IL2CPP_REGISTER_METHOD(0x031B38E0, float, GetMaxAnimationCurveDuration, (app::AnimationCurve__Array * curves))
    IL2CPP_REGISTER_METHOD(0x031B3980, float, GetMinAnimationCurveDuration, (app::AnimationCurve__Array * curves))
    IL2CPP_REGISTER_METHOD(0x031B3A10, app::ParticleSystem_MinMaxCurve, AsMinMaxCurve, (app::AnimationCurve * animation_curve))
    IL2CPP_REGISTER_METHOD(0x031B3A30, float, CurveDuration, (app::AnimationCurve * curve))
    IL2CPP_REGISTER_METHOD(0x004FC620, float, LastKeyTime, (app::AnimationCurve * curve))
    IL2CPP_REGISTER_METHOD(0x031B3C60, void, SetCurveDuration, (app::AnimationCurve * curve, float start, float duration, bool scale_inner_keys))
    IL2CPP_REGISTER_METHOD(0x031B4800, app::Keyframe, CopyKeyframeWithTime, (app::Keyframe frame_to_copy, float time))
    IL2CPP_REGISTER_METHOD(0x031B4830, app::Keyframe, KeyframeWithValue, (app::AnimationCurve * curve, int32_t index, float value))
    IL2CPP_REGISTER_METHOD(0x004FC750, bool, IsLooping, (app::AnimationCurve * curve))
    IL2CPP_REGISTER_METHOD(0x004FC800, float, EvaluateSlope, (app::AnimationCurve * curve, float time, float delta))
    IL2CPP_REGISTER_METHOD(0x031B4910, void, SetTangent, (app::AnimationCurve * curve, app::AnimationCurveExtensions_TangentMode__Enum tangent_mode, int32_t keyframe))
    IL2CPP_REGISTER_METHOD(0x031B4CD0, void, SynchronizeTransitionInto, (app::AnimationCurve * pad, app::AnimationCurve* source))
    IL2CPP_REGISTER_METHOD(0x031B5040, void, SynchronizeTransitionFrom, (app::AnimationCurve * pad, app::AnimationCurve* source))
    IL2CPP_REGISTER_METHOD(0x031B5430, app::Single__Array*, GetUniqueKeyframeTimes, (app::AnimationCurve__Array * curves))
    IL2CPP_REGISTER_METHOD(0x031B5990, int32_t, GetNewTangentKeyMode, (int32_t current_tangent_mode, app::AnimationCurveExtensions_TangentDirection__Enum left_right, app::AnimationCurveExtensions_TangentMode__Enum mode))
} // namespace app::classes::Moon::Extensions::AnimationCurveExtensions
