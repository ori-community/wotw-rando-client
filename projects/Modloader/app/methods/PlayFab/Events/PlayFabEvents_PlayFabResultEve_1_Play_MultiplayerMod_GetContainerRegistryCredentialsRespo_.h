#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetContainerRegistryCredentialsResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEve_1_Play_MultiplayerMod_GetContainerRegistryCredentialsRespo_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_GetContainerRegistryCredentialsResponse_* this_ptr,
        app::GetContainerRegistryCredentialsResponse* result
    )
}
