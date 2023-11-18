#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraAnimator.h>

namespace app::classes::CameraAnimator {
    IL2CPP_REGISTER_METHOD(0x00933870, bool, get_IsLooping, (app::CameraAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01681520, void, CacheOriginals, (app::CameraAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01681660, void, SampleValue, (app::CameraAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x01681B10, float, get_Duration, (app::CameraAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01681C70, void, RestoreToOriginalState, (app::CameraAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01681FA0, void, OnStartPlay, (app::CameraAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01681FB0, void, OnStopPlay, (app::CameraAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01681FF0, void, ctor, (app::CameraAnimator * this_ptr))
} // namespace app::classes::CameraAnimator
