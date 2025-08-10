#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetContainerRegistryCredentialsRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEve_1_Play_MultiplayerMod_GetContainerRegistryCredentialsRequ_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsRequest_* this_ptr,
        app::GetContainerRegistryCredentialsRequest* request
    )
}
