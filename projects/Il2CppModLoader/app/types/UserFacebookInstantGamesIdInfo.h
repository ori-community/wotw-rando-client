#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserFacebookInstantGamesIdInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserFacebookInstantGamesIdInfo__Class** type_info;
        inline app::UserFacebookInstantGamesIdInfo__Class* get_class() {
            return il2cpp::get_class<app::UserFacebookInstantGamesIdInfo__Class>(type_info, "PlayFab.ClientModels", "UserFacebookInstantGamesIdInfo");
        }
        inline app::UserFacebookInstantGamesIdInfo* create() {
            return il2cpp::create_object<app::UserFacebookInstantGamesIdInfo>(get_class());
        }
    } // namespace UserFacebookInstantGamesIdInfo
} // namespace app::classes::types
