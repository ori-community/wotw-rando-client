#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class.h>
#include <Modloader/app/structs/LaserShooterProjectileAttackWithCycleRepetitionBehaviour.h>

namespace app::classes::types {
    namespace LaserShooterProjectileAttackWithCycleRepetitionBehaviour {
        namespace {
            inline app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class>(type_info, "", "LaserShooterProjectileAttackWithCycleRepetitionBehaviour");
        }
        inline app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterProjectileAttackWithCycleRepetitionBehaviour>(get_class());
        }
    } // namespace LaserShooterProjectileAttackWithCycleRepetitionBehaviour
} // namespace app::classes::types
