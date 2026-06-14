#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/GetEntityProfileRequest.h>
#include <Modloader/app/structs/GetEntityProfilesRequest.h>
#include <Modloader/app/structs/GetGlobalPolicyRequest.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SetEntityProfilePolicyRequest.h>
#include <Modloader/app/structs/SetGlobalPolicyRequest.h>
#include <Modloader/app/structs/SetProfileLanguageRequest.h>

namespace app::classes::PlayFab::PlayFabProfilesAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x01A34100, void, ForgetAllCredentials, )
    IL2CPP_REGISTER_METHOD(
        0x01A34190,
        void,
        GetGlobalPolicy,
        app::GetGlobalPolicyRequest* request,
        app::Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A342A0,
        void,
        GetProfile,
        app::GetEntityProfileRequest* request,
        app::Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A343B0,
        void,
        GetProfiles,
        app::GetEntityProfilesRequest* request,
        app::Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A344C0,
        void,
        SetGlobalPolicy,
        app::SetGlobalPolicyRequest* request,
        app::Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A345D0,
        void,
        SetProfileLanguage,
        app::SetProfileLanguageRequest* request,
        app::Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
    IL2CPP_REGISTER_METHOD(
        0x01A346E0,
        void,
        SetProfilePolicy,
        app::SetEntityProfilePolicyRequest* request,
        app::Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse_* result_callback,
        app::Action_1_PlayFab_PlayFabError_* error_callback,
        app::Object* custom_data,
        app::Dictionary_2_System_String_System_String_* extra_headers
    )
} // namespace app::classes::PlayFab::PlayFabProfilesAPI
