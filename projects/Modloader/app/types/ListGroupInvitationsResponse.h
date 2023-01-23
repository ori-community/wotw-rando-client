#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListGroupInvitationsResponse__Class.h>
#include <Modloader/app/structs/ListGroupInvitationsResponse.h>

namespace app::classes::types {
    namespace ListGroupInvitationsResponse {
        inline app::ListGroupInvitationsResponse__Class** type_info = (app::ListGroupInvitationsResponse__Class**)(modloader::win::memory::resolve_rva(0x04718380));
        inline app::ListGroupInvitationsResponse__Class* get_class() {
            return il2cpp::get_class<app::ListGroupInvitationsResponse__Class>(type_info, "PlayFab.GroupsModels", "ListGroupInvitationsResponse");
        }
        inline app::ListGroupInvitationsResponse* create() {
            return il2cpp::create_object<app::ListGroupInvitationsResponse>(get_class());
        }
    } // namespace ListGroupInvitationsResponse
} // namespace app::classes::types
