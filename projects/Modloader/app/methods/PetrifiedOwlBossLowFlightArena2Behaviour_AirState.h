#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour_AirState.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour.h>

namespace app::classes::PetrifiedOwlBossLowFlightArena2Behaviour_AirState {
    IL2CPP_REGISTER_METHOD(0x01778F80, void, ctor, (app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState * this_ptr, app::PetrifiedOwlBossLowFlightArena2Behaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01779010, void, OnEnter, (app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01779200, void, OnExit, (app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017792A0, void, OnAirTimelineFinished, (app::PetrifiedOwlBossLowFlightArena2Behaviour_AirState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossLowFlightArena2Behaviour_AirState
