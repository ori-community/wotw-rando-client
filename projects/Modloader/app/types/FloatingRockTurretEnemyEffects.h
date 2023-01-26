#pragma once
#include <Modloader/app/structs/FloatingRockTurretEnemyEffects.h>
#include <Modloader/app/structs/FloatingRockTurretEnemyEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemyEffects {
        inline app::FloatingRockTurretEnemyEffects__Class** type_info() {
            static app::FloatingRockTurretEnemyEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockTurretEnemyEffects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockTurretEnemyEffects__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurretEnemyEffects__Class>(type_info(), "", "FloatingRockTurretEnemyEffects");
        }
        inline app::FloatingRockTurretEnemyEffects* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemyEffects>(get_class());
        }
    } // namespace FloatingRockTurretEnemyEffects
} // namespace app::classes::types
