#pragma once
#include <Modloader/app/structs/FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings.h>
#include <Modloader/app/structs/FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings {
        inline app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class** type_info() {
            static app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class>(type_info(), "", "FloatingRockLaserEnemyPlaceholder", "FloatingRockLaserEnemySettings");
        }
        inline app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings>(get_class());
        }
    } // namespace FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings
} // namespace app::classes::types
