#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamManager__Class** type_info;
        inline app::SteamManager__Class* get_class() {
            return il2cpp::get_class<app::SteamManager__Class>(type_info, "", "SteamManager");
        }
        inline app::SteamManager* create() {
            return il2cpp::create_object<app::SteamManager>(get_class());
        }
    } // namespace SteamManager
} // namespace app::classes::types
