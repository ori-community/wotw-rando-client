#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeMemberRoleRequest {
        inline app::ChangeMemberRoleRequest__Class** type_info = (app::ChangeMemberRoleRequest__Class**)(modloader::win::memory::resolve_rva(0x04781028));
        inline app::ChangeMemberRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::ChangeMemberRoleRequest__Class>(type_info, "PlayFab.GroupsModels", "ChangeMemberRoleRequest");
        }
        inline app::ChangeMemberRoleRequest* create() {
            return il2cpp::create_object<app::ChangeMemberRoleRequest>(get_class());
        }
    } // namespace ChangeMemberRoleRequest
} // namespace app::classes::types
