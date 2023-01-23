#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour.h>

namespace app::classes::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState {
    IL2CPP_REGISTER_METHOD(0x01766A10, void, ctor, (app::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState * this_ptr, app::PetrifiedOwlBossFight1DiveLaserBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01766AA0, void, OnEnter, (app::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01766B90, void, UpdateState, (app::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01766C60, void, OnExit, (app::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFight1DiveLaserBehaviour_BackgroundFlightState
