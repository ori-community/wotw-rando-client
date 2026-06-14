#pragma once
#include <Modloader/app/structs/LaserShooterMinibossWaypoint__Array.h>
#include <Modloader/app/structs/LaserShooterMinibossWaypoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossWaypoint__Array {
        inline app::LaserShooterMinibossWaypoint__Array__Class** type_info() {
            static app::LaserShooterMinibossWaypoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossWaypoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossWaypoint__Array__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossWaypoint__Array__Class>(type_info(), "", "LaserShooterMinibossWaypoint[]");
        }
        inline app::LaserShooterMinibossWaypoint__Array* create() {
            return il2cpp::create_object<app::LaserShooterMinibossWaypoint__Array>(get_class());
        }
    } // namespace LaserShooterMinibossWaypoint__Array
} // namespace app::classes::types
