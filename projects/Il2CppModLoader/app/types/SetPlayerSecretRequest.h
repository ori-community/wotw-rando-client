#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetPlayerSecretRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetPlayerSecretRequest__Class** type_info;
        inline app::SetPlayerSecretRequest__Class* get_class() {
            return il2cpp::get_class<app::SetPlayerSecretRequest__Class>(type_info, "PlayFab.ClientModels", "SetPlayerSecretRequest");
        }
        inline app::SetPlayerSecretRequest* create() {
            return il2cpp::create_object<app::SetPlayerSecretRequest>(get_class());
        }
    } // namespace SetPlayerSecretRequest
} // namespace app::classes::types
