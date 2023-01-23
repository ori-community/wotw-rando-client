#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PayForPurchaseResult__Class.h>
#include <Modloader/app/structs/PayForPurchaseResult.h>

namespace app::classes::types {
    namespace PayForPurchaseResult {
        inline app::PayForPurchaseResult__Class** type_info = (app::PayForPurchaseResult__Class**)(modloader::win::memory::resolve_rva(0x04785528));
        inline app::PayForPurchaseResult__Class* get_class() {
            return il2cpp::get_class<app::PayForPurchaseResult__Class>(type_info, "PlayFab.ClientModels", "PayForPurchaseResult");
        }
        inline app::PayForPurchaseResult* create() {
            return il2cpp::create_object<app::PayForPurchaseResult>(get_class());
        }
    } // namespace PayForPurchaseResult
} // namespace app::classes::types
