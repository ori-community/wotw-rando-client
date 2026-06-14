#pragma once
#include <Modloader/app/structs/LegacySwarmEnemyLootSettings.h>
#include <Modloader/app/structs/LegacySwarmEnemyLootSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyLootSettings {
        inline app::LegacySwarmEnemyLootSettings__Class** type_info() {
            static app::LegacySwarmEnemyLootSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySwarmEnemyLootSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySwarmEnemyLootSettings__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyLootSettings__Class>(type_info(), "", "LegacySwarmEnemyLootSettings");
        }
        inline app::LegacySwarmEnemyLootSettings* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyLootSettings>(get_class());
        }
    } // namespace LegacySwarmEnemyLootSettings
} // namespace app::classes::types
