#pragma once
#include <Modloader/app/structs/CreateGroupRoleResponse.h>
#include <Modloader/app/structs/CreateGroupRoleResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateGroupRoleResponse {
        inline app::CreateGroupRoleResponse__Class** type_info() {
            static app::CreateGroupRoleResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateGroupRoleResponse__Class**)(modloader::win::memory::resolve_rva(0x0473A630));
            }
            return cache;
        }
        inline app::CreateGroupRoleResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupRoleResponse__Class>(type_info(), "PlayFab.GroupsModels", "CreateGroupRoleResponse");
        }
        inline app::CreateGroupRoleResponse* create() {
            return il2cpp::create_object<app::CreateGroupRoleResponse>(get_class());
        }
    } // namespace CreateGroupRoleResponse
} // namespace app::classes::types
