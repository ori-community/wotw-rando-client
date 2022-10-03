#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithFacebookInstantGamesIdRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithFacebookInstantGamesIdRequest__Class** type_info;
        inline app::LoginWithFacebookInstantGamesIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithFacebookInstantGamesIdRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithFacebookInstantGamesIdRequest");
        }
        inline app::LoginWithFacebookInstantGamesIdRequest* create() {
            return il2cpp::create_object<app::LoginWithFacebookInstantGamesIdRequest>(get_class());
        }
    } // namespace LoginWithFacebookInstantGamesIdRequest
} // namespace app::classes::types
