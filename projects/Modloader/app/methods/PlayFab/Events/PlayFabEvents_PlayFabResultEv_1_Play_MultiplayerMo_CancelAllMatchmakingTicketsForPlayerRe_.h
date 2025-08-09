#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancelAllMatchmakingTicketsForPlayerResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEv_1_Play_MultiplayerMo_CancelAllMatchmakingTicketsForPlayerRe_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_CancelAllMatchmakingTicketsForPlayerResult_* this_ptr,
        app::CancelAllMatchmakingTicketsForPlayerResult* result
    )
}
