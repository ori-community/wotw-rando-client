#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_LandState.h>

namespace app::classes::PetrifiedOwlBossLowFlightBehaviour_LandState {
    IL2CPP_REGISTER_METHOD(
        0x0177A160,
        void,
        ctor,
        app::PetrifiedOwlBossLowFlightBehaviour_LandState* this_ptr,
        app::PetrifiedOwlBossLowFlightBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x0177A1F0, void, OnEnter, app::PetrifiedOwlBossLowFlightBehaviour_LandState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0177A400, void, OnExit, app::PetrifiedOwlBossLowFlightBehaviour_LandState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017757A0, void, OnLandTimelineFinished, app::PetrifiedOwlBossLowFlightBehaviour_LandState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossLowFlightBehaviour_LandState
