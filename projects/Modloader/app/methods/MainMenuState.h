#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MainMenuState.h>
#include <Modloader/app/structs/IState.h>

namespace app::classes::MainMenuState {
    IL2CPP_REGISTER_METHOD(0x009F44B0, void, OnEnterState, (app::MainMenuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F4880, void, OnQuit, (app::MainMenuState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713C60, MainMenuState_OnQuit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F49C0, void, OnPlay, (app::MainMenuState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471D8A8, MainMenuState_OnPlay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F4B00, void, OnStartMenuRace, (app::MainMenuState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780528, MainMenuState_OnStartMenuRace__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F4C40, void, OnExitState, (app::MainMenuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00627D70, bool, CanTransition, (app::MainMenuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IState*, GetNextState, (app::MainMenuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MainMenuState * this_ptr))
} // namespace app::classes::MainMenuState
