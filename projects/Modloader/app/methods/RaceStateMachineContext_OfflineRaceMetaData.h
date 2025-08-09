#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceStateMachineContext_OfflineRaceMetaData.h>
#include <Modloader/app/structs/ReplayValidatorData.h>

namespace app::classes::RaceStateMachineContext_OfflineRaceMetaData {
    IL2CPP_REGISTER_METHOD(0x0071B680, app::ReplayValidatorData*, ToReplayValidatorData, app::RaceStateMachineContext_OfflineRaceMetaData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RaceStateMachineContext_OfflineRaceMetaData* this_ptr)
} // namespace app::classes::RaceStateMachineContext_OfflineRaceMetaData
