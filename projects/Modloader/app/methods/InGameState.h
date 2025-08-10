#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IState.h>
#include <Modloader/app/structs/InGameState.h>

namespace app::classes::InGameState {
    IL2CPP_REGISTER_METHOD(0x00627560, void, OnEnterState, app::InGameState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00627990, void, OnExitState, app::InGameState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00627C30, void, OnStartMenuRace, app::InGameState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00627D70, bool, CanTransition, app::InGameState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IState*, GetNextState, app::InGameState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00627D80, void, OnGameReset, app::InGameState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::InGameState* this_ptr)
} // namespace app::classes::InGameState
