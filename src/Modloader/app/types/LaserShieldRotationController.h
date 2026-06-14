#pragma once
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/LaserShieldRotationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShieldRotationController {
        inline app::LaserShieldRotationController__Class** type_info() {
            static app::LaserShieldRotationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShieldRotationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShieldRotationController__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldRotationController__Class>(type_info(), "", "LaserShieldRotationController");
        }
        inline app::LaserShieldRotationController* create() {
            return il2cpp::create_object<app::LaserShieldRotationController>(get_class());
        }
    } // namespace LaserShieldRotationController
} // namespace app::classes::types
