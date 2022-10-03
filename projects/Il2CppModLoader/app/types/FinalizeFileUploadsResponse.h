#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FinalizeFileUploadsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FinalizeFileUploadsResponse__Class** type_info;
        inline app::FinalizeFileUploadsResponse__Class* get_class() {
            return il2cpp::get_class<app::FinalizeFileUploadsResponse__Class>(type_info, "PlayFab.DataModels", "FinalizeFileUploadsResponse");
        }
        inline app::FinalizeFileUploadsResponse* create() {
            return il2cpp::create_object<app::FinalizeFileUploadsResponse>(get_class());
        }
    } // namespace FinalizeFileUploadsResponse
} // namespace app::classes::types
