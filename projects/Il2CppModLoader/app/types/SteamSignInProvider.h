#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamSignInProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamSignInProvider__Class** type_info;
        inline app::SteamSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::SteamSignInProvider__Class>(type_info, "SystemIntegration", "SteamSignInProvider");
        }
        inline app::SteamSignInProvider* create() {
            return il2cpp::create_object<app::SteamSignInProvider>(get_class());
        }
    } // namespace SteamSignInProvider
} // namespace app::classes::types
