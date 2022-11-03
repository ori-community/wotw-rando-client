#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PayForPurchaseRequest {
        inline app::PayForPurchaseRequest__Class** type_info = (app::PayForPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x0477B0E8));
        inline app::PayForPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::PayForPurchaseRequest__Class>(type_info, "PlayFab.ClientModels", "PayForPurchaseRequest");
        }
        inline app::PayForPurchaseRequest* create() {
            return il2cpp::create_object<app::PayForPurchaseRequest>(get_class());
        }
    } // namespace PayForPurchaseRequest
} // namespace app::classes::types
