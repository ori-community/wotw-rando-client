#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateGroupResponse {
        inline app::UpdateGroupResponse__Class** type_info = (app::UpdateGroupResponse__Class**)(modloader::win::memory::resolve_rva(0x04722FC0));
        inline app::UpdateGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::UpdateGroupResponse__Class>(type_info, "PlayFab.GroupsModels", "UpdateGroupResponse");
        }
        inline app::UpdateGroupResponse* create() {
            return il2cpp::create_object<app::UpdateGroupResponse>(get_class());
        }
    } // namespace UpdateGroupResponse
} // namespace app::classes::types
