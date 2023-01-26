#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DofAnimator.h>

namespace app::classes::DofAnimator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::DofAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9BC90, void, SampleValue, (app::DofAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00B9BE90, void, RestoreToOriginalState, (app::DofAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9BF30, void, OnDisable, (app::DofAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933230, float, get_Duration, (app::DofAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::DofAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9BFE0, void, AddDofAnimator, (app::DofAnimator * animator, float weight))
    IL2CPP_REGISTER_METHOD(0x00B9C0D0, void, RemoveDofAnimator, (app::DofAnimator * animator))
    IL2CPP_REGISTER_METHOD(0x00B9C1A0, void, ComputeWeightScale, ())
    IL2CPP_REGISTER_METHOD(0x00B9C400, void, ctor, (app::DofAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9C470, void, cctor, ())
} // namespace app::classes::DofAnimator
