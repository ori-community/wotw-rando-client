#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_PlayerJoinedResponse_.h>
#include <Modloader/app/structs/PlayerJoinedResponse.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_PlayerJoinedResponse_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MatchmakerModels_PlayerJoinedResponse_ * this_ptr, app::PlayerJoinedResponse* result))
}
