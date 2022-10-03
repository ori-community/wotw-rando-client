#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShieldRotationController {
        namespace {
            app::LaserShieldRotationController__Class* type_info_ref = nullptr;
        }
        app::LaserShieldRotationController__Class** type_info = &type_info_ref;
        inline app::LaserShieldRotationController__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldRotationController__Class>(type_info, "", "LaserShieldRotationController");
        }
        inline app::LaserShieldRotationController* create() {
            return il2cpp::create_object<app::LaserShieldRotationController>(get_class());
        }
    } // namespace LaserShieldRotationController
} // namespace app::classes::types
