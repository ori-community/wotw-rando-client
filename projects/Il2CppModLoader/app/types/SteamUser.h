#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamUser {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamUser__Class** type_info;
        inline app::SteamUser__Class* get_class() {
            return il2cpp::get_class<app::SteamUser__Class>(type_info, "SystemIntegration", "SteamUser");
        }
        inline app::SteamUser* create() {
            return il2cpp::create_object<app::SteamUser>(get_class());
        }
    } // namespace SteamUser
} // namespace app::classes::types
