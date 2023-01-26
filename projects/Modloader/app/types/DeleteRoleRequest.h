#pragma once
#include <Modloader/app/structs/DeleteRoleRequest.h>
#include <Modloader/app/structs/DeleteRoleRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteRoleRequest {
        inline app::DeleteRoleRequest__Class** type_info() {
            static app::DeleteRoleRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteRoleRequest__Class**)(modloader::win::memory::resolve_rva(0x0471B228));
            }
            return cache;
        }
        inline app::DeleteRoleRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteRoleRequest__Class>(type_info(), "PlayFab.GroupsModels", "DeleteRoleRequest");
        }
        inline app::DeleteRoleRequest* create() {
            return il2cpp::create_object<app::DeleteRoleRequest>(get_class());
        }
    } // namespace DeleteRoleRequest
} // namespace app::classes::types
