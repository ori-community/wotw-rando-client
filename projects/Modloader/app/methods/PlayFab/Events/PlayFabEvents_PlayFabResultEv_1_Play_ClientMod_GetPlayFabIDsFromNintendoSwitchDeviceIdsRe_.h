#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetPlayFabIDsFromNintendoSwitchDeviceIdsResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEv_1_Play_ClientMod_GetPlayFabIDsFromNintendoSwitchDeviceIdsRe_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ClientModels_GetPlayFabIDsFromNintendoSwitchDeviceIdsResult_* this_ptr,
        app::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result
    )
}
