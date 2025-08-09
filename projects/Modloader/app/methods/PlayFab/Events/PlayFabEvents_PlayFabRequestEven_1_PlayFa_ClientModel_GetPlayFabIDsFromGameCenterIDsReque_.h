#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayFabIDsFromGameCenterIDsRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEven_1_PlayFa_ClientModel_GetPlayFabIDsFromGameCenterIDsReque_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromGameCenterIDsRequest_* this_ptr,
        app::GetPlayFabIDsFromGameCenterIDsRequest* request
    )
}
