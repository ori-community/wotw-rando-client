#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithGoogleAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithGoogleAccountRequest__Class** type_info;
        inline app::LoginWithGoogleAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithGoogleAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithGoogleAccountRequest");
        }
        inline app::LoginWithGoogleAccountRequest* create() {
            return il2cpp::create_object<app::LoginWithGoogleAccountRequest>(get_class());
        }
    } // namespace LoginWithGoogleAccountRequest
} // namespace app::classes::types
