#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour_LoopState.h>

namespace app::classes::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState {
    IL2CPP_REGISTER_METHOD(
        0x0177CEF0,
        void,
        ctor,
        app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState* this_ptr,
        app::PetrifiedOwlBossRainOfFeathersBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x0177CF80, void, OnEnter, app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0177D020, void, UpdateState, app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0177D100, void, OnExit, app::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossRainOfFeathersBehaviour_LoopState
