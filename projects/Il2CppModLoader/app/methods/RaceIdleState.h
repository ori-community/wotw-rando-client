#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RaceIdleState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RaceIdleState * this_ptr, app::RaceSystem * race_system))
    IL2CPP_REGISTER_METHOD(0x00E9F3D0, void, StartRaceRequested, (app::RaceIdleState * this_ptr, app::RaceConfiguration * config))
    IL2CPP_REGISTER_METHOD(0x00E9F570, void, OnEnter, (app::RaceIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (app::RaceIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (app::RaceIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (app::RaceIdleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CancelRaceRequested, (app::RaceIdleState * this_ptr))
}
