#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState.h>

namespace app::classes::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState {
    IL2CPP_REGISTER_METHOD(
        0x004A1A90,
        void,
        ctor,
        app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState* this_ptr,
        app::PetrifiedOwlBossDiveBombVerticalBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x004A1B20, void, OnEnter, app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A1BC0, void, UpdateState, app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A1C80, void, OnExit, app::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossDiveBombVerticalBehaviour_PostAttackState
