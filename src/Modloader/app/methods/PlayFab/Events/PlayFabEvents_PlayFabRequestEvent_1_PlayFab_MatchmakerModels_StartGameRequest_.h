#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_StartGameRequest_.h>
#include <Modloader/app/structs/StartGameRequest_1.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_StartGameRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_StartGameRequest_* this_ptr,
        app::StartGameRequest_1* request
    )
}
