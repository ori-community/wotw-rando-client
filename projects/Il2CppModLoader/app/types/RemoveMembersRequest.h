#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveMembersRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoveMembersRequest__Class** type_info;
        inline app::RemoveMembersRequest__Class* get_class() {
            return il2cpp::get_class<app::RemoveMembersRequest__Class>(type_info, "PlayFab.GroupsModels", "RemoveMembersRequest");
        }
        inline app::RemoveMembersRequest* create() {
            return il2cpp::create_object<app::RemoveMembersRequest>(get_class());
        }
    } // namespace RemoveMembersRequest
} // namespace app::classes::types
