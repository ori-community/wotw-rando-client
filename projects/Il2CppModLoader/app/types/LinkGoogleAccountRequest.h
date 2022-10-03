#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkGoogleAccountRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkGoogleAccountRequest__Class** type_info;
        inline app::LinkGoogleAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkGoogleAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkGoogleAccountRequest");
        }
        inline app::LinkGoogleAccountRequest* create() {
            return il2cpp::create_object<app::LinkGoogleAccountRequest>(get_class());
        }
    } // namespace LinkGoogleAccountRequest
} // namespace app::classes::types
