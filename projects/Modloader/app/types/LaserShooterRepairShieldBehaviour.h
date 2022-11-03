#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterRepairShieldBehaviour {
        namespace {
            inline app::LaserShooterRepairShieldBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterRepairShieldBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterRepairShieldBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterRepairShieldBehaviour__Class>(type_info, "", "LaserShooterRepairShieldBehaviour");
        }
        inline app::LaserShooterRepairShieldBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterRepairShieldBehaviour>(get_class());
        }
    } // namespace LaserShooterRepairShieldBehaviour
} // namespace app::classes::types
