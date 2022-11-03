#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings {
        namespace {
            inline app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class** type_info = &type_info_ref;
        inline app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings__Class>(type_info, "", "FloatingRockLaserEnemyPlaceholder", "FloatingRockLaserEnemySettings");
        }
        inline app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings>(get_class());
        }
    } // namespace FloatingRockLaserEnemyPlaceholder_FloatingRockLaserEnemySettings
} // namespace app::classes::types
