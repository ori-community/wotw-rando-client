#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListAssetSummariesRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListAssetSummariesRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListAssetSummariesRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListAssetSummariesRequest_* this_ptr,
        app::ListAssetSummariesRequest* request
    )
}
