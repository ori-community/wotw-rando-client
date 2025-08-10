#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState.h>

namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState {
    IL2CPP_REGISTER_METHOD(
        0x01771360,
        void,
        ctor,
        app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState* this_ptr,
        app::PetrifiedOwlBossFinalComboBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x017713F0, void, OnEnter, app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01771490, void, UpdateState, app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01771560, void, OnExit, app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersLoopState
