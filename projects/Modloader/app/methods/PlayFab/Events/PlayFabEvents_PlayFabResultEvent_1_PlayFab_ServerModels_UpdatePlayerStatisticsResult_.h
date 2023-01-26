#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdatePlayerStatisticsResult_.h>
#include <Modloader/app/structs/UpdatePlayerStatisticsResult_1.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdatePlayerStatisticsResult_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_UpdatePlayerStatisticsResult_ * this_ptr, app::UpdatePlayerStatisticsResult_1* result))
}
