#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SkeletonAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::MoonAnimator*, get_MoonAnimator, (app::SkeletonAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B3AE0, void, Awake, (app::SkeletonAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B3B90, float, get_Duration, (app::SkeletonAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B3D00, bool, get_IsLooping, (app::SkeletonAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::SkeletonAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::SkeletonAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B3E20, void, SampleValue, (app::SkeletonAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x006B3F50, void, ctor, (app::SkeletonAnimator * this_ptr))
} // namespace app::classes::SkeletonAnimator
