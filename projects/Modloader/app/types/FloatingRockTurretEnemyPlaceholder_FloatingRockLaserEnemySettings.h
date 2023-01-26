#pragma once
#include <Modloader/app/structs/FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings.h>
#include <Modloader/app/structs/FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings {
        inline app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class** type_info() {
            static app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class>(type_info(), "", "FloatingRockTurretEnemyPlaceholder", "FloatingRockLaserEnemySettings");
        }
        inline app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings>(get_class());
        }
    } // namespace FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings
} // namespace app::classes::types
