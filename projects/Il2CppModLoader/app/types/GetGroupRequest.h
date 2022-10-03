#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetGroupRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetGroupRequest__Class** type_info;
        inline app::GetGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::GetGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "GetGroupRequest");
        }
        inline app::GetGroupRequest* create() {
            return il2cpp::create_object<app::GetGroupRequest>(get_class());
        }
    } // namespace GetGroupRequest
} // namespace app::classes::types
