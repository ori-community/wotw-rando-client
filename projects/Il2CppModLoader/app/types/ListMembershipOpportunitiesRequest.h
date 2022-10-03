#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListMembershipOpportunitiesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListMembershipOpportunitiesRequest__Class** type_info;
        inline app::ListMembershipOpportunitiesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMembershipOpportunitiesRequest__Class>(type_info, "PlayFab.GroupsModels", "ListMembershipOpportunitiesRequest");
        }
        inline app::ListMembershipOpportunitiesRequest* create() {
            return il2cpp::create_object<app::ListMembershipOpportunitiesRequest>(get_class());
        }
    } // namespace ListMembershipOpportunitiesRequest
} // namespace app::classes::types
