#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddSharedGroupMembersRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddSharedGroupMembersRequest_1__Class** type_info;
        inline app::AddSharedGroupMembersRequest_1__Class* get_class() {
            return il2cpp::get_class<app::AddSharedGroupMembersRequest_1__Class>(type_info, "PlayFab.ServerModels", "AddSharedGroupMembersRequest");
        }
        inline app::AddSharedGroupMembersRequest_1* create() {
            return il2cpp::create_object<app::AddSharedGroupMembersRequest_1>(get_class());
        }
    } // namespace AddSharedGroupMembersRequest_1
} // namespace app::classes::types
