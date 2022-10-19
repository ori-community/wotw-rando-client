#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListMembershipOpportunitiesRequest {
        inline app::ListMembershipOpportunitiesRequest__Class** type_info = (app::ListMembershipOpportunitiesRequest__Class**)(modloader::win::memory::resolve_rva(0x04730568));
        inline app::ListMembershipOpportunitiesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMembershipOpportunitiesRequest__Class>(type_info, "PlayFab.GroupsModels", "ListMembershipOpportunitiesRequest");
        }
        inline app::ListMembershipOpportunitiesRequest* create() {
            return il2cpp::create_object<app::ListMembershipOpportunitiesRequest>(get_class());
        }
    } // namespace ListMembershipOpportunitiesRequest
} // namespace app::classes::types
