#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserSteamInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UserSteamInfo__Class** type_info;
        inline app::UserSteamInfo__Class* get_class() {
            return il2cpp::get_class<app::UserSteamInfo__Class>(type_info, "PlayFab.ClientModels", "UserSteamInfo");
        }
        inline app::UserSteamInfo* create() {
            return il2cpp::create_object<app::UserSteamInfo>(get_class());
        }
    } // namespace UserSteamInfo
} // namespace app::classes::types
