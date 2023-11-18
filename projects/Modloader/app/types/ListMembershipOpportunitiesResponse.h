#pragma once
#include <Modloader/app/structs/ListMembershipOpportunitiesResponse.h>
#include <Modloader/app/structs/ListMembershipOpportunitiesResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListMembershipOpportunitiesResponse {
        inline app::ListMembershipOpportunitiesResponse__Class** type_info() {
            static app::ListMembershipOpportunitiesResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListMembershipOpportunitiesResponse__Class**)(modloader::win::memory::resolve_rva(0x0471D140));
            }
            return cache;
        }
        inline app::ListMembershipOpportunitiesResponse__Class* get_class() {
            return il2cpp::get_class<app::ListMembershipOpportunitiesResponse__Class>(type_info(), "PlayFab.GroupsModels", "ListMembershipOpportunitiesResponse");
        }
        inline app::ListMembershipOpportunitiesResponse* create() {
            return il2cpp::create_object<app::ListMembershipOpportunitiesResponse>(get_class());
        }
    } // namespace ListMembershipOpportunitiesResponse
} // namespace app::classes::types
