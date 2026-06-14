#pragma once
#include <Modloader/app/structs/GetPaymentTokenRequest.h>
#include <Modloader/app/structs/GetPaymentTokenRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetPaymentTokenRequest {
        inline app::GetPaymentTokenRequest__Class** type_info() {
            static app::GetPaymentTokenRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetPaymentTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x047587B8));
            }
            return cache;
        }
        inline app::GetPaymentTokenRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPaymentTokenRequest__Class>(type_info(), "PlayFab.ClientModels", "GetPaymentTokenRequest");
        }
        inline app::GetPaymentTokenRequest* create() {
            return il2cpp::create_object<app::GetPaymentTokenRequest>(get_class());
        }
    } // namespace GetPaymentTokenRequest
} // namespace app::classes::types
