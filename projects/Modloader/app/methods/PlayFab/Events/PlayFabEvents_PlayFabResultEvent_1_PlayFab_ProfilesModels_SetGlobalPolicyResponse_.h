#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_.h>
#include <Modloader/app/structs/SetGlobalPolicyResponse.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_* this_ptr,
        app::SetGlobalPolicyResponse* result
    )
}
