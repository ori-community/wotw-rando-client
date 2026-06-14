#pragma once
#include <Modloader/app/structs/LegacySwarmEnemyManager.h>
#include <Modloader/app/structs/LegacySwarmEnemyManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyManager {
        inline app::LegacySwarmEnemyManager__Class** type_info() {
            static app::LegacySwarmEnemyManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacySwarmEnemyManager__Class**)(modloader::win::memory::resolve_rva(0x04761540));
            }
            return cache;
        }
        inline app::LegacySwarmEnemyManager__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyManager__Class>(type_info(), "", "LegacySwarmEnemyManager");
        }
        inline app::LegacySwarmEnemyManager* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyManager>(get_class());
        }
    } // namespace LegacySwarmEnemyManager
} // namespace app::classes::types
