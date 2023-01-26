#pragma once
#include <Modloader/app/structs/GetPurchaseRequest.h>
#include <Modloader/app/structs/GetPurchaseRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPurchaseRequest {
        inline app::GetPurchaseRequest__Class** type_info() {
            static app::GetPurchaseRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x0477C1B8));
            }
            return cache;
        }
        inline app::GetPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPurchaseRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPurchaseRequest");
        }
        inline app::GetPurchaseRequest* create() {
            return il2cpp::create_object<app::GetPurchaseRequest>(get_class());
        }
    } // namespace GetPurchaseRequest
} // namespace app::classes::types
