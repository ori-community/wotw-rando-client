#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateGroupResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateGroupResponse__Class** type_info;
        inline app::CreateGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupResponse__Class>(type_info, "PlayFab.GroupsModels", "CreateGroupResponse");
        }
        inline app::CreateGroupResponse* create() {
            return il2cpp::create_object<app::CreateGroupResponse>(get_class());
        }
    } // namespace CreateGroupResponse
} // namespace app::classes::types
