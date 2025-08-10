#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetAssetUploadUrlRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetAssetUploadUrlRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetAssetUploadUrlRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetAssetUploadUrlRequest_* this_ptr,
        app::GetAssetUploadUrlRequest* request
    )
}
