#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FinalizeFileUploadsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FinalizeFileUploadsRequest__Class** type_info;
        inline app::FinalizeFileUploadsRequest__Class* get_class() {
            return il2cpp::get_class<app::FinalizeFileUploadsRequest__Class>(type_info, "PlayFab.DataModels", "FinalizeFileUploadsRequest");
        }
        inline app::FinalizeFileUploadsRequest* create() {
            return il2cpp::create_object<app::FinalizeFileUploadsRequest>(get_class());
        }
    } // namespace FinalizeFileUploadsRequest
} // namespace app::classes::types
