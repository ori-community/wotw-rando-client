#pragma once
#include <Modloader/app/structs/LaserShooterBeamAttackWithCycleRepetitionBehaviour.h>
#include <Modloader/app/structs/LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterBeamAttackWithCycleRepetitionBehaviour {
        inline app::LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class** type_info() {
            static app::LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class>(type_info(), "", "LaserShooterBeamAttackWithCycleRepetitionBehaviour");
        }
        inline app::LaserShooterBeamAttackWithCycleRepetitionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterBeamAttackWithCycleRepetitionBehaviour>(get_class());
        }
    } // namespace LaserShooterBeamAttackWithCycleRepetitionBehaviour
} // namespace app::classes::types
