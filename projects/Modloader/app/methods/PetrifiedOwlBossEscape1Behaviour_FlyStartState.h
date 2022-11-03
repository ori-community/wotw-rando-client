#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossEscape1Behaviour_FlyStartState {
    IL2CPP_REGISTER_METHOD(0x01762DD0, void, ctor, (app::PetrifiedOwlBossEscape1Behaviour_FlyStartState * this_ptr, app::PetrifiedOwlBossEscape1Behaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01762E60, void, OnEnter, (app::PetrifiedOwlBossEscape1Behaviour_FlyStartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01763100, void, UpdateState, (app::PetrifiedOwlBossEscape1Behaviour_FlyStartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017631D0, void, OnExit, (app::PetrifiedOwlBossEscape1Behaviour_FlyStartState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017633C0, void, OnTimelineEnded, (app::PetrifiedOwlBossEscape1Behaviour_FlyStartState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04739230, PetrifiedOwlBossEscape1Behaviour_FlyStartState_OnTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017633C0, void, GoToNextState, (app::PetrifiedOwlBossEscape1Behaviour_FlyStartState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossEscape1Behaviour_FlyStartState
