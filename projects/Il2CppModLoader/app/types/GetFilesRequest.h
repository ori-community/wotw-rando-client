#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetFilesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetFilesRequest__Class** type_info;
        inline app::GetFilesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetFilesRequest__Class>(type_info, "PlayFab.DataModels", "GetFilesRequest");
        }
        inline app::GetFilesRequest* create() {
            return il2cpp::create_object<app::GetFilesRequest>(get_class());
        }
    } // namespace GetFilesRequest
} // namespace app::classes::types
