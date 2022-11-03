#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::OriAnimator {
    IL2CPP_REGISTER_METHOD(0x00621460, app::MoonAnimator*, GetMoonAnimator, (app::OriAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00621560, float, get_Duration, (app::OriAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006216D0, bool, get_IsLooping, (app::OriAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::OriAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::OriAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00621840, void, SampleValue, (app::OriAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x006218D0, void, OnDrawGizmos, (app::OriAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A4BA0, void, ctor, (app::OriAnimator * this_ptr))
} // namespace app::classes::OriAnimator
