#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeMemberRoleRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChangeMemberRoleRequest__Class** type_info;
        inline app::ChangeMemberRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::ChangeMemberRoleRequest__Class>(type_info, "PlayFab.GroupsModels", "ChangeMemberRoleRequest");
        }
        inline app::ChangeMemberRoleRequest* create() {
            return il2cpp::create_object<app::ChangeMemberRoleRequest>(get_class());
        }
    } // namespace ChangeMemberRoleRequest
} // namespace app::classes::types
