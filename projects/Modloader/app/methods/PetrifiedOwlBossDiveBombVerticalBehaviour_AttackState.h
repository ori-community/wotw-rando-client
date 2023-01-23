#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour.h>

namespace app::classes::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState {
    IL2CPP_REGISTER_METHOD(0x004A1550, void, ctor, (app::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState * this_ptr, app::PetrifiedOwlBossDiveBombVerticalBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x004A15E0, void, OnEnter, (app::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004A1680, void, UpdateState, (app::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004A1750, void, OnExit, (app::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossDiveBombVerticalBehaviour_AttackState
