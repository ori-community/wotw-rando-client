#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyInstantiateAnimator.h>

namespace app::classes::LegacyInstantiateAnimator {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::LegacyInstantiateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::LegacyInstantiateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A28B20, void, SampleValue, (app::LegacyInstantiateAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x003FDAA0, float, get_Duration, (app::LegacyInstantiateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87F0, void, OnStopPlay, (app::LegacyInstantiateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A28E10, void, RestoreToOriginalState, (app::LegacyInstantiateAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A28F20, void, ctor, (app::LegacyInstantiateAnimator * this_ptr))
} // namespace app::classes::LegacyInstantiateAnimator
