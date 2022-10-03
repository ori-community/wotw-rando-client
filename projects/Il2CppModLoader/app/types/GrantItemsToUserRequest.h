#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToUserRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrantItemsToUserRequest__Class** type_info;
        inline app::GrantItemsToUserRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToUserRequest__Class>(type_info, "PlayFab.ServerModels", "GrantItemsToUserRequest");
        }
        inline app::GrantItemsToUserRequest* create() {
            return il2cpp::create_object<app::GrantItemsToUserRequest>(get_class());
        }
    } // namespace GrantItemsToUserRequest
} // namespace app::classes::types
