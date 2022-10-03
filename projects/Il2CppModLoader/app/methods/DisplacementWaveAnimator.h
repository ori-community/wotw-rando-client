#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DisplacementWaveAnimator {
    IL2CPP_REGISTER_METHOD(0x00417FF0, float, get_Duration, (app::DisplacementWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::DisplacementWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::DisplacementWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B99020, void, RestoreToOriginalState, (app::DisplacementWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B99030, void, SampleValue, (app::DisplacementWaveAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00B99210, void, OnStartPlay, (app::DisplacementWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A4BA0, void, ctor, (app::DisplacementWaveAnimator * this_ptr))
} // namespace app::classes::DisplacementWaveAnimator
