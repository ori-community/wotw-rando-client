#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthUserRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AuthUserRequest__Class** type_info;
        inline app::AuthUserRequest__Class* get_class() {
            return il2cpp::get_class<app::AuthUserRequest__Class>(type_info, "PlayFab.MatchmakerModels", "AuthUserRequest");
        }
        inline app::AuthUserRequest* create() {
            return il2cpp::create_object<app::AuthUserRequest>(get_class());
        }
    } // namespace AuthUserRequest
} // namespace app::classes::types
