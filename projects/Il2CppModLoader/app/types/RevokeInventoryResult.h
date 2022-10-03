#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RevokeInventoryResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RevokeInventoryResult__Class** type_info;
        inline app::RevokeInventoryResult__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryResult__Class>(type_info, "PlayFab.ServerModels", "RevokeInventoryResult");
        }
        inline app::RevokeInventoryResult* create() {
            return il2cpp::create_object<app::RevokeInventoryResult>(get_class());
        }
    } // namespace RevokeInventoryResult
} // namespace app::classes::types
