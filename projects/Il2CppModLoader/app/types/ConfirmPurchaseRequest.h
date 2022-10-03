#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfirmPurchaseRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConfirmPurchaseRequest__Class** type_info;
        inline app::ConfirmPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::ConfirmPurchaseRequest__Class>(type_info, "PlayFab.ClientModels", "ConfirmPurchaseRequest");
        }
        inline app::ConfirmPurchaseRequest* create() {
            return il2cpp::create_object<app::ConfirmPurchaseRequest>(get_class());
        }
    } // namespace ConfirmPurchaseRequest
} // namespace app::classes::types
