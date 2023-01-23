#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterMinibossWaypoint__Array__Class.h>
#include <Modloader/app/structs/LaserShooterMinibossWaypoint__Array.h>

namespace app::classes::types {
    namespace LaserShooterMinibossWaypoint__Array {
        namespace {
            inline app::LaserShooterMinibossWaypoint__Array__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossWaypoint__Array__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossWaypoint__Array__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossWaypoint__Array__Class>(type_info, "", "LaserShooterMinibossWaypoint[]");
        }
        inline app::LaserShooterMinibossWaypoint__Array* create() {
            return il2cpp::create_object<app::LaserShooterMinibossWaypoint__Array>(get_class());
        }
    } // namespace LaserShooterMinibossWaypoint__Array
} // namespace app::classes::types
