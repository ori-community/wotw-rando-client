#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListMembershipOpportunitiesResponse__Class.h>
#include <Modloader/app/structs/ListMembershipOpportunitiesResponse.h>

namespace app::classes::types {
    namespace ListMembershipOpportunitiesResponse {
        inline app::ListMembershipOpportunitiesResponse__Class** type_info = (app::ListMembershipOpportunitiesResponse__Class**)(modloader::win::memory::resolve_rva(0x0471D140));
        inline app::ListMembershipOpportunitiesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListMembershipOpportunitiesResponse__Class>(type_info, "PlayFab.GroupsModels", "ListMembershipOpportunitiesResponse");
        }
        inline app::ListMembershipOpportunitiesResponse* create() {
            return il2cpp::create_object<app::ListMembershipOpportunitiesResponse>(get_class());
        }
    } // namespace ListMembershipOpportunitiesResponse
} // namespace app::classes::types
