#pragma once
#include <Modloader/app/structs/FloatingRockTurretEnemyAnimations.h>
#include <Modloader/app/structs/FloatingRockTurretEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemyAnimations {
        inline app::FloatingRockTurretEnemyAnimations__Class** type_info() {
            static app::FloatingRockTurretEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockTurretEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockTurretEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurretEnemyAnimations__Class>(type_info(), "", "FloatingRockTurretEnemyAnimations");
        }
        inline app::FloatingRockTurretEnemyAnimations* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemyAnimations>(get_class());
        }
    } // namespace FloatingRockTurretEnemyAnimations
} // namespace app::classes::types
