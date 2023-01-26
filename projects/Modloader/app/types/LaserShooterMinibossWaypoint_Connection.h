#pragma once
#include <Modloader/app/structs/LaserShooterMinibossWaypoint_Connection.h>
#include <Modloader/app/structs/LaserShooterMinibossWaypoint_Connection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossWaypoint_Connection {
        inline app::LaserShooterMinibossWaypoint_Connection__Class** type_info() {
            static app::LaserShooterMinibossWaypoint_Connection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossWaypoint_Connection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossWaypoint_Connection__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShooterMinibossWaypoint_Connection__Class>(type_info(), "", "LaserShooterMinibossWaypoint", "Connection");
        }
        inline app::LaserShooterMinibossWaypoint_Connection* create() {
            return il2cpp::create_object<app::LaserShooterMinibossWaypoint_Connection>(get_class());
        }
    } // namespace LaserShooterMinibossWaypoint_Connection
} // namespace app::classes::types
