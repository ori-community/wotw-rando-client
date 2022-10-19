#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListGroupInvitationsRequest {
        inline app::ListGroupInvitationsRequest__Class** type_info = (app::ListGroupInvitationsRequest__Class**)(modloader::win::memory::resolve_rva(0x04756CC8));
        inline app::ListGroupInvitationsRequest__Class* get_class() {
            return il2cpp::get_class<app::ListGroupInvitationsRequest__Class>(type_info, "PlayFab.GroupsModels", "ListGroupInvitationsRequest");
        }
        inline app::ListGroupInvitationsRequest* create() {
            return il2cpp::create_object<app::ListGroupInvitationsRequest>(get_class());
        }
    } // namespace ListGroupInvitationsRequest
} // namespace app::classes::types
