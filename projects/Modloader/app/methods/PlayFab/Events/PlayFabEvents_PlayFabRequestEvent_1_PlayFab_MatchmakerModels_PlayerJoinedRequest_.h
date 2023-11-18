#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_PlayerJoinedRequest_.h>
#include <Modloader/app/structs/PlayerJoinedRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_PlayerJoinedRequest_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MatchmakerModels_PlayerJoinedRequest_ * this_ptr, app::PlayerJoinedRequest* request))
}
