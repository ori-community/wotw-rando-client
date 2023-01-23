#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_JumpState.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour.h>

namespace app::classes::PetrifiedOwlBossEscape1Behaviour_JumpState {
    IL2CPP_REGISTER_METHOD(0x01763400, void, ctor, (app::PetrifiedOwlBossEscape1Behaviour_JumpState * this_ptr, app::PetrifiedOwlBossEscape1Behaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01763490, void, OnEnter, (app::PetrifiedOwlBossEscape1Behaviour_JumpState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01763530, void, UpdateState, (app::PetrifiedOwlBossEscape1Behaviour_JumpState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01763600, void, OnExit, (app::PetrifiedOwlBossEscape1Behaviour_JumpState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossEscape1Behaviour_JumpState
