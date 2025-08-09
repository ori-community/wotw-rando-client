#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListMatchmakingTicketsForPlayerResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEve_1_PlayF_MultiplayerMode_ListMatchmakingTicketsForPlayerRes_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_ListMatchmakingTicketsForPlayerResult_* this_ptr,
        app::ListMatchmakingTicketsForPlayerResult* result
    )
}
