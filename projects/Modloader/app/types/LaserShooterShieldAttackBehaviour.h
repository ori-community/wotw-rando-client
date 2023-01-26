#pragma once
#include <Modloader/app/structs/LaserShooterShieldAttackBehaviour.h>
#include <Modloader/app/structs/LaserShooterShieldAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterShieldAttackBehaviour {
        inline app::LaserShooterShieldAttackBehaviour__Class** type_info() {
            static app::LaserShooterShieldAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterShieldAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterShieldAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterShieldAttackBehaviour__Class>(type_info(), "", "LaserShooterShieldAttackBehaviour");
        }
        inline app::LaserShooterShieldAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterShieldAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterShieldAttackBehaviour
} // namespace app::classes::types
