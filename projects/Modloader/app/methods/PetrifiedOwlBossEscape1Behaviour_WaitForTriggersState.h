#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour.h>

namespace app::classes::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState {
    IL2CPP_REGISTER_METHOD(0x017636A0, void, ctor, (app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState * this_ptr, app::PetrifiedOwlBossEscape1Behaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01763730, void, OnEnter, (app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01763890, void, UpdateState, (app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01763A90, void, OnExit, (app::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossEscape1Behaviour_WaitForTriggersState
