#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DemoEndState {
    IL2CPP_REGISTER_METHOD(0x00B80BD0, void, OnEnterState, (app::DemoEndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, OnGameReset, (app::DemoEndState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470AD40, DemoEndState_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B80D90, void, OnExitState, (app::DemoEndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, CanTransition, (app::DemoEndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B80F20, app::IState*, GetNextState, (app::DemoEndState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DemoEndState * this_ptr))
} // namespace app::classes::DemoEndState
