#pragma once
#include <Modloader/app/structs/ListGroupInvitationsRequest.h>
#include <Modloader/app/structs/ListGroupInvitationsRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListGroupInvitationsRequest {
        inline app::ListGroupInvitationsRequest__Class** type_info() {
            static app::ListGroupInvitationsRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListGroupInvitationsRequest__Class**)(modloader::win::memory::resolve_rva(0x04756CC8));
            }
            return cache;
        }
        inline app::ListGroupInvitationsRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupInvitationsRequest__Class>(type_info(), "PlayFab.GroupsModels", "ListGroupInvitationsRequest");
        }
        inline app::ListGroupInvitationsRequest* create() {
            return il2cpp::create_object<app::ListGroupInvitationsRequest>(get_class());
        }
    } // namespace ListGroupInvitationsRequest
} // namespace app::classes::types
