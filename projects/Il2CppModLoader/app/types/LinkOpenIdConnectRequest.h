#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkOpenIdConnectRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkOpenIdConnectRequest__Class** type_info;
        inline app::LinkOpenIdConnectRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkOpenIdConnectRequest__Class>(type_info, "PlayFab.ClientModels", "LinkOpenIdConnectRequest");
        }
        inline app::LinkOpenIdConnectRequest* create() {
            return il2cpp::create_object<app::LinkOpenIdConnectRequest>(get_class());
        }
    } // namespace LinkOpenIdConnectRequest
} // namespace app::classes::types
