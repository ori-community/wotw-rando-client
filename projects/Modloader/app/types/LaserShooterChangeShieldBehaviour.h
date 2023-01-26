#pragma once
#include <Modloader/app/structs/LaserShooterChangeShieldBehaviour.h>
#include <Modloader/app/structs/LaserShooterChangeShieldBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterChangeShieldBehaviour {
        inline app::LaserShooterChangeShieldBehaviour__Class** type_info() {
            static app::LaserShooterChangeShieldBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterChangeShieldBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterChangeShieldBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterChangeShieldBehaviour__Class>(type_info(), "", "LaserShooterChangeShieldBehaviour");
        }
        inline app::LaserShooterChangeShieldBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterChangeShieldBehaviour>(get_class());
        }
    } // namespace LaserShooterChangeShieldBehaviour
} // namespace app::classes::types
