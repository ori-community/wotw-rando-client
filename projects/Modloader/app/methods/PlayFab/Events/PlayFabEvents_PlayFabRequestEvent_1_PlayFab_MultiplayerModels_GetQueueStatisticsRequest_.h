#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetQueueStatisticsRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetQueueStatisticsRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetQueueStatisticsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetQueueStatisticsRequest_* this_ptr,
        app::GetQueueStatisticsRequest* request
    )
}
