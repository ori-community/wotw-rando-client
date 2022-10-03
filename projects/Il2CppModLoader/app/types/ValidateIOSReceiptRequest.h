#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidateIOSReceiptRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidateIOSReceiptRequest__Class** type_info;
        inline app::ValidateIOSReceiptRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateIOSReceiptRequest__Class>(type_info, "PlayFab.ClientModels", "ValidateIOSReceiptRequest");
        }
        inline app::ValidateIOSReceiptRequest* create() {
            return il2cpp::create_object<app::ValidateIOSReceiptRequest>(get_class());
        }
    } // namespace ValidateIOSReceiptRequest
} // namespace app::classes::types
