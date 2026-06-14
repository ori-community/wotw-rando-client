#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetMatchmakingTicketRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetMatchmakingTicketRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetMatchmakingTicketRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_GetMatchmakingTicketRequest_* this_ptr,
        app::GetMatchmakingTicketRequest* request
    )
}
