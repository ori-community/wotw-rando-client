#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerStatisticsResult_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerStatisticsResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerStatisticsResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetPlayerStatisticsResult_* this_ptr,
        app::GetPlayerStatisticsResult_1* result
    )
}
