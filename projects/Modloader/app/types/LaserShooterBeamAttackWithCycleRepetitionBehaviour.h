#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterBeamAttackWithCycleRepetitionBehaviour {
        namespace {
            inline app::LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterBeamAttackWithCycleRepetitionBehaviour__Class>(type_info, "", "LaserShooterBeamAttackWithCycleRepetitionBehaviour");
        }
        inline app::LaserShooterBeamAttackWithCycleRepetitionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterBeamAttackWithCycleRepetitionBehaviour>(get_class());
        }
    } // namespace LaserShooterBeamAttackWithCycleRepetitionBehaviour
} // namespace app::classes::types
