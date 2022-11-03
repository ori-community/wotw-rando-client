#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GhostReplayAnimator {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::GhostReplayAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::GhostReplayAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::GhostReplayAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x007E49F0, float, get_Duration, (app::GhostReplayAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::GhostReplayAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E4AB0, void, LoadData, (app::GhostReplayAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A4BA0, void, ctor, (app::GhostReplayAnimator * this_ptr))
} // namespace app::classes::GhostReplayAnimator
