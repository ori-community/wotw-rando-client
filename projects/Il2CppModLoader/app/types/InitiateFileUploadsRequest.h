#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InitiateFileUploadsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InitiateFileUploadsRequest__Class** type_info;
        inline app::InitiateFileUploadsRequest__Class* get_class() {
            return il2cpp::get_class<app::InitiateFileUploadsRequest__Class>(type_info, "PlayFab.DataModels", "InitiateFileUploadsRequest");
        }
        inline app::InitiateFileUploadsRequest* create() {
            return il2cpp::create_object<app::InitiateFileUploadsRequest>(get_class());
        }
    } // namespace InitiateFileUploadsRequest
} // namespace app::classes::types
