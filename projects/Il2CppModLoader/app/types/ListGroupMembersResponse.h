#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListGroupMembersResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListGroupMembersResponse__Class** type_info;
        inline app::ListGroupMembersResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupMembersResponse__Class>(type_info, "PlayFab.GroupsModels", "ListGroupMembersResponse");
        }
        inline app::ListGroupMembersResponse* create() {
            return il2cpp::create_object<app::ListGroupMembersResponse>(get_class());
        }
    } // namespace ListGroupMembersResponse
} // namespace app::classes::types
