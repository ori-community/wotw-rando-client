#pragma once
#include <Modloader/app/structs/ValidateIOSReceiptResult.h>
#include <Modloader/app/structs/ValidateIOSReceiptResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidateIOSReceiptResult {
        inline app::ValidateIOSReceiptResult__Class** type_info() {
            static app::ValidateIOSReceiptResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidateIOSReceiptResult__Class**)(modloader::win::memory::resolve_rva(0x0470C260));
            }
            return cache;
        }
        inline app::ValidateIOSReceiptResult__Class* get_class() {
            return il2cpp::get_class<app::ValidateIOSReceiptResult__Class>(type_info(), "PlayFab.ClientModels", "ValidateIOSReceiptResult");
        }
        inline app::ValidateIOSReceiptResult* create() {
            return il2cpp::create_object<app::ValidateIOSReceiptResult>(get_class());
        }
    } // namespace ValidateIOSReceiptResult
} // namespace app::classes::types
