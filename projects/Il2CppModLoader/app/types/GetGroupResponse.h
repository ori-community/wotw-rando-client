#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetGroupResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetGroupResponse__Class** type_info;
        inline app::GetGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::GetGroupResponse__Class>(type_info, "PlayFab.GroupsModels", "GetGroupResponse");
        }
        inline app::GetGroupResponse* create() {
            return il2cpp::create_object<app::GetGroupResponse>(get_class());
        }
    } // namespace GetGroupResponse
} // namespace app::classes::types
