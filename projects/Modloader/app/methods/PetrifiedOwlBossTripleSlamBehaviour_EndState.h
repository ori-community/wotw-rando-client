#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossTripleSlamBehaviour_EndState {
    IL2CPP_REGISTER_METHOD(0x01780F60, void, ctor, (app::PetrifiedOwlBossTripleSlamBehaviour_EndState * this_ptr, app::PetrifiedOwlBossTripleSlamBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01780FF0, void, OnEnter, (app::PetrifiedOwlBossTripleSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017810D0, void, UpdateState, (app::PetrifiedOwlBossTripleSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01781260, void, OnExit, (app::PetrifiedOwlBossTripleSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01781300, void, StartStompProcess, (app::PetrifiedOwlBossTripleSlamBehaviour_EndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01781370, void, EndStompProcess, (app::PetrifiedOwlBossTripleSlamBehaviour_EndState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossTripleSlamBehaviour_EndState
