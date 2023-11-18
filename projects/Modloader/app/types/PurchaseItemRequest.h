#pragma once
#include <Modloader/app/structs/PurchaseItemRequest.h>
#include <Modloader/app/structs/PurchaseItemRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PurchaseItemRequest {
        inline app::PurchaseItemRequest__Class** type_info() {
            static app::PurchaseItemRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PurchaseItemRequest__Class**)(modloader::win::memory::resolve_rva(0x047507B0));
            }
            return cache;
        }
        inline app::PurchaseItemRequest__Class* get_class() {
            return il2cpp::get_class<app::PurchaseItemRequest__Class>(type_info(), "PlayFab.ClientModels", "PurchaseItemRequest");
        }
        inline app::PurchaseItemRequest* create() {
            return il2cpp::create_object<app::PurchaseItemRequest>(get_class());
        }
    } // namespace PurchaseItemRequest
} // namespace app::classes::types
