#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithServerCustomIdRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithServerCustomIdRequest__Class** type_info;
        inline app::LoginWithServerCustomIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithServerCustomIdRequest__Class>(type_info, "PlayFab.ServerModels", "LoginWithServerCustomIdRequest");
        }
        inline app::LoginWithServerCustomIdRequest* create() {
            return il2cpp::create_object<app::LoginWithServerCustomIdRequest>(get_class());
        }
    } // namespace LoginWithServerCustomIdRequest
} // namespace app::classes::types
