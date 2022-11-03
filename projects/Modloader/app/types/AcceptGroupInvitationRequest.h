#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AcceptGroupInvitationRequest {
        inline app::AcceptGroupInvitationRequest__Class** type_info = (app::AcceptGroupInvitationRequest__Class**)(modloader::win::memory::resolve_rva(0x04747618));
        inline app::AcceptGroupInvitationRequest__Class* get_class() {
            return il2cpp::get_class<app::AcceptGroupInvitationRequest__Class>(type_info, "PlayFab.GroupsModels", "AcceptGroupInvitationRequest");
        }
        inline app::AcceptGroupInvitationRequest* create() {
            return il2cpp::create_object<app::AcceptGroupInvitationRequest>(get_class());
        }
    } // namespace AcceptGroupInvitationRequest
} // namespace app::classes::types
