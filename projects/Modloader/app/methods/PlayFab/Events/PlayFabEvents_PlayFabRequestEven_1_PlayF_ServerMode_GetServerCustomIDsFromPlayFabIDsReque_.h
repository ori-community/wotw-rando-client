#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetServerCustomIDsFromPlayFabIDsRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEven_1_PlayF_ServerMode_GetServerCustomIDsFromPlayFabIDsReque_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetServerCustomIDsFromPlayFabIDsRequest_* this_ptr,
        app::GetServerCustomIDsFromPlayFabIDsRequest* request
    )
}
