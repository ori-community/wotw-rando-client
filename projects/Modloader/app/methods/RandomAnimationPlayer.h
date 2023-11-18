#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RandomAnimationPlayer.h>

namespace app::classes::RandomAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x0072EA30, void, Awake, (app::RandomAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072EB20, void, FixedUpdate, (app::RandomAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072EBB0, void, OnAnimationLooped, (app::RandomAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RandomAnimationPlayer * this_ptr))
} // namespace app::classes::RandomAnimationPlayer
