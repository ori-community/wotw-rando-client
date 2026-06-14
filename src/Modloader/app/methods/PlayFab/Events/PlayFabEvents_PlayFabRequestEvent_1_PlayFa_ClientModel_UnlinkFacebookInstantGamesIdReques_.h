#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFa_ClientModel_UnlinkFacebookInstantGamesIdReques_.h>
#include <Modloader/app/structs/UnlinkFacebookInstantGamesIdRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkFacebookInstantGamesIdRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UnlinkFacebookInstantGamesIdRequest_* this_ptr,
        app::UnlinkFacebookInstantGamesIdRequest* request
    )
}
