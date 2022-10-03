#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveSharedGroupMembersRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveSharedGroupMembersRequest__Class** type_info;
        inline app::RemoveSharedGroupMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveSharedGroupMembersRequest__Class>(type_info, "PlayFab.ClientModels", "RemoveSharedGroupMembersRequest");
        }
        inline app::RemoveSharedGroupMembersRequest* create() {
            return il2cpp::create_object<app::RemoveSharedGroupMembersRequest>(get_class());
        }
    } // namespace RemoveSharedGroupMembersRequest
} // namespace app::classes::types
