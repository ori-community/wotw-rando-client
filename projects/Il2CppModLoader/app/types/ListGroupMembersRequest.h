#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListGroupMembersRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListGroupMembersRequest__Class** type_info;
        inline app::ListGroupMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupMembersRequest__Class>(type_info, "PlayFab.GroupsModels", "ListGroupMembersRequest");
        }
        inline app::ListGroupMembersRequest* create() {
            return il2cpp::create_object<app::ListGroupMembersRequest>(get_class());
        }
    } // namespace ListGroupMembersRequest
} // namespace app::classes::types
