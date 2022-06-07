#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::PetrifiedOwlLookStateAnimator {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::PetrifiedOwlLookStateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Duration, (app::PetrifiedOwlLookStateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87D0, void, OnStartPlay, (app::PetrifiedOwlLookStateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87F0, void, OnStopPlay, (app::PetrifiedOwlLookStateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C37270, void, CacheOriginals, (app::PetrifiedOwlLookStateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C372A0, void, RestoreToOriginalState, (app::PetrifiedOwlLookStateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C372D0, void, SampleValue, (app::PetrifiedOwlLookStateAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00C37310, void, ctor, (app::PetrifiedOwlLookStateAnimator * this_ptr))
}
