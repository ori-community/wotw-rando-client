#pragma once
#include <Modloader/app/structs/PayForPurchaseRequest.h>
#include <Modloader/app/structs/PayForPurchaseRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PayForPurchaseRequest {
        inline app::PayForPurchaseRequest__Class** type_info() {
            static app::PayForPurchaseRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PayForPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x0477B0E8));
            }
            return cache;
        }
        inline app::PayForPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::PayForPurchaseRequest__Class>(type_info(), "PlayFab.ClientModels", "PayForPurchaseRequest");
        }
        inline app::PayForPurchaseRequest* create() {
            return il2cpp::create_object<app::PayForPurchaseRequest>(get_class());
        }
    } // namespace PayForPurchaseRequest
} // namespace app::classes::types
