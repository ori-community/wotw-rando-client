#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacySetKuAnimator.h>

namespace app::classes::LegacySetKuAnimator {
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsLooping, (app::LegacySetKuAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::LegacySetKuAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::LegacySetKuAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00A35910, void, OnStartPlay, (app::LegacySetKuAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Duration, (app::LegacySetKuAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::LegacySetKuAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A4BA0, void, ctor, (app::LegacySetKuAnimator * this_ptr))
} // namespace app::classes::LegacySetKuAnimator
