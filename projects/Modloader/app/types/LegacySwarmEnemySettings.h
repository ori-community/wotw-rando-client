#pragma once
#include <Modloader/app/structs/LegacySwarmEnemySettings.h>
#include <Modloader/app/structs/LegacySwarmEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemySettings {
        inline app::LegacySwarmEnemySettings__Class** type_info() {
            static app::LegacySwarmEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySwarmEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySwarmEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemySettings__Class>(type_info(), "", "LegacySwarmEnemySettings");
        }
        inline app::LegacySwarmEnemySettings* create() {
            return il2cpp::create_object<app::LegacySwarmEnemySettings>(get_class());
        }
    } // namespace LegacySwarmEnemySettings
} // namespace app::classes::types
