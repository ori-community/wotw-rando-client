#pragma once
#include <Modloader/app/structs/StartPurchaseRequest.h>
#include <Modloader/app/structs/StartPurchaseRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StartPurchaseRequest {
        inline app::StartPurchaseRequest__Class** type_info() {
            static app::StartPurchaseRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StartPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x04717928));
            }
            return cache;
        }
        inline app::StartPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::StartPurchaseRequest__Class>(type_info(), "PlayFab.ClientModels", "StartPurchaseRequest");
        }
        inline app::StartPurchaseRequest* create() {
            return il2cpp::create_object<app::StartPurchaseRequest>(get_class());
        }
    } // namespace StartPurchaseRequest
} // namespace app::classes::types
