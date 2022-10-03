#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetFilesResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetFilesResponse__Class** type_info;
        inline app::GetFilesResponse__Class* get_class() {
            return il2cpp::get_class<app::GetFilesResponse__Class>(type_info, "PlayFab.DataModels", "GetFilesResponse");
        }
        inline app::GetFilesResponse* create() {
            return il2cpp::create_object<app::GetFilesResponse>(get_class());
        }
    } // namespace GetFilesResponse
} // namespace app::classes::types
