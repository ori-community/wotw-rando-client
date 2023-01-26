#pragma once
#include <Modloader/app/structs/ListMembershipResponse.h>
#include <Modloader/app/structs/ListMembershipResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListMembershipResponse {
        inline app::ListMembershipResponse__Class** type_info() {
            static app::ListMembershipResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListMembershipResponse__Class**)(modloader::win::memory::resolve_rva(0x0476AFC8));
            }
            return cache;
        }
        inline app::ListMembershipResponse__Class* get_class() {
            return il2cpp::get_class<app::ListMembershipResponse__Class>(type_info(), "PlayFab.GroupsModels", "ListMembershipResponse");
        }
        inline app::ListMembershipResponse* create() {
            return il2cpp::create_object<app::ListMembershipResponse>(get_class());
        }
    } // namespace ListMembershipResponse
} // namespace app::classes::types
