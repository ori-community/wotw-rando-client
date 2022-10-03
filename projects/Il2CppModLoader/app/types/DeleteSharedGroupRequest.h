#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeleteSharedGroupRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeleteSharedGroupRequest__Class** type_info;
        inline app::DeleteSharedGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteSharedGroupRequest__Class>(type_info, "PlayFab.ServerModels", "DeleteSharedGroupRequest");
        }
        inline app::DeleteSharedGroupRequest* create() {
            return il2cpp::create_object<app::DeleteSharedGroupRequest>(get_class());
        }
    } // namespace DeleteSharedGroupRequest
} // namespace app::classes::types
