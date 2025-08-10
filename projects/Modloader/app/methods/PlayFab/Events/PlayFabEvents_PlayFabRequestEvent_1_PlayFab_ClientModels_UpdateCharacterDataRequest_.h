#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateCharacterDataRequest_.h>
#include <Modloader/app/structs/UpdateCharacterDataRequest.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateCharacterDataRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_UpdateCharacterDataRequest_* this_ptr,
        app::UpdateCharacterDataRequest* request
    )
}
