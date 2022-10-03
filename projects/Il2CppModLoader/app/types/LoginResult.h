#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginResult__Class** type_info;
        inline app::LoginResult__Class* get_class() {
            return il2cpp::get_class<app::LoginResult__Class>(type_info, "PlayFab.ClientModels", "LoginResult");
        }
        inline app::LoginResult* create() {
            return il2cpp::create_object<app::LoginResult>(get_class());
        }
    } // namespace LoginResult
} // namespace app::classes::types
