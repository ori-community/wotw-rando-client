#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidateAmazonReceiptRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidateAmazonReceiptRequest__Class** type_info;
        inline app::ValidateAmazonReceiptRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateAmazonReceiptRequest__Class>(type_info, "PlayFab.ClientModels", "ValidateAmazonReceiptRequest");
        }
        inline app::ValidateAmazonReceiptRequest* create() {
            return il2cpp::create_object<app::ValidateAmazonReceiptRequest>(get_class());
        }
    } // namespace ValidateAmazonReceiptRequest
} // namespace app::classes::types
