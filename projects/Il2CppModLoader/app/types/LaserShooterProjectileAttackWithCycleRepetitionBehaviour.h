#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterProjectileAttackWithCycleRepetitionBehaviour {
        namespace {
            app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class* type_info_ref = nullptr;
        }
        app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class>(type_info, "", "LaserShooterProjectileAttackWithCycleRepetitionBehaviour");
        }
        inline app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour>(get_class());
        }
    } // namespace LaserShooterProjectileAttackWithCycleRepetitionBehaviour
} // namespace app::classes::types
