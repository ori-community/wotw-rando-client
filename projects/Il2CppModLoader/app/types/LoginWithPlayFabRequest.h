#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithPlayFabRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithPlayFabRequest__Class** type_info;
        inline app::LoginWithPlayFabRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithPlayFabRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithPlayFabRequest");
        }
        inline app::LoginWithPlayFabRequest* create() {
            return il2cpp::create_object<app::LoginWithPlayFabRequest>(get_class());
        }
    } // namespace LoginWithPlayFabRequest
} // namespace app::classes::types
