#pragma once
#include <Modloader/app/structs/AcceptGroupInvitationRequest.h>
#include <Modloader/app/structs/AcceptGroupInvitationRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AcceptGroupInvitationRequest {
        inline app::AcceptGroupInvitationRequest__Class** type_info() {
            static app::AcceptGroupInvitationRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AcceptGroupInvitationRequest__Class**)(modloader::win::memory::resolve_rva(0x04747618));
            }
            return cache;
        }
        inline app::AcceptGroupInvitationRequest__Class* get_class() {
            return il2cpp::get_class<app::AcceptGroupInvitationRequest__Class>(type_info(), "PlayFab.GroupsModels", "AcceptGroupInvitationRequest");
        }
        inline app::AcceptGroupInvitationRequest* create() {
            return il2cpp::create_object<app::AcceptGroupInvitationRequest>(get_class());
        }
    } // namespace AcceptGroupInvitationRequest
} // namespace app::classes::types
