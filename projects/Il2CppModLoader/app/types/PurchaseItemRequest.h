#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PurchaseItemRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PurchaseItemRequest__Class** type_info;
        inline app::PurchaseItemRequest__Class* get_class() {
            return il2cpp::get_class<app::PurchaseItemRequest__Class>(type_info, "PlayFab.ClientModels", "PurchaseItemRequest");
        }
        inline app::PurchaseItemRequest* create() {
            return il2cpp::create_object<app::PurchaseItemRequest>(get_class());
        }
    } // namespace PurchaseItemRequest
} // namespace app::classes::types
