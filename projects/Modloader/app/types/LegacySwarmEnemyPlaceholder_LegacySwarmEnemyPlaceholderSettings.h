#pragma once
#include <Modloader/app/structs/LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings {
        inline app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class** type_info() {
            static app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings__Class>(type_info(), "", "LegacySwarmEnemyPlaceholder", "LegacySwarmEnemyPlaceholderSettings");
        }
        inline app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings>(get_class());
        }
    } // namespace LegacySwarmEnemyPlaceholder_LegacySwarmEnemyPlaceholderSettings
} // namespace app::classes::types
