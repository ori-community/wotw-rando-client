#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpdateGroupRoleResponse__Class.h>
#include <Modloader/app/structs/UpdateGroupRoleResponse.h>

namespace app::classes::types {
    namespace UpdateGroupRoleResponse {
        inline app::UpdateGroupRoleResponse__Class** type_info = (app::UpdateGroupRoleResponse__Class**)(modloader::win::memory::resolve_rva(0x04795E40));
        inline app::UpdateGroupRoleResponse__Class* get_class() {
            return il2cpp::get_class<app::UpdateGroupRoleResponse__Class>(type_info, "PlayFab.GroupsModels", "UpdateGroupRoleResponse");
        }
        inline app::UpdateGroupRoleResponse* create() {
            return il2cpp::create_object<app::UpdateGroupRoleResponse>(get_class());
        }
    } // namespace UpdateGroupRoleResponse
} // namespace app::classes::types
