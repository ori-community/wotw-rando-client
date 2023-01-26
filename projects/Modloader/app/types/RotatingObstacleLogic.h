#pragma once
#include <Modloader/app/structs/RotatingObstacleLogic.h>
#include <Modloader/app/structs/RotatingObstacleLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotatingObstacleLogic {
        inline app::RotatingObstacleLogic__Class** type_info() {
            static app::RotatingObstacleLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotatingObstacleLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotatingObstacleLogic__Class* get_class() {
            return il2cpp::get_class<app::RotatingObstacleLogic__Class>(type_info(), "", "RotatingObstacleLogic");
        }
        inline app::RotatingObstacleLogic* create() {
            return il2cpp::create_object<app::RotatingObstacleLogic>(get_class());
        }
    } // namespace RotatingObstacleLogic
} // namespace app::classes::types
