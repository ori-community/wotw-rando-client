#pragma once
#include <Modloader/app/structs/LaserShooterRepairShieldBehaviour.h>
#include <Modloader/app/structs/LaserShooterRepairShieldBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterRepairShieldBehaviour {
        inline app::LaserShooterRepairShieldBehaviour__Class** type_info() {
            static app::LaserShooterRepairShieldBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterRepairShieldBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterRepairShieldBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterRepairShieldBehaviour__Class>(type_info(), "", "LaserShooterRepairShieldBehaviour");
        }
        inline app::LaserShooterRepairShieldBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterRepairShieldBehaviour>(get_class());
        }
    } // namespace LaserShooterRepairShieldBehaviour
} // namespace app::classes::types
