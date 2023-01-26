#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour.h>

namespace app::classes::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState {
    IL2CPP_REGISTER_METHOD(0x004A1D20, void, ctor, (app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState * this_ptr, app::PetrifiedOwlBossDiveBombVerticalBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x004A1DB0, void, OnEnter, (app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004A2030, void, UpdateState, (app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004A2100, void, OnExit, (app::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossDiveBombVerticalBehaviour_WaitState
