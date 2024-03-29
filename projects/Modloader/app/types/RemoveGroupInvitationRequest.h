#pragma once
#include <Modloader/app/structs/RemoveGroupInvitationRequest.h>
#include <Modloader/app/structs/RemoveGroupInvitationRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveGroupInvitationRequest {
        inline app::RemoveGroupInvitationRequest__Class** type_info() {
            static app::RemoveGroupInvitationRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemoveGroupInvitationRequest__Class**)(modloader::win::memory::resolve_rva(0x04701E48));
            }
            return cache;
        }
        inline app::RemoveGroupInvitationRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveGroupInvitationRequest__Class>(type_info(), "PlayFab.GroupsModels", "RemoveGroupInvitationRequest");
        }
        inline app::RemoveGroupInvitationRequest* create() {
            return il2cpp::create_object<app::RemoveGroupInvitationRequest>(get_class());
        }
    } // namespace RemoveGroupInvitationRequest
} // namespace app::classes::types
