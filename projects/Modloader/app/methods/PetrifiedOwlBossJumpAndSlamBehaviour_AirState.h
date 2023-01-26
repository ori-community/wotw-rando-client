#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_AirState.h>
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour.h>

namespace app::classes::PetrifiedOwlBossJumpAndSlamBehaviour_AirState {
    IL2CPP_REGISTER_METHOD(0x01774C40, void, ctor, (app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState * this_ptr, app::PetrifiedOwlBossJumpAndSlamBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01774CD0, void, OnEnter, (app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01774EE0, void, UpdateState, (app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01774FB0, void, OnExit, (app::PetrifiedOwlBossJumpAndSlamBehaviour_AirState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossJumpAndSlamBehaviour_AirState
