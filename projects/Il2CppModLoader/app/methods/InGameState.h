#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::InGameState {
    IL2CPP_REGISTER_METHOD(0x00627560, void, OnEnterState, (app::InGameState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00627990, void, OnExitState, (app::InGameState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00627C30, void, OnStartMenuRace, (app::InGameState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766A60, InGameState_OnStartMenuRace__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00627D70, bool, CanTransition, (app::InGameState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IState*, GetNextState, (app::InGameState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00627D80, void, OnGameReset, (app::InGameState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047474D0, InGameState_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InGameState * this_ptr))
} // namespace app::classes::InGameState
