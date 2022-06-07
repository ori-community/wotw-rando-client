#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RaceSpectateState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RaceSpectateState * this_ptr, app::RaceSystem * race_system))
    IL2CPP_REGISTER_METHOD(0x00718CD0, void, OnEnter, (app::RaceSpectateState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007190D0, void, UpdateState, (app::RaceSpectateState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007194C0, app::GhostPlayer *, get_TargetGhost, (app::RaceSpectateState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00719500, app::GhostPlayer *, get_TopGhost, (app::RaceSpectateState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00719540, void, UpdateGhostSpectating, (app::RaceSpectateState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007197A0, void, OnExit, (app::RaceSpectateState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (app::RaceSpectateState * this_ptr, app::RaceConfiguration * config))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (app::RaceSpectateState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, (app::RaceSpectateState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007151F0, void, CancelRaceRequested, (app::RaceSpectateState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (app::RaceSpectateState * this_ptr))
}
