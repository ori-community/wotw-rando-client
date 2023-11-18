#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_AirState.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour.h>

namespace app::classes::PetrifiedOwlBossLowFlightBehaviour_AirState {
    IL2CPP_REGISTER_METHOD(0x01779AF0, void, ctor, (app::PetrifiedOwlBossLowFlightBehaviour_AirState * this_ptr, app::PetrifiedOwlBossLowFlightBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01779B80, void, OnEnter, (app::PetrifiedOwlBossLowFlightBehaviour_AirState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01779D90, void, OnExit, (app::PetrifiedOwlBossLowFlightBehaviour_AirState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01779E30, void, OnAirTimelineFinished, (app::PetrifiedOwlBossLowFlightBehaviour_AirState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossLowFlightBehaviour_AirState
