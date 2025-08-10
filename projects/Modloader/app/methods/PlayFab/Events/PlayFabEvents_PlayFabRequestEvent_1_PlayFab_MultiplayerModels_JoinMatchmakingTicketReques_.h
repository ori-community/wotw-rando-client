#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JoinMatchmakingTicketRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketReques_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_JoinMatchmakingTicketRequest_* this_ptr,
        app::JoinMatchmakingTicketRequest* request
    )
}
