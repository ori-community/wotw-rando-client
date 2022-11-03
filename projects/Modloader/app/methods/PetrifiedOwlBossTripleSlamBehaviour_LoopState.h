#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossTripleSlamBehaviour_LoopState {
    IL2CPP_REGISTER_METHOD(0x017813E0, void, ctor, (app::PetrifiedOwlBossTripleSlamBehaviour_LoopState * this_ptr, app::PetrifiedOwlBossTripleSlamBehaviour* behaviour))
    IL2CPP_REGISTER_METHOD(0x01781470, void, OnEnter, (app::PetrifiedOwlBossTripleSlamBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017814F0, void, UpdateState, (app::PetrifiedOwlBossTripleSlamBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01781300, void, StartStompProcess, (app::PetrifiedOwlBossTripleSlamBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017816D0, void, EndStompProcess, (app::PetrifiedOwlBossTripleSlamBehaviour_LoopState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01781740, void, OnExit, (app::PetrifiedOwlBossTripleSlamBehaviour_LoopState * this_ptr))
} // namespace app::classes::PetrifiedOwlBossTripleSlamBehaviour_LoopState
