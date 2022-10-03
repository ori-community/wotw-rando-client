#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RevokeInventoryItemsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RevokeInventoryItemsResult__Class** type_info;
        inline app::RevokeInventoryItemsResult__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryItemsResult__Class>(type_info, "PlayFab.ServerModels", "RevokeInventoryItemsResult");
        }
        inline app::RevokeInventoryItemsResult* create() {
            return il2cpp::create_object<app::RevokeInventoryItemsResult>(get_class());
        }
    } // namespace RevokeInventoryItemsResult
} // namespace app::classes::types
