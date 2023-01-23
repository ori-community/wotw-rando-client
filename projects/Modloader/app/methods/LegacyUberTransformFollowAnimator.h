#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyUberTransformFollowAnimator.h>

namespace app::classes::LegacyUberTransformFollowAnimator {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::LegacyUberTransformFollowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87D0, void, OnStartPlay, (app::LegacyUberTransformFollowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01130390, void, CacheOriginals, (app::LegacyUberTransformFollowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::LegacyUberTransformFollowAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x01130790, float, get_Duration, (app::LegacyUberTransformFollowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011307A0, void, RestoreToOriginalState, (app::LegacyUberTransformFollowAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01130990, void, ctor, (app::LegacyUberTransformFollowAnimator * this_ptr))
} // namespace app::classes::LegacyUberTransformFollowAnimator
