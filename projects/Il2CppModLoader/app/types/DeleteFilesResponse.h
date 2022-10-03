#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeleteFilesResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeleteFilesResponse__Class** type_info;
        inline app::DeleteFilesResponse__Class* get_class() {
            return il2cpp::get_class<app::DeleteFilesResponse__Class>(type_info, "PlayFab.DataModels", "DeleteFilesResponse");
        }
        inline app::DeleteFilesResponse* create() {
            return il2cpp::create_object<app::DeleteFilesResponse>(get_class());
        }
    } // namespace DeleteFilesResponse
} // namespace app::classes::types
