#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceConfiguration.h>
#include <Modloader/app/structs/RaceRestoreCheckpointState.h>
#include <Modloader/app/structs/RaceSystem.h>

namespace app::classes::RaceRestoreCheckpointState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::RaceRestoreCheckpointState* this_ptr, app::RaceSystem* race_system)
    IL2CPP_REGISTER_METHOD(0x007154D0, void, OnEnter, app::RaceRestoreCheckpointState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00715690, void, ScheduleRestore, app::RaceRestoreCheckpointState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00715930, void, UpdateState, app::RaceRestoreCheckpointState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartRaceRequested, app::RaceRestoreCheckpointState* this_ptr, app::RaceConfiguration* config)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishRaceRequested, app::RaceRestoreCheckpointState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestartRaceRequested, app::RaceRestoreCheckpointState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CancelRaceRequested, app::RaceRestoreCheckpointState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SkipRequested, app::RaceRestoreCheckpointState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00715980, void, OnCheckpointRestored, app::RaceRestoreCheckpointState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00716780, void, ExitToMenu, app::RaceRestoreCheckpointState* this_ptr)
} // namespace app::classes::RaceRestoreCheckpointState
