#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidateAmazonReceiptResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidateAmazonReceiptResult__Class** type_info;
        inline app::ValidateAmazonReceiptResult__Class* get_class() {
            return il2cpp::get_class<app::ValidateAmazonReceiptResult__Class>(type_info, "PlayFab.ClientModels", "ValidateAmazonReceiptResult");
        }
        inline app::ValidateAmazonReceiptResult* create() {
            return il2cpp::create_object<app::ValidateAmazonReceiptResult>(get_class());
        }
    } // namespace ValidateAmazonReceiptResult
} // namespace app::classes::types
