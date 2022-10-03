#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddSharedGroupMembersResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddSharedGroupMembersResult__Class** type_info;
        inline app::AddSharedGroupMembersResult__Class* get_class() {
            return il2cpp::get_class<app::AddSharedGroupMembersResult__Class>(type_info, "PlayFab.ClientModels", "AddSharedGroupMembersResult");
        }
        inline app::AddSharedGroupMembersResult* create() {
            return il2cpp::create_object<app::AddSharedGroupMembersResult>(get_class());
        }
    } // namespace AddSharedGroupMembersResult
} // namespace app::classes::types
