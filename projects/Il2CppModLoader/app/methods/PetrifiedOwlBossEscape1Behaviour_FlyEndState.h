#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlBossEscape1Behaviour_FlyEndState {
    IL2CPP_REGISTER_METHOD(0x017627E0, void, ctor, (app::PetrifiedOwlBossEscape1Behaviour_FlyEndState * this_ptr, app::PetrifiedOwlBossEscape1Behaviour * behaviour))
    IL2CPP_REGISTER_METHOD(0x01762870, void, OnEnter, (app::PetrifiedOwlBossEscape1Behaviour_FlyEndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01762B10, void, UpdateState, (app::PetrifiedOwlBossEscape1Behaviour_FlyEndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01762BE0, void, OnExit, (app::PetrifiedOwlBossEscape1Behaviour_FlyEndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E8710, void, OnTimelineEnded, (app::PetrifiedOwlBossEscape1Behaviour_FlyEndState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789540, PetrifiedOwlBossEscape1Behaviour_FlyEndState_OnTimelineEnded__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x014E8710, void, GoToNextState, (app::PetrifiedOwlBossEscape1Behaviour_FlyEndState * this_ptr))
}
