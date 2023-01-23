#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserObstacle__Class.h>
#include <Modloader/app/structs/LaserObstacle.h>

namespace app::classes::types {
    namespace LaserObstacle {
        namespace {
            inline app::LaserObstacle__Class* type_info_ref = nullptr;
        }
        inline app::LaserObstacle__Class** type_info = &type_info_ref;
        inline app::LaserObstacle__Class* get_class() {
            return il2cpp::get_class<app::LaserObstacle__Class>(type_info, "", "LaserObstacle");
        }
        inline app::LaserObstacle* create() {
            return il2cpp::create_object<app::LaserObstacle>(get_class());
        }
    } // namespace LaserObstacle
} // namespace app::classes::types
