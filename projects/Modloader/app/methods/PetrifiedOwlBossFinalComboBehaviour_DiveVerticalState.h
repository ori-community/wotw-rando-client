#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>

namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState {
    IL2CPP_REGISTER_METHOD(0x0176F9F0, void, ctor, (app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState * this_ptr, app::PetrifiedOwlBossFinalComboBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x0176FA80, void, OnEnter, (app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176FD20, void, UpdateState, (app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176FEE0, void, OnExit, (app::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_DiveVerticalState
