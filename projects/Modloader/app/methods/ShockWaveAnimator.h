#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShockWaveAnimator.h>

namespace app::classes::ShockWaveAnimator {
    IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Duration, (app::ShockWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::ShockWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B5010, void, OnStartPlay, (app::ShockWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::ShockWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B5030, void, RestoreToOriginalState, (app::ShockWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B50B0, void, SampleValue, (app::ShockWaveAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x005B5140, void, Start, (app::ShockWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B5160, void, OnFixedUpdate, (app::ShockWaveAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x005B5860, void, OnDrawGizmos, (app::ShockWaveAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B5C00, void, ctor, (app::ShockWaveAnimator * this_ptr))
} // namespace app::classes::ShockWaveAnimator
