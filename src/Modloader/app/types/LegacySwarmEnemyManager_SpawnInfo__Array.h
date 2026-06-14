#pragma once
#include <Modloader/app/structs/LegacySwarmEnemyManager_SpawnInfo__Array.h>
#include <Modloader/app/structs/LegacySwarmEnemyManager_SpawnInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyManager_SpawnInfo__Array {
        inline app::LegacySwarmEnemyManager_SpawnInfo__Array__Class** type_info() {
            static app::LegacySwarmEnemyManager_SpawnInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySwarmEnemyManager_SpawnInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySwarmEnemyManager_SpawnInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyManager_SpawnInfo__Array__Class>(type_info(), "", "LegacySwarmEnemyManager+SpawnInfo[]");
        }
        inline app::LegacySwarmEnemyManager_SpawnInfo__Array* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyManager_SpawnInfo__Array>(get_class());
        }
    } // namespace LegacySwarmEnemyManager_SpawnInfo__Array
} // namespace app::classes::types
