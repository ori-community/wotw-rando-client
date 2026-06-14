#pragma once
#include <Modloader/app/structs/FloatingRockTurretEnemyPlaceholder.h>
#include <Modloader/app/structs/FloatingRockTurretEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemyPlaceholder {
        inline app::FloatingRockTurretEnemyPlaceholder__Class** type_info() {
            static app::FloatingRockTurretEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockTurretEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockTurretEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurretEnemyPlaceholder__Class>(type_info(), "", "FloatingRockTurretEnemyPlaceholder");
        }
        inline app::FloatingRockTurretEnemyPlaceholder* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemyPlaceholder>(get_class());
        }
    } // namespace FloatingRockTurretEnemyPlaceholder
} // namespace app::classes::types
