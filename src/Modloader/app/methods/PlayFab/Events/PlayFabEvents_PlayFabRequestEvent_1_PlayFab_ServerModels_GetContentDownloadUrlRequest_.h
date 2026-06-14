#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetContentDownloadUrlRequest_1.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetContentDownloadUrlRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetContentDownloadUrlRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ServerModels_GetContentDownloadUrlRequest_* this_ptr,
        app::GetContentDownloadUrlRequest_1* request
    )
}
