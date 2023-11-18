#pragma once
#include <Modloader/app/structs/LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum.h>
#include <Modloader/app/structs/LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum {
        inline app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__Class** type_info() {
            static app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum__Class>(type_info(), "", "LaserShooterBeamAttackWithCycleRepetitionBehaviour", "State");
        }
        inline app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum>(get_class());
        }
    } // namespace LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum
} // namespace app::classes::types
