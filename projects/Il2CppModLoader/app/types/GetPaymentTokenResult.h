#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPaymentTokenResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPaymentTokenResult__Class** type_info;
        inline app::GetPaymentTokenResult__Class* get_class() {
            return il2cpp::get_class<app::GetPaymentTokenResult__Class>(type_info, "PlayFab.ClientModels", "GetPaymentTokenResult");
        }
        inline app::GetPaymentTokenResult* create() {
            return il2cpp::create_object<app::GetPaymentTokenResult>(get_class());
        }
    } // namespace GetPaymentTokenResult
} // namespace app::classes::types
