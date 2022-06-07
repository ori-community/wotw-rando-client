#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ShowStoryTextAnimator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::ShowStoryTextAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::ShowStoryTextAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::ShowStoryTextAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_Duration, (app::ShowStoryTextAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::ShowStoryTextAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007386A0, void, ctor, (app::ShowStoryTextAnimator * this_ptr))
}
