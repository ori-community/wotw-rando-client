#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DemoMainMenuState.h>
#include <Modloader/app/structs/IState.h>

namespace app::classes::DemoMainMenuState {
    IL2CPP_REGISTER_METHOD(0x00B822F0, void, OnEnterState, (app::DemoMainMenuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B825B0, void, OnQuit, (app::DemoMainMenuState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791DF8, DemoMainMenuState_OnQuit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B826F0, void, OnPlay, (app::DemoMainMenuState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D380, DemoMainMenuState_OnPlay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::DemoMainMenuState * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00B82830, void, OnExitState, (app::DemoMainMenuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00627D70, bool, CanTransition, (app::DemoMainMenuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IState*, GetNextState, (app::DemoMainMenuState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DemoMainMenuState * this_ptr))
} // namespace app::classes::DemoMainMenuState
