#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SystemIntegration::Races::PlayFabFileUploader {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::PlayFabFileUploader * this_ptr, app::String* file_name, app::Byte__Array* data, app::String* owner_id))
    IL2CPP_REGISTER_METHOD(0x00522860, app::Task_1_System_Boolean_*, Perform, (app::PlayFabFileUploader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00522FF0, void, OnInitFileUpload, (app::PlayFabFileUploader * this_ptr, app::InitiateFileUploadsResponse* response))
    IL2CPP_REGISTER_METHODINFO(0x04769C70, PlayFabFileUploader_OnInitFileUpload__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00523380, void, OnInitFailed, (app::PlayFabFileUploader * this_ptr, app::PlayFabError* error))
    IL2CPP_REGISTER_METHODINFO(0x04733BD0, PlayFabFileUploader_OnInitFailed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00523A50, void, FinalizeUpload, (app::PlayFabFileUploader * this_ptr, app::Byte__Array* obj))
    IL2CPP_REGISTER_METHODINFO(0x04718070, PlayFabFileUploader_FinalizeUpload__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00524000, void, OnUploadSuccess, (app::PlayFabFileUploader * this_ptr, app::FinalizeFileUploadsResponse* response))
    IL2CPP_REGISTER_METHODINFO(0x04797718, PlayFabFileUploader_OnUploadSuccess__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00524150, void, OnUploadFailed, (app::PlayFabFileUploader * this_ptr, app::PlayFabError* error))
    IL2CPP_REGISTER_METHODINFO(0x047120E8, PlayFabFileUploader_OnUploadFailed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00524330, void, _OnInitFileUpload_b__6_0, (app::PlayFabFileUploader * this_ptr, app::String* err))
    IL2CPP_REGISTER_METHODINFO(0x0470B938, PlayFabFileUploader__OnInitFileUpload_b__6_0__MethodInfo)
} // namespace app::classes::SystemIntegration::Races::PlayFabFileUploader
