#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceConfiguration.h>
#include <Modloader/app/structs/RaceRunState.h>
#include <Modloader/app/structs/RaceSystem.h>

namespace app::classes::RaceRunState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::RaceRunState* this_ptr, app::RaceSystem* race_system)
    IL2CPP_REGISTER_METHOD(0x00716B50, void, OnEnter, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00716F70, void, UpdateState, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00717B30, void, OnEnteredRaceArea, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00717B80, void, OnLeftRaceArea, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00717BE0, void, OnExit, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00717F20, void, FinishRaceRequested, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00718180, void, RestartRaceRequested, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007182F0, void, CancelRaceRequested, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, app::RaceRunState* this_ptr, app::RaceConfiguration* config)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00718350, void, SetupGhosts, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00718480, void, HandleDeath, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00718560, void, StartRaceSyncables, app::RaceRunState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00718880, void, SyncRaceSyncables, app::RaceRunState* this_ptr, float time)
} // namespace app::classes::RaceRunState
