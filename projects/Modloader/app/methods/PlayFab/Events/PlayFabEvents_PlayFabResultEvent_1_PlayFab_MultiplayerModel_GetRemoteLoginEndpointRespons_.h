#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetRemoteLoginEndpointResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModel_GetRemoteLoginEndpointRespons_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetRemoteLoginEndpointResponse_* this_ptr,
        app::GetRemoteLoginEndpointResponse* result
    )
}
