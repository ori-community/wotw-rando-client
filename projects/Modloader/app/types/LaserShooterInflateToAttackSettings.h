#pragma once
#include <Modloader/app/structs/LaserShooterInflateToAttackSettings.h>
#include <Modloader/app/structs/LaserShooterInflateToAttackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterInflateToAttackSettings {
        inline app::LaserShooterInflateToAttackSettings__Class** type_info() {
            static app::LaserShooterInflateToAttackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterInflateToAttackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterInflateToAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterInflateToAttackSettings__Class>(type_info(), "", "LaserShooterInflateToAttackSettings");
        }
        inline app::LaserShooterInflateToAttackSettings* create() {
            return il2cpp::create_object<app::LaserShooterInflateToAttackSettings>(get_class());
        }
    } // namespace LaserShooterInflateToAttackSettings
} // namespace app::classes::types
