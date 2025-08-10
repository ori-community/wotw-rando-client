#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_JumpState.h>

namespace app::classes::PetrifiedOwlBossLowFlightBehaviour_JumpState {
    IL2CPP_REGISTER_METHOD(
        0x01779E80,
        void,
        ctor,
        app::PetrifiedOwlBossLowFlightBehaviour_JumpState* this_ptr,
        app::PetrifiedOwlBossLowFlightBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x01779F10, void, OnEnter, app::PetrifiedOwlBossLowFlightBehaviour_JumpState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0177A0C0, void, OnExit, app::PetrifiedOwlBossLowFlightBehaviour_JumpState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01252310, void, OnJumpTimelineFinished, app::PetrifiedOwlBossLowFlightBehaviour_JumpState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossLowFlightBehaviour_JumpState
