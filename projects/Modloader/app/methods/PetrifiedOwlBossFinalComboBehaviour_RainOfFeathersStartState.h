#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState.h>

namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState {
    IL2CPP_REGISTER_METHOD(
        0x01771600,
        void,
        ctor,
        app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState* this_ptr,
        app::PetrifiedOwlBossFinalComboBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x01771690, void, OnEnter, app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017718F0, void, UpdateState, app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017719C0, void, OnExit, app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01771BA0, void, OnShootEvent, app::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossFinalComboBehaviour_RainOfFeathersStartState
