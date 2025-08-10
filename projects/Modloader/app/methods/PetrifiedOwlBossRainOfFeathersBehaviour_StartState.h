#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour_StartState.h>

namespace app::classes::PetrifiedOwlBossRainOfFeathersBehaviour_StartState {
    IL2CPP_REGISTER_METHOD(
        0x0177D1A0,
        void,
        ctor,
        app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState* this_ptr,
        app::PetrifiedOwlBossRainOfFeathersBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x0177D230, void, OnEnter, app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0177D320, void, UpdateState, app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0177D3F0, void, OnExit, app::PetrifiedOwlBossRainOfFeathersBehaviour_StartState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossRainOfFeathersBehaviour_StartState
