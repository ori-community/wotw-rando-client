#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPhotonAuthenticationTokenResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPhotonAuthenticationTokenResult__Class** type_info;
        inline app::GetPhotonAuthenticationTokenResult__Class* get_class() {
            return il2cpp::get_class<app::GetPhotonAuthenticationTokenResult__Class>(type_info, "PlayFab.ClientModels", "GetPhotonAuthenticationTokenResult");
        }
        inline app::GetPhotonAuthenticationTokenResult* create() {
            return il2cpp::create_object<app::GetPhotonAuthenticationTokenResult>(get_class());
        }
    } // namespace GetPhotonAuthenticationTokenResult
} // namespace app::classes::types
