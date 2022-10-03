#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithPSNRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithPSNRequest__Class** type_info;
        inline app::LoginWithPSNRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithPSNRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithPSNRequest");
        }
        inline app::LoginWithPSNRequest* create() {
            return il2cpp::create_object<app::LoginWithPSNRequest>(get_class());
        }
    } // namespace LoginWithPSNRequest
} // namespace app::classes::types
