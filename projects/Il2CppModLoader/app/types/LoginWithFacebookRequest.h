#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithFacebookRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithFacebookRequest__Class** type_info;
        inline app::LoginWithFacebookRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithFacebookRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithFacebookRequest");
        }
        inline app::LoginWithFacebookRequest* create() {
            return il2cpp::create_object<app::LoginWithFacebookRequest>(get_class());
        }
    } // namespace LoginWithFacebookRequest
} // namespace app::classes::types
