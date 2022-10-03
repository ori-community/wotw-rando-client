#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithWindowsHelloRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithWindowsHelloRequest__Class** type_info;
        inline app::LoginWithWindowsHelloRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithWindowsHelloRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithWindowsHelloRequest");
        }
        inline app::LoginWithWindowsHelloRequest* create() {
            return il2cpp::create_object<app::LoginWithWindowsHelloRequest>(get_class());
        }
    } // namespace LoginWithWindowsHelloRequest
} // namespace app::classes::types
