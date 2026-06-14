#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossRainOfFeathersBehaviour_EndState.h>

namespace app::classes::PetrifiedOwlBossRainOfFeathersBehaviour_EndState {
    IL2CPP_REGISTER_METHOD(
        0x0177CC60,
        void,
        ctor,
        app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState* this_ptr,
        app::PetrifiedOwlBossRainOfFeathersBehaviour* behaviour
    )
    IL2CPP_REGISTER_METHOD(0x0177CCF0, void, OnEnter, app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0177CD90, void, UpdateState, app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0177CE50, void, OnExit, app::PetrifiedOwlBossRainOfFeathersBehaviour_EndState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossRainOfFeathersBehaviour_EndState
