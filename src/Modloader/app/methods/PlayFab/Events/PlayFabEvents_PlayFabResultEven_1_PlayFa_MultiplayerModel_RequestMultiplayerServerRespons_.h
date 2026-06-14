#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEven_1_PlayFa_MultiplayerModel_RequestMultiplayerServerRespons_.h>
#include <Modloader/app/structs/RequestMultiplayerServerResponse.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_* this_ptr,
        app::RequestMultiplayerServerResponse* result
    )
}
