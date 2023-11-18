#pragma once
#include <Modloader/app/structs/LaserShooterMinibossProjectileAttackSetting.h>
#include <Modloader/app/structs/LaserShooterMinibossProjectileAttackSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossProjectileAttackSetting {
        inline app::LaserShooterMinibossProjectileAttackSetting__Class** type_info() {
            static app::LaserShooterMinibossProjectileAttackSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossProjectileAttackSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossProjectileAttackSetting__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossProjectileAttackSetting__Class>(type_info(), "", "LaserShooterMinibossProjectileAttackSetting");
        }
        inline app::LaserShooterMinibossProjectileAttackSetting* create() {
            return il2cpp::create_object<app::LaserShooterMinibossProjectileAttackSetting>(get_class());
        }
    } // namespace LaserShooterMinibossProjectileAttackSetting
} // namespace app::classes::types
