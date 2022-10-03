#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraMultiplyMotionBlurAnimator {
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::CameraMultiplyMotionBlurAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::CameraMultiplyMotionBlurAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01693450, void, SampleValue, (app::CameraMultiplyMotionBlurAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::CameraMultiplyMotionBlurAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01693500, void, RestoreToOriginalState, (app::CameraMultiplyMotionBlurAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEF0A0, void, OnDisable, (app::CameraMultiplyMotionBlurAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012708F0, void, ctor, (app::CameraMultiplyMotionBlurAnimator * this_ptr))
} // namespace app::classes::CameraMultiplyMotionBlurAnimator
