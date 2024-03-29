#pragma once
#include <Modloader/app/structs/ValidateWindowsReceiptRequest.h>
#include <Modloader/app/structs/ValidateWindowsReceiptRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidateWindowsReceiptRequest {
        inline app::ValidateWindowsReceiptRequest__Class** type_info() {
            static app::ValidateWindowsReceiptRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidateWindowsReceiptRequest__Class**)(modloader::win::memory::resolve_rva(0x0470D0C8));
            }
            return cache;
        }
        inline app::ValidateWindowsReceiptRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateWindowsReceiptRequest__Class>(type_info(), "PlayFab.ClientModels", "ValidateWindowsReceiptRequest");
        }
        inline app::ValidateWindowsReceiptRequest* create() {
            return il2cpp::create_object<app::ValidateWindowsReceiptRequest>(get_class());
        }
    } // namespace ValidateWindowsReceiptRequest
} // namespace app::classes::types
