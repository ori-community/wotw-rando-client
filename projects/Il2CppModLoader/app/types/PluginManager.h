#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PluginManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PluginManager__Class** type_info;
        inline app::PluginManager__Class* get_class() {
            return il2cpp::get_class<app::PluginManager__Class>(type_info, "PlayFab", "PluginManager");
        }
        inline app::PluginManager* create() {
            return il2cpp::create_object<app::PluginManager>(get_class());
        }
    } // namespace PluginManager
} // namespace app::classes::types
