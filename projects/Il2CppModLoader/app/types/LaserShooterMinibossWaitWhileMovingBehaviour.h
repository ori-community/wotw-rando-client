#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossWaitWhileMovingBehaviour {
        namespace {
            app::LaserShooterMinibossWaitWhileMovingBehaviour__Class* type_info_ref = nullptr;
        }
        app::LaserShooterMinibossWaitWhileMovingBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossWaitWhileMovingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossWaitWhileMovingBehaviour__Class>(type_info, "", "LaserShooterMinibossWaitWhileMovingBehaviour");
        }
        inline app::LaserShooterMinibossWaitWhileMovingBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterMinibossWaitWhileMovingBehaviour>(get_class());
        }
    } // namespace LaserShooterMinibossWaitWhileMovingBehaviour
} // namespace app::classes::types
