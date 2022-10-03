#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveSharedGroupMembersResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveSharedGroupMembersResult__Class** type_info;
        inline app::RemoveSharedGroupMembersResult__Class* get_class() {
            return il2cpp::get_class<app::RemoveSharedGroupMembersResult__Class>(type_info, "PlayFab.ClientModels", "RemoveSharedGroupMembersResult");
        }
        inline app::RemoveSharedGroupMembersResult* create() {
            return il2cpp::create_object<app::RemoveSharedGroupMembersResult>(get_class());
        }
    } // namespace RemoveSharedGroupMembersResult
} // namespace app::classes::types
