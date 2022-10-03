#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPhotonAuthenticationTokenRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPhotonAuthenticationTokenRequest__Class** type_info;
        inline app::GetPhotonAuthenticationTokenRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPhotonAuthenticationTokenRequest__Class>(type_info, "PlayFab.ClientModels", "GetPhotonAuthenticationTokenRequest");
        }
        inline app::GetPhotonAuthenticationTokenRequest* create() {
            return il2cpp::create_object<app::GetPhotonAuthenticationTokenRequest>(get_class());
        }
    } // namespace GetPhotonAuthenticationTokenRequest
} // namespace app::classes::types
