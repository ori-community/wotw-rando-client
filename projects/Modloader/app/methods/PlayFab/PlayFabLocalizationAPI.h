#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_PlayFab_LocalizationModels_GetLanguageListResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/GetLanguageListRequest.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::PlayFab::PlayFabLocalizationAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01A2D880, void, ForgetAllCredentials, )
    IL2CPP_REGISTER_METHOD(
        0x01A2D910,
        void,
        GetLanguageList,
        app::GetLanguageListRequest* request,
        app::Action_1_PlayFab_LocalizationModels_GetLanguageListResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
} // namespace app::classes::PlayFab::PlayFabLocalizationAPI
