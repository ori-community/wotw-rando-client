#pragma once
#include <Modloader/app/structs/ChangeMemberRoleRequest.h>
#include <Modloader/app/structs/ChangeMemberRoleRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeMemberRoleRequest {
        inline app::ChangeMemberRoleRequest__Class** type_info() {
            static app::ChangeMemberRoleRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ChangeMemberRoleRequest__Class**)(modloader::win::memory::resolve_rva(0x04781028));
            }
            return cache;
        }
        inline app::ChangeMemberRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::ChangeMemberRoleRequest__Class>(type_info(), "PlayFab.GroupsModels", "ChangeMemberRoleRequest");
        }
        inline app::ChangeMemberRoleRequest* create() {
            return il2cpp::create_object<app::ChangeMemberRoleRequest>(get_class());
        }
    } // namespace ChangeMemberRoleRequest
} // namespace app::classes::types
