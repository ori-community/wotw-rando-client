#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DistortionAnimator.h>
#include <Modloader/app/structs/Renderer.h>

namespace app::classes::DistortionAnimator {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeAnimated, (app::DistortionAnimator * this_ptr, app::Renderer* r))
    IL2CPP_REGISTER_METHOD(0x00B9A800, void, CacheOriginals, (app::DistortionAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9A9F0, void, SampleValue, (app::DistortionAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::DistortionAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9ABB0, void, RestoreToOriginalState, (app::DistortionAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::DistortionAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9ACC0, void, ctor, (app::DistortionAnimator * this_ptr))
} // namespace app::classes::DistortionAnimator
