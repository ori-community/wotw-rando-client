#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeleteFilesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeleteFilesRequest__Class** type_info;
        inline app::DeleteFilesRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteFilesRequest__Class>(type_info, "PlayFab.DataModels", "DeleteFilesRequest");
        }
        inline app::DeleteFilesRequest* create() {
            return il2cpp::create_object<app::DeleteFilesRequest>(get_class());
        }
    } // namespace DeleteFilesRequest
} // namespace app::classes::types
