#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossProjectileAttackBehaviour {
        namespace {
            app::LaserShooterMinibossProjectileAttackBehaviour__Class* type_info_ref = nullptr;
        }
        app::LaserShooterMinibossProjectileAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossProjectileAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossProjectileAttackBehaviour__Class>(type_info, "", "LaserShooterMinibossProjectileAttackBehaviour");
        }
        inline app::LaserShooterMinibossProjectileAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterMinibossProjectileAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterMinibossProjectileAttackBehaviour
} // namespace app::classes::types
