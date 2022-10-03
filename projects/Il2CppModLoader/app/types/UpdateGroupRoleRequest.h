#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateGroupRoleRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateGroupRoleRequest__Class** type_info;
        inline app::UpdateGroupRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateGroupRoleRequest__Class>(type_info, "PlayFab.GroupsModels", "UpdateGroupRoleRequest");
        }
        inline app::UpdateGroupRoleRequest* create() {
            return il2cpp::create_object<app::UpdateGroupRoleRequest>(get_class());
        }
    } // namespace UpdateGroupRoleRequest
} // namespace app::classes::types
