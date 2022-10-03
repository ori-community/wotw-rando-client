#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UninkOpenIdConnectRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UninkOpenIdConnectRequest__Class** type_info;
        inline app::UninkOpenIdConnectRequest__Class* get_class() {
            return il2cpp::get_class<app::UninkOpenIdConnectRequest__Class>(type_info, "PlayFab.ClientModels", "UninkOpenIdConnectRequest");
        }
        inline app::UninkOpenIdConnectRequest* create() {
            return il2cpp::create_object<app::UninkOpenIdConnectRequest>(get_class());
        }
    } // namespace UninkOpenIdConnectRequest
} // namespace app::classes::types
