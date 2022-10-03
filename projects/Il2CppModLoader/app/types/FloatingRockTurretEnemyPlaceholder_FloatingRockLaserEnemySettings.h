#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings {
        namespace {
            app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class* type_info_ref = nullptr;
        }
        app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class** type_info = &type_info_ref;
        inline app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class>(type_info, "", "FloatingRockTurretEnemyPlaceholder", "FloatingRockLaserEnemySettings");
        }
        inline app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings>(get_class());
        }
    } // namespace FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings
} // namespace app::classes::types
