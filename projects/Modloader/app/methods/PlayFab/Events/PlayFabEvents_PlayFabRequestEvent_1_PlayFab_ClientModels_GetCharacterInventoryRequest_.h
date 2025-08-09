#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetCharacterInventoryRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterInventoryRequest_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterInventoryRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetCharacterInventoryRequest_* this_ptr,
        app::GetCharacterInventoryRequest* request
    )
}
