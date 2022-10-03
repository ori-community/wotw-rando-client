#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkFacebookInstantGamesIdResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkFacebookInstantGamesIdResult__Class** type_info;
        inline app::LinkFacebookInstantGamesIdResult__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookInstantGamesIdResult__Class>(type_info, "PlayFab.ClientModels", "LinkFacebookInstantGamesIdResult");
        }
        inline app::LinkFacebookInstantGamesIdResult* create() {
            return il2cpp::create_object<app::LinkFacebookInstantGamesIdResult>(get_class());
        }
    } // namespace LinkFacebookInstantGamesIdResult
} // namespace app::classes::types
