#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPurchaseRequest {
        inline app::GetPurchaseRequest__Class** type_info = (app::GetPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x0477C1B8));
        inline app::GetPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPurchaseRequest__Class>(type_info, "PlayFab.ClientModels", "GetPurchaseRequest");
        }
        inline app::GetPurchaseRequest* create() {
            return il2cpp::create_object<app::GetPurchaseRequest>(get_class());
        }
    } // namespace GetPurchaseRequest
} // namespace app::classes::types
