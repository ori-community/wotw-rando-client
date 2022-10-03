#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateGroupRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateGroupRequest__Class** type_info;
        inline app::UpdateGroupRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateGroupRequest__Class>(type_info, "PlayFab.GroupsModels", "UpdateGroupRequest");
        }
        inline app::UpdateGroupRequest* create() {
            return il2cpp::create_object<app::UpdateGroupRequest>(get_class());
        }
    } // namespace UpdateGroupRequest
} // namespace app::classes::types
