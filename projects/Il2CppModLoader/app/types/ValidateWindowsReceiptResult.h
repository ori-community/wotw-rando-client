#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValidateWindowsReceiptResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValidateWindowsReceiptResult__Class** type_info;
        inline app::ValidateWindowsReceiptResult__Class* get_class() {
            return il2cpp::get_class<app::ValidateWindowsReceiptResult__Class>(type_info, "PlayFab.ClientModels", "ValidateWindowsReceiptResult");
        }
        inline app::ValidateWindowsReceiptResult* create() {
            return il2cpp::create_object<app::ValidateWindowsReceiptResult>(get_class());
        }
    } // namespace ValidateWindowsReceiptResult
} // namespace app::classes::types
