#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkFacebookInstantGamesIdResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkFacebookInstantGamesIdResult_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkFacebookInstantGamesIdResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_LinkFacebookInstantGamesIdResult_* this_ptr,
        app::LinkFacebookInstantGamesIdResult* result
    )
}
