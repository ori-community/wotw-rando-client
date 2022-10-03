#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkFacebookInstantGamesIdRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkFacebookInstantGamesIdRequest__Class** type_info;
        inline app::UnlinkFacebookInstantGamesIdRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkFacebookInstantGamesIdRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkFacebookInstantGamesIdRequest");
        }
        inline app::UnlinkFacebookInstantGamesIdRequest* create() {
            return il2cpp::create_object<app::UnlinkFacebookInstantGamesIdRequest>(get_class());
        }
    } // namespace UnlinkFacebookInstantGamesIdRequest
} // namespace app::classes::types
