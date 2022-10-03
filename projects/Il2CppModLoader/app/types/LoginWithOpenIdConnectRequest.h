#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithOpenIdConnectRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithOpenIdConnectRequest__Class** type_info;
        inline app::LoginWithOpenIdConnectRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithOpenIdConnectRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithOpenIdConnectRequest");
        }
        inline app::LoginWithOpenIdConnectRequest* create() {
            return il2cpp::create_object<app::LoginWithOpenIdConnectRequest>(get_class());
        }
    } // namespace LoginWithOpenIdConnectRequest
} // namespace app::classes::types
