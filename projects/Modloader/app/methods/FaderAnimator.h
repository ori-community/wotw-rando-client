#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FaderAnimator.h>

namespace app::classes::FaderAnimator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::FaderAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990B90, void, SampleValue, (app::FaderAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00990DC0, void, RestoreToOriginalState, (app::FaderAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::FaderAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::FaderAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990E80, void, ctor, (app::FaderAnimator * this_ptr))
} // namespace app::classes::FaderAnimator
