#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateGroupRoleResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateGroupRoleResponse__Class** type_info;
        inline app::CreateGroupRoleResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupRoleResponse__Class>(type_info, "PlayFab.GroupsModels", "CreateGroupRoleResponse");
        }
        inline app::CreateGroupRoleResponse* create() {
            return il2cpp::create_object<app::CreateGroupRoleResponse>(get_class());
        }
    } // namespace CreateGroupRoleResponse
} // namespace app::classes::types
