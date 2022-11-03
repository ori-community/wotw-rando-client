#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateGroupRoleRequest {
        inline app::UpdateGroupRoleRequest__Class** type_info = (app::UpdateGroupRoleRequest__Class**)(modloader::win::memory::resolve_rva(0x04718E00));
        inline app::UpdateGroupRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateGroupRoleRequest__Class>(type_info, "PlayFab.GroupsModels", "UpdateGroupRoleRequest");
        }
        inline app::UpdateGroupRoleRequest* create() {
            return il2cpp::create_object<app::UpdateGroupRoleRequest>(get_class());
        }
    } // namespace UpdateGroupRoleRequest
} // namespace app::classes::types
