#pragma once
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour.h>
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterInflateToAttackBehaviour {
        inline app::LaserShooterInflateToAttackBehaviour__Class** type_info() {
            static app::LaserShooterInflateToAttackBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterInflateToAttackBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterInflateToAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterInflateToAttackBehaviour__Class>(type_info(), "", "LaserShooterInflateToAttackBehaviour");
        }
        inline app::LaserShooterInflateToAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterInflateToAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterInflateToAttackBehaviour
} // namespace app::classes::types
