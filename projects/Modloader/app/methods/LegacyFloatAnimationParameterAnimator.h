#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyFloatAnimationParameterAnimator.h>

namespace app::classes::LegacyFloatAnimationParameterAnimator {
    IL2CPP_REGISTER_METHOD(0x004C87D0, void, OnStartPlay, (app::LegacyFloatAnimationParameterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A24500, void, CacheOriginals, (app::LegacyFloatAnimationParameterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A24560, void, SampleValue, (app::LegacyFloatAnimationParameterAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00A245F0, void, RestoreToOriginalState, (app::LegacyFloatAnimationParameterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A24640, float, get_Duration, (app::LegacyFloatAnimationParameterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A24670, bool, get_IsLooping, (app::LegacyFloatAnimationParameterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A24750, bool, get_IsValid, (app::LegacyFloatAnimationParameterAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A24840, void, ctor, (app::LegacyFloatAnimationParameterAnimator * this_ptr))
} // namespace app::classes::LegacyFloatAnimationParameterAnimator
