#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcceptGroupInvitationRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AcceptGroupInvitationRequest__Class** type_info;
        inline app::AcceptGroupInvitationRequest__Class* get_class() {
            return il2cpp::get_class<app::AcceptGroupInvitationRequest__Class>(type_info, "PlayFab.GroupsModels", "AcceptGroupInvitationRequest");
        }
        inline app::AcceptGroupInvitationRequest* create() {
            return il2cpp::create_object<app::AcceptGroupInvitationRequest>(get_class());
        }
    } // namespace AcceptGroupInvitationRequest
} // namespace app::classes::types
