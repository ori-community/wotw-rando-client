#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DemoInGameState {
    IL2CPP_REGISTER_METHOD(0x00B81060, void, OnEnterState, (app::DemoInGameState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B81450, void, Update, (app::DemoInGameState * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00B81930, void, OnExitState, (app::DemoInGameState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00627D70, bool, CanTransition, (app::DemoInGameState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IState*, GetNextState, (app::DemoInGameState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B81BD0, void, OnDemoEnd, (app::DemoInGameState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757128, DemoInGameState_OnDemoEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B81D60, void, OnGameReset, (app::DemoInGameState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710C78, DemoInGameState_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B81EA0, bool, IsIdle, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DemoInGameState * this_ptr))
} // namespace app::classes::DemoInGameState
