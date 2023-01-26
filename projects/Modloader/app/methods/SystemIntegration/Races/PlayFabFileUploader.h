#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabFileUploader.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/FinalizeFileUploadsResponse.h>
#include <Modloader/app/structs/InitiateFileUploadsResponse.h>
#include <Modloader/app/structs/PlayFabError.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task_1_System_Boolean_.h>

namespace app::classes::SystemIntegration::Races::PlayFabFileUploader {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::PlayFabFileUploader * this_ptr, app::String* file_name, app::Byte__Array* data, app::String* owner_id))
    IL2CPP_REGISTER_METHOD(0x00522860, app::Task_1_System_Boolean_*, Perform, (app::PlayFabFileUploader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00522FF0, void, OnInitFileUpload, (app::PlayFabFileUploader * this_ptr, app::InitiateFileUploadsResponse* response))
    IL2CPP_REGISTER_METHOD(0x00523380, void, OnInitFailed, (app::PlayFabFileUploader * this_ptr, app::PlayFabError* error))
    IL2CPP_REGISTER_METHOD(0x00523A50, void, FinalizeUpload, (app::PlayFabFileUploader * this_ptr, app::Byte__Array* obj))
    IL2CPP_REGISTER_METHOD(0x00524000, void, OnUploadSuccess, (app::PlayFabFileUploader * this_ptr, app::FinalizeFileUploadsResponse* response))
    IL2CPP_REGISTER_METHOD(0x00524150, void, OnUploadFailed, (app::PlayFabFileUploader * this_ptr, app::PlayFabError* error))
    IL2CPP_REGISTER_METHOD(0x00524330, void, _OnInitFileUpload_b__6_0, (app::PlayFabFileUploader * this_ptr, app::String* err))
} // namespace app::classes::SystemIntegration::Races::PlayFabFileUploader
