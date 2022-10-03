#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPurchaseRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPurchaseRequest__Class** type_info;
        inline app::GetPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPurchaseRequest__Class>(type_info, "PlayFab.ClientModels", "GetPurchaseRequest");
        }
        inline app::GetPurchaseRequest* create() {
            return il2cpp::create_object<app::GetPurchaseRequest>(get_class());
        }
    } // namespace GetPurchaseRequest
} // namespace app::classes::types
