#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/PlayLoopAnimationWisps.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::PlayLoopAnimationWisps {
    IL2CPP_REGISTER_METHOD(0x01179690, app::MoonAnimator*, get_Animator, (app::PlayLoopAnimationWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01179770, app::MoonAnimation*, get_Animation, (app::PlayLoopAnimationWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsSuspended, (app::PlayLoopAnimationWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsSuspended, (app::PlayLoopAnimationWisps * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00608710, app::SuspendableMask__Enum, get_Mask, (app::PlayLoopAnimationWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01179850, void, set_Mask, (app::PlayLoopAnimationWisps * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x003FF7B0, app::UpdateType__Enum, get_UpdateType, (app::PlayLoopAnimationWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF7C0, void, set_UpdateType, (app::PlayLoopAnimationWisps * this_ptr, app::UpdateType__Enum value))
    IL2CPP_REGISTER_METHOD(0x01179900, void, Awake, (app::PlayLoopAnimationWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011799C0, void, OnDestroy, (app::PlayLoopAnimationWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01179A80, void, OnEnable, (app::PlayLoopAnimationWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01179B20, void, PlayAnimation, (app::PlayLoopAnimationWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01179D80, void, OnUpdate, (app::PlayLoopAnimationWisps * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x01179DC0, void, ctor, (app::PlayLoopAnimationWisps * this_ptr))
} // namespace app::classes::PlayLoopAnimationWisps
