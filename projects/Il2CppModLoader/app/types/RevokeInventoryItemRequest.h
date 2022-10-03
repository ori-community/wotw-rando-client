#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RevokeInventoryItemRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RevokeInventoryItemRequest__Class** type_info;
        inline app::RevokeInventoryItemRequest__Class* get_class() {
            return il2cpp::get_class<app::RevokeInventoryItemRequest__Class>(type_info, "PlayFab.ServerModels", "RevokeInventoryItemRequest");
        }
        inline app::RevokeInventoryItemRequest* create() {
            return il2cpp::create_object<app::RevokeInventoryItemRequest>(get_class());
        }
    } // namespace RevokeInventoryItemRequest
} // namespace app::classes::types
