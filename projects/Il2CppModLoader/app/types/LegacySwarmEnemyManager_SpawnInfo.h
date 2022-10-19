#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyManager_SpawnInfo {
        namespace {
            inline app::LegacySwarmEnemyManager_SpawnInfo__Class* type_info_ref = nullptr;
        }
        inline app::LegacySwarmEnemyManager_SpawnInfo__Class** type_info = &type_info_ref;
        inline app::LegacySwarmEnemyManager_SpawnInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacySwarmEnemyManager_SpawnInfo__Class>(type_info, "", "LegacySwarmEnemyManager", "SpawnInfo");
        }
        inline app::LegacySwarmEnemyManager_SpawnInfo* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyManager_SpawnInfo>(get_class());
        }
        inline app::LegacySwarmEnemyManager_SpawnInfo__Boxed* box(app::LegacySwarmEnemyManager_SpawnInfo value) {
            return il2cpp::box_value<app::LegacySwarmEnemyManager_SpawnInfo__Boxed>(get_class(), value);
        }
        inline app::LegacySwarmEnemyManager_SpawnInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacySwarmEnemyManager_SpawnInfo__Array>(get_class(), size);
        }
        inline app::LegacySwarmEnemyManager_SpawnInfo__Array* create_array(const std::vector<app::LegacySwarmEnemyManager_SpawnInfo>& items) {
            return il2cpp::array_new<app::LegacySwarmEnemyManager_SpawnInfo__Array>(get_class(), items);
        }
    } // namespace LegacySwarmEnemyManager_SpawnInfo
} // namespace app::classes::types
