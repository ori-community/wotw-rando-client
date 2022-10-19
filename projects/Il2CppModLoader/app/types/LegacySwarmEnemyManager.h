#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyManager {
        inline app::LegacySwarmEnemyManager__Class** type_info = (app::LegacySwarmEnemyManager__Class**)(modloader::win::memory::resolve_rva(0x04761540));
        inline app::LegacySwarmEnemyManager__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyManager__Class>(type_info, "", "LegacySwarmEnemyManager");
        }
        inline app::LegacySwarmEnemyManager* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyManager>(get_class());
        }
    } // namespace LegacySwarmEnemyManager
} // namespace app::classes::types
