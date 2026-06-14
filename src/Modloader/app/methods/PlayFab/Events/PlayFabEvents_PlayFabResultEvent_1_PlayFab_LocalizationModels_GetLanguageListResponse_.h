#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetLanguageListResponse.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_LocalizationModels_GetLanguageListResponse_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_LocalizationModels_GetLanguageListResponse_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_LocalizationModels_GetLanguageListResponse_* this_ptr,
        app::GetLanguageListResponse* result
    )
}
