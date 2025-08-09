#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancelMatchmakingTicketRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFa_MultiplayerModel_CancelMatchmakingTicketReques_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CancelMatchmakingTicketRequest_* this_ptr,
        app::CancelMatchmakingTicketRequest* request
    )
}
