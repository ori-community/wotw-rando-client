#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCharacterStatisticsRequest_.h>
#include <Modloader/app/structs/GetCharacterStatisticsRequest_1.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCharacterStatisticsRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetCharacterStatisticsRequest_ * this_ptr, app::GetCharacterStatisticsRequest_1* request))
}
