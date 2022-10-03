#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RefreshPSNAuthTokenRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RefreshPSNAuthTokenRequest__Class** type_info;
        inline app::RefreshPSNAuthTokenRequest__Class* get_class() {
            return il2cpp::get_class<app::RefreshPSNAuthTokenRequest__Class>(type_info, "PlayFab.ClientModels", "RefreshPSNAuthTokenRequest");
        }
        inline app::RefreshPSNAuthTokenRequest* create() {
            return il2cpp::create_object<app::RefreshPSNAuthTokenRequest>(get_class());
        }
    } // namespace RefreshPSNAuthTokenRequest
} // namespace app::classes::types
