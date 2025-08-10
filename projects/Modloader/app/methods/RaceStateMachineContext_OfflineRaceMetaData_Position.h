#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData_Position.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RaceStateMachineContext_OfflineRaceMetaData_Position {
    IL2CPP_REGISTER_METHOD(0x0071B9B0, void, ctor, app::RaceStateMachineContext_OfflineRaceMetaData_Position* this_ptr, app::Vector3 position)
}
