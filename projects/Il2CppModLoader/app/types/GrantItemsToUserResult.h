#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToUserResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrantItemsToUserResult__Class** type_info;
        inline app::GrantItemsToUserResult__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToUserResult__Class>(type_info, "PlayFab.ServerModels", "GrantItemsToUserResult");
        }
        inline app::GrantItemsToUserResult* create() {
            return il2cpp::create_object<app::GrantItemsToUserResult>(get_class());
        }
    } // namespace GrantItemsToUserResult
} // namespace app::classes::types
