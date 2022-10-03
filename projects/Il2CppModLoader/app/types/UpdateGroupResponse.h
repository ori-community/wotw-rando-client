#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateGroupResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateGroupResponse__Class** type_info;
        inline app::UpdateGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::UpdateGroupResponse__Class>(type_info, "PlayFab.GroupsModels", "UpdateGroupResponse");
        }
        inline app::UpdateGroupResponse* create() {
            return il2cpp::create_object<app::UpdateGroupResponse>(get_class());
        }
    } // namespace UpdateGroupResponse
} // namespace app::classes::types
