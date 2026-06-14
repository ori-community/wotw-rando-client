#pragma once
#include <Modloader/app/structs/ValidateWindowsReceiptResult.h>
#include <Modloader/app/structs/ValidateWindowsReceiptResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidateWindowsReceiptResult {
        inline app::ValidateWindowsReceiptResult__Class** type_info() {
            static app::ValidateWindowsReceiptResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidateWindowsReceiptResult__Class**)(modloader::win::memory::resolve_rva(0x04784868));
            }
            return cache;
        }
        inline app::ValidateWindowsReceiptResult__Class* get_class() {
            return il2cpp::get_class<app::ValidateWindowsReceiptResult__Class>(type_info(), "PlayFab.ClientModels", "ValidateWindowsReceiptResult");
        }
        inline app::ValidateWindowsReceiptResult* create() {
            return il2cpp::create_object<app::ValidateWindowsReceiptResult>(get_class());
        }
    } // namespace ValidateWindowsReceiptResult
} // namespace app::classes::types
