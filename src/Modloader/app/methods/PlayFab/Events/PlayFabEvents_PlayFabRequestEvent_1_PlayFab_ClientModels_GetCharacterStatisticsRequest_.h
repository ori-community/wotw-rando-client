#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterStatisticsRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterStatisticsRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterStatisticsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterStatisticsRequest_* this_ptr,
        app::GetCharacterStatisticsRequest* request
    )
}
