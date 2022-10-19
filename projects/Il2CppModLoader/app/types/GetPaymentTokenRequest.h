#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPaymentTokenRequest {
        inline app::GetPaymentTokenRequest__Class** type_info = (app::GetPaymentTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x047587B8));
        inline app::GetPaymentTokenRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPaymentTokenRequest__Class>(type_info, "PlayFab.ClientModels", "GetPaymentTokenRequest");
        }
        inline app::GetPaymentTokenRequest* create() {
            return il2cpp::create_object<app::GetPaymentTokenRequest>(get_class());
        }
    } // namespace GetPaymentTokenRequest
} // namespace app::classes::types
