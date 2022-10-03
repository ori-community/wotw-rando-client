#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddSharedGroupMembersResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddSharedGroupMembersResult_1__Class** type_info;
        inline app::AddSharedGroupMembersResult_1__Class* get_class() {
            return il2cpp::get_class<app::AddSharedGroupMembersResult_1__Class>(type_info, "PlayFab.ServerModels", "AddSharedGroupMembersResult");
        }
        inline app::AddSharedGroupMembersResult_1* create() {
            return il2cpp::create_object<app::AddSharedGroupMembersResult_1>(get_class());
        }
    } // namespace AddSharedGroupMembersResult_1
} // namespace app::classes::types
