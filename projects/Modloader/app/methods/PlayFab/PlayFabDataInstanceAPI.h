#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabDataInstanceAPI.h>
#include <Modloader/app/structs/PlayFabApiSettings.h>
#include <Modloader/app/structs/PlayFabAuthenticationContext.h>
#include <Modloader/app/structs/AbortFileUploadsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_AbortFileUploadsResponse_.h>
#include <Modloader/app/structs/Action_1_PlayFab_PlayFabError_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/DeleteFilesRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_DeleteFilesResponse_.h>
#include <Modloader/app/structs/FinalizeFileUploadsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_FinalizeFileUploadsResponse_.h>
#include <Modloader/app/structs/GetFilesRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_GetFilesResponse_.h>
#include <Modloader/app/structs/GetObjectsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_GetObjectsResponse_.h>
#include <Modloader/app/structs/InitiateFileUploadsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_InitiateFileUploadsResponse_.h>
#include <Modloader/app/structs/SetObjectsRequest.h>
#include <Modloader/app/structs/Action_1_PlayFab_DataModels_SetObjectsResponse_.h>

namespace app::classes::PlayFab::PlayFabDataInstanceAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::PlayFabDataInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::PlayFabDataInstanceAPI * this_ptr, app::PlayFabApiSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_3, (app::PlayFabDataInstanceAPI * this_ptr, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor_4, (app::PlayFabDataInstanceAPI * this_ptr, app::PlayFabApiSettings* settings, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, SetAuthenticationContext, (app::PlayFabDataInstanceAPI * this_ptr, app::PlayFabAuthenticationContext* context))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::PlayFabAuthenticationContext*, GetAuthenticationContext, (app::PlayFabDataInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017B4520, void, ForgetAllCredentials, (app::PlayFabDataInstanceAPI * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A26BE0, void, AbortFileUploads, (app::PlayFabDataInstanceAPI * this_ptr, app::AbortFileUploadsRequest* request, app::Action_1_PlayFab_DataModels_AbortFileUploadsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A26D00, void, DeleteFiles, (app::PlayFabDataInstanceAPI * this_ptr, app::DeleteFilesRequest* request, app::Action_1_PlayFab_DataModels_DeleteFilesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A26E20, void, FinalizeFileUploads, (app::PlayFabDataInstanceAPI * this_ptr, app::FinalizeFileUploadsRequest* request, app::Action_1_PlayFab_DataModels_FinalizeFileUploadsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A26F40, void, GetFiles, (app::PlayFabDataInstanceAPI * this_ptr, app::GetFilesRequest* request, app::Action_1_PlayFab_DataModels_GetFilesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A27060, void, GetObjects, (app::PlayFabDataInstanceAPI * this_ptr, app::GetObjectsRequest* request, app::Action_1_PlayFab_DataModels_GetObjectsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A27180, void, InitiateFileUploads, (app::PlayFabDataInstanceAPI * this_ptr, app::InitiateFileUploadsRequest* request, app::Action_1_PlayFab_DataModels_InitiateFileUploadsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A272A0, void, SetObjects, (app::PlayFabDataInstanceAPI * this_ptr, app::SetObjectsRequest* request, app::Action_1_PlayFab_DataModels_SetObjectsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
} // namespace app::classes::PlayFab::PlayFabDataInstanceAPI
