#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeleteRoleRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeleteRoleRequest__Class** type_info;
        inline app::DeleteRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteRoleRequest__Class>(type_info, "PlayFab.GroupsModels", "DeleteRoleRequest");
        }
        inline app::DeleteRoleRequest* create() {
            return il2cpp::create_object<app::DeleteRoleRequest>(get_class());
        }
    } // namespace DeleteRoleRequest
} // namespace app::classes::types
