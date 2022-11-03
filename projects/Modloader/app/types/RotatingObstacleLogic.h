#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotatingObstacleLogic {
        namespace {
            inline app::RotatingObstacleLogic__Class* type_info_ref = nullptr;
        }
        inline app::RotatingObstacleLogic__Class** type_info = &type_info_ref;
        inline app::RotatingObstacleLogic__Class* get_class() {
            return il2cpp::get_class<app::RotatingObstacleLogic__Class>(type_info, "", "RotatingObstacleLogic");
        }
        inline app::RotatingObstacleLogic* create() {
            return il2cpp::create_object<app::RotatingObstacleLogic>(get_class());
        }
    } // namespace RotatingObstacleLogic
} // namespace app::classes::types
