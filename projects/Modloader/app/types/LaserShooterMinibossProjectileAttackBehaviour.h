#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterMinibossProjectileAttackBehaviour {
        namespace {
            inline app::LaserShooterMinibossProjectileAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossProjectileAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossProjectileAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossProjectileAttackBehaviour__Class>(type_info, "", "LaserShooterMinibossProjectileAttackBehaviour");
        }
        inline app::LaserShooterMinibossProjectileAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterMinibossProjectileAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterMinibossProjectileAttackBehaviour
} // namespace app::classes::types
