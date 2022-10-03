#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApplyToGroupResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ApplyToGroupResponse__Class** type_info;
        inline app::ApplyToGroupResponse__Class* get_class() {
            return il2cpp::get_class<app::ApplyToGroupResponse__Class>(type_info, "PlayFab.GroupsModels", "ApplyToGroupResponse");
        }
        inline app::ApplyToGroupResponse* create() {
            return il2cpp::create_object<app::ApplyToGroupResponse>(get_class());
        }
    } // namespace ApplyToGroupResponse
} // namespace app::classes::types
