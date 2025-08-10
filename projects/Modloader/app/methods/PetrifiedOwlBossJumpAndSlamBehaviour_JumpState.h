#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossJumpAndSlamBehaviour_JumpState.h>

namespace app::classes::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState {
    IL2CPP_REGISTER_METHOD(
        0x01775050,
        void,
        ctor,
        app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState* this_ptr,
        app::PetrifiedOwlBossJumpAndSlamBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x017750E0, void, OnEnter, app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017752D0, void, OnExit, app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01252310, void, OnJumpTimelineFinished, app::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossJumpAndSlamBehaviour_JumpState
