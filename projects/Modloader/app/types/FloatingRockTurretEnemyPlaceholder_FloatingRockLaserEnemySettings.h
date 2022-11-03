#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings {
        namespace {
            inline app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class** type_info = &type_info_ref;
        inline app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings__Class>(type_info, "", "FloatingRockTurretEnemyPlaceholder", "FloatingRockLaserEnemySettings");
        }
        inline app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings>(get_class());
        }
    } // namespace FloatingRockTurretEnemyPlaceholder_FloatingRockLaserEnemySettings
} // namespace app::classes::types
