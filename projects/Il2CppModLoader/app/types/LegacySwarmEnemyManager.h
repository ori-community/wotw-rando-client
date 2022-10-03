#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacySwarmEnemyManager__Class** type_info;
        inline app::LegacySwarmEnemyManager__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyManager__Class>(type_info, "", "LegacySwarmEnemyManager");
        }
        inline app::LegacySwarmEnemyManager* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyManager>(get_class());
        }
    } // namespace LegacySwarmEnemyManager
} // namespace app::classes::types
