#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState.h>

namespace app::classes::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState {
    IL2CPP_REGISTER_METHOD(
        0x0049FF20,
        void,
        ctor,
        app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState* this_ptr,
        app::PetrifiedOwlBossDiveBombHorizontalBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x0049FFB0, void, OnEnter, app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A00A0, void, UpdateState, app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004A0170, void, OnExit, app::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossDiveBombHorizontalBehaviour_AttackState
