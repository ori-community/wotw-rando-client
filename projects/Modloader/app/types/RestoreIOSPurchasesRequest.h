#pragma once
#include <Modloader/app/structs/RestoreIOSPurchasesRequest.h>
#include <Modloader/app/structs/RestoreIOSPurchasesRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestoreIOSPurchasesRequest {
        inline app::RestoreIOSPurchasesRequest__Class** type_info() {
            static app::RestoreIOSPurchasesRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RestoreIOSPurchasesRequest__Class**)(modloader::win::memory::resolve_rva(0x047494F0));
            }
            return cache;
        }
        inline app::RestoreIOSPurchasesRequest__Class* get_class() {
            return il2cpp::get_class<app::RestoreIOSPurchasesRequest__Class>(type_info(), "PlayFab.ClientModels", "RestoreIOSPurchasesRequest");
        }
        inline app::RestoreIOSPurchasesRequest* create() {
            return il2cpp::create_object<app::RestoreIOSPurchasesRequest>(get_class());
        }
    } // namespace RestoreIOSPurchasesRequest
} // namespace app::classes::types
