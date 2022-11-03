#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AnimationCurveKeyframeExtensions {
    IL2CPP_REGISTER_METHOD(0x004FC160, bool, SameAs_1, (app::Keyframe ok, app::Keyframe nk))
    IL2CPP_REGISTER_METHOD(0x004FC320, bool, IsIdentical, (app::Keyframe__Array * old_keys, app::AnimationCurve* curve))
    IL2CPP_REGISTER_METHOD(0x004FC520, bool, SameAs_2, (app::Keyframe__Array * old_keys, app::Keyframe__Array* new_keys))
} // namespace app::classes::AnimationCurveKeyframeExtensions
