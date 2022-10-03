#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToUsersRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrantItemsToUsersRequest__Class** type_info;
        inline app::GrantItemsToUsersRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToUsersRequest__Class>(type_info, "PlayFab.ServerModels", "GrantItemsToUsersRequest");
        }
        inline app::GrantItemsToUsersRequest* create() {
            return il2cpp::create_object<app::GrantItemsToUsersRequest>(get_class());
        }
    } // namespace GrantItemsToUsersRequest
} // namespace app::classes::types
