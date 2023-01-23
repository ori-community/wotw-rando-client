#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValidateIOSReceiptResult__Class.h>
#include <Modloader/app/structs/ValidateIOSReceiptResult.h>

namespace app::classes::types {
    namespace ValidateIOSReceiptResult {
        inline app::ValidateIOSReceiptResult__Class** type_info = (app::ValidateIOSReceiptResult__Class**)(modloader::win::memory::resolve_rva(0x0470C260));
        inline app::ValidateIOSReceiptResult__Class* get_class() {
            return il2cpp::get_class<app::ValidateIOSReceiptResult__Class>(type_info, "PlayFab.ClientModels", "ValidateIOSReceiptResult");
        }
        inline app::ValidateIOSReceiptResult* create() {
            return il2cpp::create_object<app::ValidateIOSReceiptResult>(get_class());
        }
    } // namespace ValidateIOSReceiptResult
} // namespace app::classes::types
