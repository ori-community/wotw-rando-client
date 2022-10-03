#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InviteToGroupResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InviteToGroupResponse__Class** type_info;
        inline app::InviteToGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::InviteToGroupResponse__Class>(type_info, "PlayFab.GroupsModels", "InviteToGroupResponse");
        }
        inline app::InviteToGroupResponse* create() {
            return il2cpp::create_object<app::InviteToGroupResponse>(get_class());
        }
    } // namespace InviteToGroupResponse
} // namespace app::classes::types
