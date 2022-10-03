#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidateIOSReceiptResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidateIOSReceiptResult__Class** type_info;
        inline app::ValidateIOSReceiptResult__Class* get_class() {
            return il2cpp::get_class<app::ValidateIOSReceiptResult__Class>(type_info, "PlayFab.ClientModels", "ValidateIOSReceiptResult");
        }
        inline app::ValidateIOSReceiptResult* create() {
            return il2cpp::create_object<app::ValidateIOSReceiptResult>(get_class());
        }
    } // namespace ValidateIOSReceiptResult
} // namespace app::classes::types
