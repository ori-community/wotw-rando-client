#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetGlobalPolicyResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_* this_ptr,
        app::GetGlobalPolicyResponse* result
    )
}
