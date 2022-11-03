#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MenuRaceState {
    IL2CPP_REGISTER_METHOD(0x009D9F20, void, OnEnterState, (app::MenuRaceState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009DA210, void, OnExitState, (app::MenuRaceState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00627D70, bool, CanTransition, (app::MenuRaceState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IState*, GetNextState, (app::MenuRaceState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009DA3A0, void, OnGameReset, (app::MenuRaceState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704318, MenuRaceState_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MenuRaceState * this_ptr))
} // namespace app::classes::MenuRaceState
