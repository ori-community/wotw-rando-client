#pragma once
#include <Modloader/interception_macros.h>
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

namespace app::classes::PlayFab::PlayFabDataAPI {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A25870, void, ForgetAllCredentials, ())
    IL2CPP_REGISTER_METHOD(0x01A25900, void, AbortFileUploads, (app::AbortFileUploadsRequest * request, app::Action_1_PlayFab_DataModels_AbortFileUploadsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A25A10, void, DeleteFiles, (app::DeleteFilesRequest * request, app::Action_1_PlayFab_DataModels_DeleteFilesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A25B20, void, FinalizeFileUploads, (app::FinalizeFileUploadsRequest * request, app::Action_1_PlayFab_DataModels_FinalizeFileUploadsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A25C30, void, GetFiles, (app::GetFilesRequest * request, app::Action_1_PlayFab_DataModels_GetFilesResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A25D40, void, GetObjects, (app::GetObjectsRequest * request, app::Action_1_PlayFab_DataModels_GetObjectsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A25E50, void, InitiateFileUploads, (app::InitiateFileUploadsRequest * request, app::Action_1_PlayFab_DataModels_InitiateFileUploadsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
    IL2CPP_REGISTER_METHOD(0x01A25F60, void, SetObjects, (app::SetObjectsRequest * request, app::Action_1_PlayFab_DataModels_SetObjectsResponse_* result_callback, app::Action_1_PlayFab_PlayFabError_* error_callback, app::Object* custom_data, app::Dictionary_2_System_String_System_String_* extra_headers))
} // namespace app::classes::PlayFab::PlayFabDataAPI
