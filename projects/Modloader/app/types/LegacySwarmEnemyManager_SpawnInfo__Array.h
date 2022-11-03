#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyManager_SpawnInfo__Array {
        namespace {
            inline app::LegacySwarmEnemyManager_SpawnInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacySwarmEnemyManager_SpawnInfo__Array__Class** type_info = &type_info_ref;
        inline app::LegacySwarmEnemyManager_SpawnInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyManager_SpawnInfo__Array__Class>(type_info, "", "LegacySwarmEnemyManager+SpawnInfo[]");
        }
        inline app::LegacySwarmEnemyManager_SpawnInfo__Array* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyManager_SpawnInfo__Array>(get_class());
        }
    } // namespace LegacySwarmEnemyManager_SpawnInfo__Array
} // namespace app::classes::types
