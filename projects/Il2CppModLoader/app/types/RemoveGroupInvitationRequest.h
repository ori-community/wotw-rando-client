#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoveGroupInvitationRequest {
        inline app::RemoveGroupInvitationRequest__Class** type_info = (app::RemoveGroupInvitationRequest__Class**)(modloader::win::memory::resolve_rva(0x04701E48));
        inline app::RemoveGroupInvitationRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveGroupInvitationRequest__Class>(type_info, "PlayFab.GroupsModels", "RemoveGroupInvitationRequest");
        }
        inline app::RemoveGroupInvitationRequest* create() {
            return il2cpp::create_object<app::RemoveGroupInvitationRequest>(get_class());
        }
    } // namespace RemoveGroupInvitationRequest
} // namespace app::classes::types
