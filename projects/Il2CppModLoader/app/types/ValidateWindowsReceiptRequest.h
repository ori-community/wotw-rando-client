#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidateWindowsReceiptRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidateWindowsReceiptRequest__Class** type_info;
        inline app::ValidateWindowsReceiptRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateWindowsReceiptRequest__Class>(type_info, "PlayFab.ClientModels", "ValidateWindowsReceiptRequest");
        }
        inline app::ValidateWindowsReceiptRequest* create() {
            return il2cpp::create_object<app::ValidateWindowsReceiptRequest>(get_class());
        }
    } // namespace ValidateWindowsReceiptRequest
} // namespace app::classes::types
