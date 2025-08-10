#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoginWithFacebookInstantGamesIdRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEven_1_PlayFa_ClientMode_LoginWithFacebookInstantGamesIdReque_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithFacebookInstantGamesIdRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_LoginWithFacebookInstantGamesIdRequest_* this_ptr,
        app::LoginWithFacebookInstantGamesIdRequest* request
    )
}
