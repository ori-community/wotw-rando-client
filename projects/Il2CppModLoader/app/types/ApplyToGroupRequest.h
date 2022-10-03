#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApplyToGroupRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ApplyToGroupRequest__Class** type_info;
        inline app::ApplyToGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::ApplyToGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "ApplyToGroupRequest");
        }
        inline app::ApplyToGroupRequest* create() {
            return il2cpp::create_object<app::ApplyToGroupRequest>(get_class());
        }
    } // namespace ApplyToGroupRequest
} // namespace app::classes::types
