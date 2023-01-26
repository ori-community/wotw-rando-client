#pragma once
#include <Modloader/app/structs/UpdateGroupResponse.h>
#include <Modloader/app/structs/UpdateGroupResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateGroupResponse {
        inline app::UpdateGroupResponse__Class** type_info() {
            static app::UpdateGroupResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateGroupResponse__Class**)(modloader::win::memory::resolve_rva(0x04722FC0));
            }
            return cache;
        }
        inline app::UpdateGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::UpdateGroupResponse__Class>(type_info(), "PlayFab.GroupsModels", "UpdateGroupResponse");
        }
        inline app::UpdateGroupResponse* create() {
            return il2cpp::create_object<app::UpdateGroupResponse>(get_class());
        }
    } // namespace UpdateGroupResponse
} // namespace app::classes::types
