#pragma once
#include <Modloader/app/structs/ListMembershipOpportunitiesRequest.h>
#include <Modloader/app/structs/ListMembershipOpportunitiesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListMembershipOpportunitiesRequest {
        inline app::ListMembershipOpportunitiesRequest__Class** type_info() {
            static app::ListMembershipOpportunitiesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListMembershipOpportunitiesRequest__Class**)(modloader::win::memory::resolve_rva(0x04730568));
            }
            return cache;
        }
        inline app::ListMembershipOpportunitiesRequest__Class* get_class() {
            return il2cpp::get_class<app::ListMembershipOpportunitiesRequest__Class>(type_info(), "PlayFab.GroupsModels", "ListMembershipOpportunitiesRequest");
        }
        inline app::ListMembershipOpportunitiesRequest* create() {
            return il2cpp::create_object<app::ListMembershipOpportunitiesRequest>(get_class());
        }
    } // namespace ListMembershipOpportunitiesRequest
} // namespace app::classes::types
