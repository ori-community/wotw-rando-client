#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeleteGroupRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeleteGroupRequest__Class** type_info;
        inline app::DeleteGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "DeleteGroupRequest");
        }
        inline app::DeleteGroupRequest* create() {
            return il2cpp::create_object<app::DeleteGroupRequest>(get_class());
        }
    } // namespace DeleteGroupRequest
} // namespace app::classes::types
