#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddMembersRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddMembersRequest__Class** type_info;
        inline app::AddMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::AddMembersRequest__Class>(type_info, "PlayFab.GroupsModels", "AddMembersRequest");
        }
        inline app::AddMembersRequest* create() {
            return il2cpp::create_object<app::AddMembersRequest>(get_class());
        }
    } // namespace AddMembersRequest
} // namespace app::classes::types
