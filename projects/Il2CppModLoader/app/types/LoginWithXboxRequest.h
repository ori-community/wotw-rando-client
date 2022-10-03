#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithXboxRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithXboxRequest__Class** type_info;
        inline app::LoginWithXboxRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithXboxRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithXboxRequest");
        }
        inline app::LoginWithXboxRequest* create() {
            return il2cpp::create_object<app::LoginWithXboxRequest>(get_class());
        }
    } // namespace LoginWithXboxRequest
} // namespace app::classes::types
