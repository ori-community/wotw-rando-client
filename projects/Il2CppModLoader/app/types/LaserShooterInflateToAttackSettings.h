#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterInflateToAttackSettings {
        namespace {
            app::LaserShooterInflateToAttackSettings__Class* type_info_ref = nullptr;
        }
        app::LaserShooterInflateToAttackSettings__Class** type_info = &type_info_ref;
        inline app::LaserShooterInflateToAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterInflateToAttackSettings__Class>(type_info, "", "LaserShooterInflateToAttackSettings");
        }
        inline app::LaserShooterInflateToAttackSettings* create() {
            return il2cpp::create_object<app::LaserShooterInflateToAttackSettings>(get_class());
        }
    } // namespace LaserShooterInflateToAttackSettings
} // namespace app::classes::types
