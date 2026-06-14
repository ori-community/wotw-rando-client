#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_WaitState.h>

namespace app::classes::PetrifiedOwlBossEscape1Behaviour_WaitState {
    IL2CPP_REGISTER_METHOD(0x01763B30, void, ctor, app::PetrifiedOwlBossEscape1Behaviour_WaitState* this_ptr, app::PetrifiedOwlBossEscape1Behaviour* behaviour)
    IL2CPP_REGISTER_METHOD(0x01763BC0, void, OnEnter, app::PetrifiedOwlBossEscape1Behaviour_WaitState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01763C60, void, UpdateState, app::PetrifiedOwlBossEscape1Behaviour_WaitState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01763D30, void, OnExit, app::PetrifiedOwlBossEscape1Behaviour_WaitState* this_ptr)
} // namespace app::classes::PetrifiedOwlBossEscape1Behaviour_WaitState
