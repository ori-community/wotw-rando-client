#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthUserResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AuthUserResponse__Class** type_info;
        inline app::AuthUserResponse__Class* get_class() {
            return il2cpp::get_class<app::AuthUserResponse__Class>(type_info, "PlayFab.MatchmakerModels", "AuthUserResponse");
        }
        inline app::AuthUserResponse* create() {
            return il2cpp::create_object<app::AuthUserResponse>(get_class());
        }
    } // namespace AuthUserResponse
} // namespace app::classes::types
