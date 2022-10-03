#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetPlayerSecretResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetPlayerSecretResult__Class** type_info;
        inline app::SetPlayerSecretResult__Class* get_class() {
            return il2cpp::get_class<app::SetPlayerSecretResult__Class>(type_info, "PlayFab.ClientModels", "SetPlayerSecretResult");
        }
        inline app::SetPlayerSecretResult* create() {
            return il2cpp::create_object<app::SetPlayerSecretResult>(get_class());
        }
    } // namespace SetPlayerSecretResult
} // namespace app::classes::types
