#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListMembershipRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListMembershipRequest__Class** type_info;
        inline app::ListMembershipRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMembershipRequest__Class>(type_info, "PlayFab.GroupsModels", "ListMembershipRequest");
        }
        inline app::ListMembershipRequest* create() {
            return il2cpp::create_object<app::ListMembershipRequest>(get_class());
        }
    } // namespace ListMembershipRequest
} // namespace app::classes::types
