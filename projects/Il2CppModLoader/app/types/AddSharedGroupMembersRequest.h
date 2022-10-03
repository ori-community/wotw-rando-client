#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddSharedGroupMembersRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddSharedGroupMembersRequest__Class** type_info;
        inline app::AddSharedGroupMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::AddSharedGroupMembersRequest__Class>(type_info, "PlayFab.ClientModels", "AddSharedGroupMembersRequest");
        }
        inline app::AddSharedGroupMembersRequest* create() {
            return il2cpp::create_object<app::AddSharedGroupMembersRequest>(get_class());
        }
    } // namespace AddSharedGroupMembersRequest
} // namespace app::classes::types
