#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WideScreenAdjustmentAnimator.h>

namespace app::classes::WideScreenAdjustmentAnimator {
    IL2CPP_REGISTER_METHOD(0x00573350, void, CacheOriginals, (app::WideScreenAdjustmentAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00573420, void, Awake, (app::WideScreenAdjustmentAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005735C0, void, OnDestroy, (app::WideScreenAdjustmentAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00573760, void, OnGameReset, (app::WideScreenAdjustmentAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766138, WideScreenAdjustmentAnimator_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00573830, void, SampleValue, (app::WideScreenAdjustmentAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x005739C0, float, get_Duration, (app::WideScreenAdjustmentAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00573B60, void, RestoreToOriginalState, (app::WideScreenAdjustmentAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::WideScreenAdjustmentAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00573C30, void, ctor, (app::WideScreenAdjustmentAnimator * this_ptr))
} // namespace app::classes::WideScreenAdjustmentAnimator
