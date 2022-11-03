#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ApplyToGroupResponse {
        inline app::ApplyToGroupResponse__Class** type_info = (app::ApplyToGroupResponse__Class**)(modloader::win::memory::resolve_rva(0x04731220));
        inline app::ApplyToGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::ApplyToGroupResponse__Class>(type_info, "PlayFab.GroupsModels", "ApplyToGroupResponse");
        }
        inline app::ApplyToGroupResponse* create() {
            return il2cpp::create_object<app::ApplyToGroupResponse>(get_class());
        }
    } // namespace ApplyToGroupResponse
} // namespace app::classes::types
