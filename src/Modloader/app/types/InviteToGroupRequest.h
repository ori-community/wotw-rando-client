#pragma once
#include <Modloader/app/structs/InviteToGroupRequest.h>
#include <Modloader/app/structs/InviteToGroupRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InviteToGroupRequest {
        inline app::InviteToGroupRequest__Class** type_info() {
            static app::InviteToGroupRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InviteToGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x0472CAD8));
            }
            return cache;
        }
        inline app::InviteToGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::InviteToGroupRequest__Class>(type_info(), "PlayFab.GroupsModels", "InviteToGroupRequest");
        }
        inline app::InviteToGroupRequest* create() {
            return il2cpp::create_object<app::InviteToGroupRequest>(get_class());
        }
    } // namespace InviteToGroupRequest
} // namespace app::classes::types
