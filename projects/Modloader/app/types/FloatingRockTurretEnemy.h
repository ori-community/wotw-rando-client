#pragma once
#include <Modloader/app/structs/FloatingRockTurretEnemy.h>
#include <Modloader/app/structs/FloatingRockTurretEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemy {
        inline app::FloatingRockTurretEnemy__Class** type_info() {
            static app::FloatingRockTurretEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockTurretEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockTurretEnemy__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurretEnemy__Class>(type_info(), "", "FloatingRockTurretEnemy");
        }
        inline app::FloatingRockTurretEnemy* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemy>(get_class());
        }
    } // namespace FloatingRockTurretEnemy
} // namespace app::classes::types
