#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateGroupRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateGroupRequest__Class** type_info;
        inline app::CreateGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "CreateGroupRequest");
        }
        inline app::CreateGroupRequest* create() {
            return il2cpp::create_object<app::CreateGroupRequest>(get_class());
        }
    } // namespace CreateGroupRequest
} // namespace app::classes::types
