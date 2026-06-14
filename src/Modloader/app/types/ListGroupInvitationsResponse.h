#pragma once
#include <Modloader/app/structs/ListGroupInvitationsResponse.h>
#include <Modloader/app/structs/ListGroupInvitationsResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListGroupInvitationsResponse {
        inline app::ListGroupInvitationsResponse__Class** type_info() {
            static app::ListGroupInvitationsResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListGroupInvitationsResponse__Class**)(modloader::win::memory::resolve_rva(0x04718380));
            }
            return cache;
        }
        inline app::ListGroupInvitationsResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupInvitationsResponse__Class>(type_info(), "PlayFab.GroupsModels", "ListGroupInvitationsResponse");
        }
        inline app::ListGroupInvitationsResponse* create() {
            return il2cpp::create_object<app::ListGroupInvitationsResponse>(get_class());
        }
    } // namespace ListGroupInvitationsResponse
} // namespace app::classes::types
