#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_DiveLaserState.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>

namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState {
    IL2CPP_REGISTER_METHOD(0x0176F500, void, ctor, (app::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState * this_ptr, app::PetrifiedOwlBossFinalComboBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x0176F590, void, OnEnter, (app::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176F750, void, UpdateState, (app::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176F930, void, OnExit, (app::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_DiveLaserState
