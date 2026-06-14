#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetEntityTokenResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_AuthenticationModels_GetEntityTokenResponse_* this_ptr,
        app::GetEntityTokenResponse* result
    )
}
