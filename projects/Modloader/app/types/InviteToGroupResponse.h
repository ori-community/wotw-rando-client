#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InviteToGroupResponse {
        inline app::InviteToGroupResponse__Class** type_info = (app::InviteToGroupResponse__Class**)(modloader::win::memory::resolve_rva(0x0473FF48));
        inline app::InviteToGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::InviteToGroupResponse__Class>(type_info, "PlayFab.GroupsModels", "InviteToGroupResponse");
        }
        inline app::InviteToGroupResponse* create() {
            return il2cpp::create_object<app::InviteToGroupResponse>(get_class());
        }
    } // namespace InviteToGroupResponse
} // namespace app::classes::types
