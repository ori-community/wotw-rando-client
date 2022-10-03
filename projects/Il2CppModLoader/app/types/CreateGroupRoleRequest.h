#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateGroupRoleRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateGroupRoleRequest__Class** type_info;
        inline app::CreateGroupRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupRoleRequest__Class>(type_info, "PlayFab.GroupsModels", "CreateGroupRoleRequest");
        }
        inline app::CreateGroupRoleRequest* create() {
            return il2cpp::create_object<app::CreateGroupRoleRequest>(get_class());
        }
    } // namespace CreateGroupRoleRequest
} // namespace app::classes::types
