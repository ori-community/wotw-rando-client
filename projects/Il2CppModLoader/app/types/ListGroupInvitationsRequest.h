#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListGroupInvitationsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListGroupInvitationsRequest__Class** type_info;
        inline app::ListGroupInvitationsRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupInvitationsRequest__Class>(type_info, "PlayFab.GroupsModels", "ListGroupInvitationsRequest");
        }
        inline app::ListGroupInvitationsRequest* create() {
            return il2cpp::create_object<app::ListGroupInvitationsRequest>(get_class());
        }
    } // namespace ListGroupInvitationsRequest
} // namespace app::classes::types
