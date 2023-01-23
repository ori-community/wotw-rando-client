#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour_AttackState.h>
#include <Modloader/app/structs/PetrifiedOwlBossLandBehaviour.h>

namespace app::classes::PetrifiedOwlBossLandBehaviour_AttackState {
    IL2CPP_REGISTER_METHOD(0x017763D0, void, ctor, (app::PetrifiedOwlBossLandBehaviour_AttackState * this_ptr, app::PetrifiedOwlBossLandBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01776460, void, OnEnter, (app::PetrifiedOwlBossLandBehaviour_AttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01776500, void, UpdateState, (app::PetrifiedOwlBossLandBehaviour_AttackState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017765C0, void, OnExit, (app::PetrifiedOwlBossLandBehaviour_AttackState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossLandBehaviour_AttackState
