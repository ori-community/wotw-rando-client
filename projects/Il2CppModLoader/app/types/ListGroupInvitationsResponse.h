#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListGroupInvitationsResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListGroupInvitationsResponse__Class** type_info;
        inline app::ListGroupInvitationsResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupInvitationsResponse__Class>(type_info, "PlayFab.GroupsModels", "ListGroupInvitationsResponse");
        }
        inline app::ListGroupInvitationsResponse* create() {
            return il2cpp::create_object<app::ListGroupInvitationsResponse>(get_class());
        }
    } // namespace ListGroupInvitationsResponse
} // namespace app::classes::types
