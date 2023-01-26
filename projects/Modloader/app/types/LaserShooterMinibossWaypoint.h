#pragma once
#include <Modloader/app/structs/LaserShooterMinibossWaypoint.h>
#include <Modloader/app/structs/LaserShooterMinibossWaypoint__Array.h>
#include <Modloader/app/structs/LaserShooterMinibossWaypoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossWaypoint {
        inline app::LaserShooterMinibossWaypoint__Class** type_info() {
            static app::LaserShooterMinibossWaypoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossWaypoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossWaypoint__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossWaypoint__Class>(type_info(), "", "LaserShooterMinibossWaypoint");
        }
        inline app::LaserShooterMinibossWaypoint* create() {
            return il2cpp::create_object<app::LaserShooterMinibossWaypoint>(get_class());
        }
        inline app::LaserShooterMinibossWaypoint__Array* create_array(int size) {
            return il2cpp::array_new<app::LaserShooterMinibossWaypoint__Array>(get_class(), size);
        }
        inline app::LaserShooterMinibossWaypoint__Array* create_array(const std::vector<app::LaserShooterMinibossWaypoint*>& items) {
            return il2cpp::array_new<app::LaserShooterMinibossWaypoint__Array>(get_class(), items);
        }
    } // namespace LaserShooterMinibossWaypoint
} // namespace app::classes::types
