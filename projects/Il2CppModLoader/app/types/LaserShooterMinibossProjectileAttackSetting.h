#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossProjectileAttackSetting {
        namespace {
            app::LaserShooterMinibossProjectileAttackSetting__Class* type_info_ref = nullptr;
        }
        app::LaserShooterMinibossProjectileAttackSetting__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossProjectileAttackSetting__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossProjectileAttackSetting__Class>(type_info, "", "LaserShooterMinibossProjectileAttackSetting");
        }
        inline app::LaserShooterMinibossProjectileAttackSetting* create() {
            return il2cpp::create_object<app::LaserShooterMinibossProjectileAttackSetting>(get_class());
        }
    } // namespace LaserShooterMinibossProjectileAttackSetting
} // namespace app::classes::types
