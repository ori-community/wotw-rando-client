#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayFabIDsFromXboxLiveIDsRequest_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFa_ServerModel_GetPlayFabIDsFromXboxLiveIDsReques_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromXboxLiveIDsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromXboxLiveIDsRequest_* this_ptr,
        app::GetPlayFabIDsFromXboxLiveIDsRequest_1* request
    )
}
