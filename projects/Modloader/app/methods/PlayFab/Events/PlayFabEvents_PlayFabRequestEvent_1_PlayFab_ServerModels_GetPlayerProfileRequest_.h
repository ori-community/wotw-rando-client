#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayerProfileRequest_.h>
#include <Modloader/app/structs/GetPlayerProfileRequest_1.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayerProfileRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayerProfileRequest_ * this_ptr, app::GetPlayerProfileRequest_1* request))
}
