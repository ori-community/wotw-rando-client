#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfirmPurchaseRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ConfirmPurchaseRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ConfirmPurchaseRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ConfirmPurchaseRequest_* this_ptr,
        app::ConfirmPurchaseRequest* request
    )
}
