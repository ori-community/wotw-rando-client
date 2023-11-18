#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabProfilesInstanceAPI.h>
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
#include <Modloader/app/structs/PlayFabApiSettings.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#include <Modloader/app/structs/SetEntityProfilePolicyRequest.h>
#include <Modloader/app/structs/SetGlobalPolicyRequest.h>
#include <Modloader/app/structs/SetProfileLanguageRequest.h>

namespace app::classes::PlayFab::PlayFabProfilesInstanceAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::PlayFabProfilesInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::PlayFabProfilesInstanceAPI * this_ptr, app::PlayFabApiSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_3, (app::PlayFabProfilesInstanceAPI * this_ptr, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_4, (app::PlayFabProfilesInstanceAPI * this_ptr, app::PlayFabApiSettings* settings, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (app::PlayFabProfilesInstanceAPI * this_ptr, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlayFabAuthenticationContext*, GetAuthenticationContext, (app::PlayFabProfilesInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (app::PlayFabProfilesInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A347F0, void, GetGlobalPolicy, (app::PlayFabProfilesInstanceAPI * this_ptr, app::GetGlobalPolicyRequest* request, app::Action_1_PlayFab_ProfilesModels_GetGlobalPolicyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A34910, void, GetProfile, (app::PlayFabProfilesInstanceAPI * this_ptr, app::GetEntityProfileRequest* request, app::Action_1_PlayFab_ProfilesModels_GetEntityProfileResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A34A30, void, GetProfiles, (app::PlayFabProfilesInstanceAPI * this_ptr, app::GetEntityProfilesRequest* request, app::Action_1_PlayFab_ProfilesModels_GetEntityProfilesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A34B50, void, SetGlobalPolicy, (app::PlayFabProfilesInstanceAPI * this_ptr, app::SetGlobalPolicyRequest* request, app::Action_1_PlayFab_ProfilesModels_SetGlobalPolicyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A34C70, void, SetProfileLanguage, (app::PlayFabProfilesInstanceAPI * this_ptr, app::SetProfileLanguageRequest* request, app::Action_1_PlayFab_ProfilesModels_SetProfileLanguageResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A34D90, void, SetProfilePolicy, (app::PlayFabProfilesInstanceAPI * this_ptr, app::SetEntityProfilePolicyRequest* request, app::Action_1_PlayFab_ProfilesModels_SetEntityProfilePolicyResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
} // namespace app::classes::PlayFab::PlayFabProfilesInstanceAPI
