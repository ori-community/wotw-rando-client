#pragma once
#include <Modloader/app/structs/LaserObstacle.h>
#include <Modloader/app/structs/LaserObstacle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserObstacle {
        inline app::LaserObstacle__Class** type_info() {
            static app::LaserObstacle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserObstacle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserObstacle__Class* get_class() {
            return il2cpp::get_class<app::LaserObstacle__Class>(type_info(), "", "LaserObstacle");
        }
        inline app::LaserObstacle* create() {
            return il2cpp::create_object<app::LaserObstacle>(get_class());
        }
    } // namespace LaserObstacle
} // namespace app::classes::types
