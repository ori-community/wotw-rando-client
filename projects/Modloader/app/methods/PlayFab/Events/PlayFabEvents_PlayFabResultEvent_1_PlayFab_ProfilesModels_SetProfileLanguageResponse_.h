#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_.h>
#include <Modloader/app/structs/SetProfileLanguageResponse.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_* this_ptr,
        app::SetProfileLanguageResponse* result
    )
}
