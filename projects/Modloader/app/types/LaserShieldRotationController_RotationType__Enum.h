#pragma once
#include <Modloader/app/structs/LaserShieldRotationController_RotationType__Enum.h>
#include <Modloader/app/structs/LaserShieldRotationController_RotationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShieldRotationController_RotationType__Enum {
        inline app::LaserShieldRotationController_RotationType__Enum__Class** type_info() {
            static app::LaserShieldRotationController_RotationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShieldRotationController_RotationType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShieldRotationController_RotationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShieldRotationController_RotationType__Enum__Class>(type_info(), "", "LaserShieldRotationController", "RotationType");
        }
        inline app::LaserShieldRotationController_RotationType__Enum* create() {
            return il2cpp::create_object<app::LaserShieldRotationController_RotationType__Enum>(get_class());
        }
    } // namespace LaserShieldRotationController_RotationType__Enum
} // namespace app::classes::types
