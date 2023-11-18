#pragma once
#include <Modloader/app/structs/FloatingRockLaserEnemySettings.h>
#include <Modloader/app/structs/FloatingRockLaserEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemySettings {
        inline app::FloatingRockLaserEnemySettings__Class** type_info() {
            static app::FloatingRockLaserEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockLaserEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockLaserEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemySettings__Class>(type_info(), "", "FloatingRockLaserEnemySettings");
        }
        inline app::FloatingRockLaserEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemySettings>(get_class());
        }
    } // namespace FloatingRockLaserEnemySettings
} // namespace app::classes::types
