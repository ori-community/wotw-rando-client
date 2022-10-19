#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateGroupRoleResponse {
        inline app::CreateGroupRoleResponse__Class** type_info = (app::CreateGroupRoleResponse__Class**)(modloader::win::memory::resolve_rva(0x0473A630));
        inline app::CreateGroupRoleResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupRoleResponse__Class>(type_info, "PlayFab.GroupsModels", "CreateGroupRoleResponse");
        }
        inline app::CreateGroupRoleResponse* create() {
            return il2cpp::create_object<app::CreateGroupRoleResponse>(get_class());
        }
    } // namespace CreateGroupRoleResponse
} // namespace app::classes::types
