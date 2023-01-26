#pragma once
#include <Modloader/app/structs/UpdateGroupRequest.h>
#include <Modloader/app/structs/UpdateGroupRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateGroupRequest {
        inline app::UpdateGroupRequest__Class** type_info() {
            static app::UpdateGroupRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateGroupRequest__Class**)(modloader::win::memory::resolve_rva(0x04747778));
            }
            return cache;
        }
        inline app::UpdateGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateGroupRequest__Class>(type_info(), "PlayFab.GroupsModels", "UpdateGroupRequest");
        }
        inline app::UpdateGroupRequest* create() {
            return il2cpp::create_object<app::UpdateGroupRequest>(get_class());
        }
    } // namespace UpdateGroupRequest
} // namespace app::classes::types
