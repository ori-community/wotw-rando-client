#pragma once
#include <Modloader/app/structs/LaserShooterMinibossProjectileAttackBehaviour.h>
#include <Modloader/app/structs/LaserShooterMinibossProjectileAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossProjectileAttackBehaviour {
        inline app::LaserShooterMinibossProjectileAttackBehaviour__Class** type_info() {
            static app::LaserShooterMinibossProjectileAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossProjectileAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossProjectileAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossProjectileAttackBehaviour__Class>(type_info(), "", "LaserShooterMinibossProjectileAttackBehaviour");
        }
        inline app::LaserShooterMinibossProjectileAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterMinibossProjectileAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterMinibossProjectileAttackBehaviour
} // namespace app::classes::types
