#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValidateIOSReceiptRequest {
        inline app::ValidateIOSReceiptRequest__Class** type_info = (app::ValidateIOSReceiptRequest__Class**)(modloader::win::memory::resolve_rva(0x04742418));
        inline app::ValidateIOSReceiptRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateIOSReceiptRequest__Class>(type_info, "PlayFab.ClientModels", "ValidateIOSReceiptRequest");
        }
        inline app::ValidateIOSReceiptRequest* create() {
            return il2cpp::create_object<app::ValidateIOSReceiptRequest>(get_class());
        }
    } // namespace ValidateIOSReceiptRequest
} // namespace app::classes::types
