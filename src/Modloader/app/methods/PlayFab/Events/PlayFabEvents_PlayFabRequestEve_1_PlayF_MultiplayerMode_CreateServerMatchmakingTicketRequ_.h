#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateServerMatchmakingTicketRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEve_1_PlayF_MultiplayerMode_CreateServerMatchmakingTicketRequ_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateServerMatchmakingTicketRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CreateServerMatchmakingTicketRequest_* this_ptr,
        app::CreateServerMatchmakingTicketRequest* request
    )
}
