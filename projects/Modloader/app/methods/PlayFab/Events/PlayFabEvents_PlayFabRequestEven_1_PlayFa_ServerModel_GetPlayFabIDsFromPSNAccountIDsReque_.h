#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayFabIDsFromPSNAccountIDsRequest_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEven_1_PlayFa_ServerModel_GetPlayFabIDsFromPSNAccountIDsReque_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromPSNAccountIDsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetPlayFabIDsFromPSNAccountIDsRequest_* this_ptr,
        app::GetPlayFabIDsFromPSNAccountIDsRequest_1* request
    )
}
