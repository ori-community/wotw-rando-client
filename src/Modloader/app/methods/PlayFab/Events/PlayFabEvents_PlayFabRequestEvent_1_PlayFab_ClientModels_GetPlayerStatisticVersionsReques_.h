#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayerStatisticVersionsRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayerStatisticVersionsReques_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayerStatisticVersionsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayerStatisticVersionsRequest_* this_ptr,
        app::GetPlayerStatisticVersionsRequest* request
    )
}
