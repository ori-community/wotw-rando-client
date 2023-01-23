#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CameraPuppetController.h>
#include <Modloader/app/structs/GameplayToCinematicAnimator.h>

namespace app::classes::GameplayToCinematicAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::CameraPuppetController*, get_Puppet, (app::GameplayToCinematicAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00415E70, void, CacheOriginals, (app::GameplayToCinematicAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00415F40, void, Awake, (app::GameplayToCinematicAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004160E0, void, OnDestroy, (app::GameplayToCinematicAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00416280, void, OnGameReset, (app::GameplayToCinematicAnimator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477EE50, GameplayToCinematicAnimator_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00416350, void, SampleValue, (app::GameplayToCinematicAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00416620, float, get_Duration, (app::GameplayToCinematicAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004166C0, void, RestoreToOriginalState, (app::GameplayToCinematicAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004167A0, bool, get_IsLooping, (app::GameplayToCinematicAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00416880, void, ctor, (app::GameplayToCinematicAnimator * this_ptr))
} // namespace app::classes::GameplayToCinematicAnimator
