#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetPlayerSecretRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetPlayerSecretRequest_1__Class** type_info;
        inline app::SetPlayerSecretRequest_1__Class* get_class() {
            return il2cpp::get_class<app::SetPlayerSecretRequest_1__Class>(type_info, "PlayFab.ServerModels", "SetPlayerSecretRequest");
        }
        inline app::SetPlayerSecretRequest_1* create() {
            return il2cpp::create_object<app::SetPlayerSecretRequest_1>(get_class());
        }
    } // namespace SetPlayerSecretRequest_1
} // namespace app::classes::types
