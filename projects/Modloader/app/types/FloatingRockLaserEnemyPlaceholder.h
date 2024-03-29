#pragma once
#include <Modloader/app/structs/FloatingRockLaserEnemyPlaceholder.h>
#include <Modloader/app/structs/FloatingRockLaserEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemyPlaceholder {
        inline app::FloatingRockLaserEnemyPlaceholder__Class** type_info() {
            static app::FloatingRockLaserEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockLaserEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockLaserEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemyPlaceholder__Class>(type_info(), "", "FloatingRockLaserEnemyPlaceholder");
        }
        inline app::FloatingRockLaserEnemyPlaceholder* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemyPlaceholder>(get_class());
        }
    } // namespace FloatingRockLaserEnemyPlaceholder
} // namespace app::classes::types
