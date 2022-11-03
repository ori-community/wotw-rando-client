#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InviteToGroupRequest {
        inline app::InviteToGroupRequest__Class** type_info = (app::InviteToGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x0472CAD8));
        inline app::InviteToGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::InviteToGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "InviteToGroupRequest");
        }
        inline app::InviteToGroupRequest* create() {
            return il2cpp::create_object<app::InviteToGroupRequest>(get_class());
        }
    } // namespace InviteToGroupRequest
} // namespace app::classes::types
