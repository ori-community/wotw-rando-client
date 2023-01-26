#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceCountdownState.h>
#include <Modloader/app/structs/RaceConfiguration.h>
#include <Modloader/app/structs/RaceSystem.h>

namespace app::classes::RaceCountdownState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::RaceCountdownState * this_ptr, app::RaceSystem* race_system))
    IL2CPP_REGISTER_METHOD(0x00E97820, void, OnEnter, (app::RaceCountdownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E97D20, void, OnCountdownFinished, (app::RaceCountdownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E97E10, void, UpdateState, (app::RaceCountdownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E97F70, void, EnterRace, (app::RaceCountdownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E98050, void, OnExit, (app::RaceCountdownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E98190, void, RestartRaceRequested, (app::RaceCountdownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E98200, void, CancelRaceRequested, (app::RaceCountdownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, (app::RaceCountdownState * this_ptr, app::RaceConfiguration* config))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, (app::RaceCountdownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, (app::RaceCountdownState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E98250, void, SyncRaceSyncables, (app::RaceCountdownState * this_ptr, float time))
} // namespace app::classes::RaceCountdownState
