#pragma once
#include <Modloader/app/structs/ConfirmPurchaseRequest.h>
#include <Modloader/app/structs/ConfirmPurchaseRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfirmPurchaseRequest {
        inline app::ConfirmPurchaseRequest__Class** type_info() {
            static app::ConfirmPurchaseRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConfirmPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x04743EB8));
            }
            return cache;
        }
        inline app::ConfirmPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::ConfirmPurchaseRequest__Class>(type_info(), "PlayFab.ClientModels", "ConfirmPurchaseRequest");
        }
        inline app::ConfirmPurchaseRequest* create() {
            return il2cpp::create_object<app::ConfirmPurchaseRequest>(get_class());
        }
    } // namespace ConfirmPurchaseRequest
} // namespace app::classes::types
