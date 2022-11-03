#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfirmPurchaseRequest {
        inline app::ConfirmPurchaseRequest__Class** type_info = (app::ConfirmPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x04743EB8));
        inline app::ConfirmPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::ConfirmPurchaseRequest__Class>(type_info, "PlayFab.ClientModels", "ConfirmPurchaseRequest");
        }
        inline app::ConfirmPurchaseRequest* create() {
            return il2cpp::create_object<app::ConfirmPurchaseRequest>(get_class());
        }
    } // namespace ConfirmPurchaseRequest
} // namespace app::classes::types
