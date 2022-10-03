#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkFacebookAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkFacebookAccountRequest__Class** type_info;
        inline app::LinkFacebookAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkFacebookAccountRequest");
        }
        inline app::LinkFacebookAccountRequest* create() {
            return il2cpp::create_object<app::LinkFacebookAccountRequest>(get_class());
        }
    } // namespace LinkFacebookAccountRequest
} // namespace app::classes::types
