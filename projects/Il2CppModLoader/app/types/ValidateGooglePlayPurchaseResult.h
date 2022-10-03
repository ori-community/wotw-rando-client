#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidateGooglePlayPurchaseResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidateGooglePlayPurchaseResult__Class** type_info;
        inline app::ValidateGooglePlayPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::ValidateGooglePlayPurchaseResult__Class>(type_info, "PlayFab.ClientModels", "ValidateGooglePlayPurchaseResult");
        }
        inline app::ValidateGooglePlayPurchaseResult* create() {
            return il2cpp::create_object<app::ValidateGooglePlayPurchaseResult>(get_class());
        }
    } // namespace ValidateGooglePlayPurchaseResult
} // namespace app::classes::types
