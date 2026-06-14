#pragma once
#include <Modloader/app/structs/FloatingRockLaserEnemyAnimations.h>
#include <Modloader/app/structs/FloatingRockLaserEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemyAnimations {
        inline app::FloatingRockLaserEnemyAnimations__Class** type_info() {
            static app::FloatingRockLaserEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockLaserEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockLaserEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemyAnimations__Class>(type_info(), "", "FloatingRockLaserEnemyAnimations");
        }
        inline app::FloatingRockLaserEnemyAnimations* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemyAnimations>(get_class());
        }
    } // namespace FloatingRockLaserEnemyAnimations
} // namespace app::classes::types
