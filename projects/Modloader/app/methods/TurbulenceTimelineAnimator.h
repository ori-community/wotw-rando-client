#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TurbulenceManager.h>
#include <Modloader/app/structs/TurbulenceTimelineAnimator.h>

namespace app::classes::TurbulenceTimelineAnimator {
    IL2CPP_REGISTER_METHOD(0x013D5840, app::TurbulenceManager*, get_Manager, (app::TurbulenceTimelineAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::TurbulenceTimelineAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D5A50, void, CacheOriginals, (app::TurbulenceTimelineAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D5B50, void, SampleValue, (app::TurbulenceTimelineAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x013D5D30, float, get_Duration, (app::TurbulenceTimelineAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D5E10, void, RestoreToOriginalState, (app::TurbulenceTimelineAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D5FC0, void, OnDisable, (app::TurbulenceTimelineAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D60E0, void, ctor, (app::TurbulenceTimelineAnimator * this_ptr))
} // namespace app::classes::TurbulenceTimelineAnimator
