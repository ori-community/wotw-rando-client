#pragma once
#include <Modloader/app/structs/LaserShooterProjectileAttackWithCycleRepetitionBehaviour.h>
#include <Modloader/app/structs/LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterProjectileAttackWithCycleRepetitionBehaviour {
        inline app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class** type_info() {
            static app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class>(type_info(), "", "LaserShooterProjectileAttackWithCycleRepetitionBehaviour");
        }
        inline app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour>(get_class());
        }
    } // namespace LaserShooterProjectileAttackWithCycleRepetitionBehaviour
} // namespace app::classes::types
