#pragma once
#include <Modloader/app/structs/CreateGroupRoleRequest.h>
#include <Modloader/app/structs/CreateGroupRoleRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateGroupRoleRequest {
        inline app::CreateGroupRoleRequest__Class** type_info() {
            static app::CreateGroupRoleRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateGroupRoleRequest__Class**)(modloader::win::memory::resolve_rva(0x04706EE0));
            }
            return cache;
        }
        inline app::CreateGroupRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupRoleRequest__Class>(type_info(), "PlayFab.GroupsModels", "CreateGroupRoleRequest");
        }
        inline app::CreateGroupRoleRequest* create() {
            return il2cpp::create_object<app::CreateGroupRoleRequest>(get_class());
        }
    } // namespace CreateGroupRoleRequest
} // namespace app::classes::types
