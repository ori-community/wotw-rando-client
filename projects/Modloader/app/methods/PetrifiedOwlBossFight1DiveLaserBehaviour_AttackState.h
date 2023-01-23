#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour.h>

namespace app::classes::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState {
    IL2CPP_REGISTER_METHOD(0x01766730, void, ctor, (app::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState * this_ptr, app::PetrifiedOwlBossFight1DiveLaserBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x017667C0, void, OnEnter, (app::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017668B0, void, UpdateState, (app::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01766970, void, OnExit, (app::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFight1DiveLaserBehaviour_AttackState
