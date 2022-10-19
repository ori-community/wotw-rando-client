#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValidateWindowsReceiptRequest {
        inline app::ValidateWindowsReceiptRequest__Class** type_info = (app::ValidateWindowsReceiptRequest__Class**)(modloader::win::memory::resolve_rva(0x0470D0C8));
        inline app::ValidateWindowsReceiptRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateWindowsReceiptRequest__Class>(type_info, "PlayFab.ClientModels", "ValidateWindowsReceiptRequest");
        }
        inline app::ValidateWindowsReceiptRequest* create() {
            return il2cpp::create_object<app::ValidateWindowsReceiptRequest>(get_class());
        }
    } // namespace ValidateWindowsReceiptRequest
} // namespace app::classes::types
