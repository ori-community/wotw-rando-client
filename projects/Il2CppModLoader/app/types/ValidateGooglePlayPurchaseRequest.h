#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidateGooglePlayPurchaseRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidateGooglePlayPurchaseRequest__Class** type_info;
        inline app::ValidateGooglePlayPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateGooglePlayPurchaseRequest__Class>(type_info, "PlayFab.ClientModels", "ValidateGooglePlayPurchaseRequest");
        }
        inline app::ValidateGooglePlayPurchaseRequest* create() {
            return il2cpp::create_object<app::ValidateGooglePlayPurchaseRequest>(get_class());
        }
    } // namespace ValidateGooglePlayPurchaseRequest
} // namespace app::classes::types
