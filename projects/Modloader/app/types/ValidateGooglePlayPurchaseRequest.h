#pragma once
#include <Modloader/app/structs/ValidateGooglePlayPurchaseRequest.h>
#include <Modloader/app/structs/ValidateGooglePlayPurchaseRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidateGooglePlayPurchaseRequest {
        inline app::ValidateGooglePlayPurchaseRequest__Class** type_info() {
            static app::ValidateGooglePlayPurchaseRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidateGooglePlayPurchaseRequest__Class**)(modloader::win::memory::resolve_rva(0x047801B8));
            }
            return cache;
        }
        inline app::ValidateGooglePlayPurchaseRequest__Class* get_class() {
            return il2cpp::get_class<app::ValidateGooglePlayPurchaseRequest__Class>(type_info(), "PlayFab.ClientModels", "ValidateGooglePlayPurchaseRequest");
        }
        inline app::ValidateGooglePlayPurchaseRequest* create() {
            return il2cpp::create_object<app::ValidateGooglePlayPurchaseRequest>(get_class());
        }
    } // namespace ValidateGooglePlayPurchaseRequest
} // namespace app::classes::types
