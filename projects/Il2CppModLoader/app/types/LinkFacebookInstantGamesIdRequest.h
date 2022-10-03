#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkFacebookInstantGamesIdRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkFacebookInstantGamesIdRequest__Class** type_info;
        inline app::LinkFacebookInstantGamesIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookInstantGamesIdRequest__Class>(type_info, "PlayFab.ClientModels", "LinkFacebookInstantGamesIdRequest");
        }
        inline app::LinkFacebookInstantGamesIdRequest* create() {
            return il2cpp::create_object<app::LinkFacebookInstantGamesIdRequest>(get_class());
        }
    } // namespace LinkFacebookInstantGamesIdRequest
} // namespace app::classes::types
