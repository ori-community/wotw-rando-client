#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithKongregateRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithKongregateRequest__Class** type_info;
        inline app::LoginWithKongregateRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithKongregateRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithKongregateRequest");
        }
        inline app::LoginWithKongregateRequest* create() {
            return il2cpp::create_object<app::LoginWithKongregateRequest>(get_class());
        }
    } // namespace LoginWithKongregateRequest
} // namespace app::classes::types
