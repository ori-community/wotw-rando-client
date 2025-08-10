#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_UpdateBuildRegionsRequest_.h>
#include <Modloader/app/structs/UpdateBuildRegionsRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_UpdateBuildRegionsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_UpdateBuildRegionsRequest_* this_ptr,
        app::UpdateBuildRegionsRequest* request
    )
}
