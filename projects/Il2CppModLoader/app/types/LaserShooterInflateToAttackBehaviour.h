#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterInflateToAttackBehaviour {
        namespace {
            app::LaserShooterInflateToAttackBehaviour__Class* type_info_ref = nullptr;
        }
        app::LaserShooterInflateToAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterInflateToAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterInflateToAttackBehaviour__Class>(type_info, "", "LaserShooterInflateToAttackBehaviour");
        }
        inline app::LaserShooterInflateToAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterInflateToAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterInflateToAttackBehaviour
} // namespace app::classes::types
