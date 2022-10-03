#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserObstacle {
        namespace {
            app::LaserObstacle__Class* type_info_ref = nullptr;
        }
        app::LaserObstacle__Class** type_info = &type_info_ref;
        inline app::LaserObstacle__Class* get_class() {
            return il2cpp::get_class<app::LaserObstacle__Class>(type_info, "", "LaserObstacle");
        }
        inline app::LaserObstacle* create() {
            return il2cpp::create_object<app::LaserObstacle>(get_class());
        }
    } // namespace LaserObstacle
} // namespace app::classes::types
