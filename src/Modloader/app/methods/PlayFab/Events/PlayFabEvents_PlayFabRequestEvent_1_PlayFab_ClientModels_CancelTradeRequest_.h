#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancelTradeRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_CancelTradeRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_CancelTradeRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_CancelTradeRequest_* this_ptr,
        app::CancelTradeRequest* request
    )
}
