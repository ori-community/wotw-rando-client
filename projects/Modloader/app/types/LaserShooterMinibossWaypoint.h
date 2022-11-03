#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterMinibossWaypoint {
        namespace {
            inline app::LaserShooterMinibossWaypoint__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossWaypoint__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossWaypoint__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossWaypoint__Class>(type_info, "", "LaserShooterMinibossWaypoint");
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
