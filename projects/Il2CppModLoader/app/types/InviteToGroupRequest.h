#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InviteToGroupRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InviteToGroupRequest__Class** type_info;
        inline app::InviteToGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::InviteToGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "InviteToGroupRequest");
        }
        inline app::InviteToGroupRequest* create() {
            return il2cpp::create_object<app::InviteToGroupRequest>(get_class());
        }
    } // namespace InviteToGroupRequest
} // namespace app::classes::types
