#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancelAllMatchmakingTicketsForPlayerRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestE_1_Pla_MultiplayerMo_CancelAllMatchmakingTicketsForPlayerReq_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerRequest_* this_ptr,
        app::CancelAllMatchmakingTicketsForPlayerRequest* request
    )
}
