#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEv_1_Pla_ClientMo_GetPlayFabIDsFromNintendoSwitchDeviceIdsReq_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest_* this_ptr,
        app::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request
    )
}
