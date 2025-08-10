#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConsumePSNEntitlementsRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ConsumePSNEntitlementsRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ConsumePSNEntitlementsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_ConsumePSNEntitlementsRequest_* this_ptr,
        app::ConsumePSNEntitlementsRequest* request
    )
}
