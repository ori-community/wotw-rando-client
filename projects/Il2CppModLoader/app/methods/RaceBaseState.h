#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RaceBaseState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RaceBaseState * this_ptr, app::RaceSystem * race_system))
    IL2CPP_REGISTER_METHOD(0x00E97210, app::RaceStateMachineContext *, get_Context, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::RaceSystem *, get_RaceSystem, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E97230, float, get_StateTime, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E97290, app::RaceConfiguration *, get_Configuration, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E972C0, app::RaceData *, get_RaceData, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E973A0, app::RaceHandler *, get_RaceHandler, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E97480, app::ITrialData *, get_Data, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E974C0, app::ITrialHandler *, get_Handler, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnter, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, GetStateId, (app::RaceBaseState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E97500, app::String *, get_RaceName, (app::RaceBaseState * this_ptr))
}
