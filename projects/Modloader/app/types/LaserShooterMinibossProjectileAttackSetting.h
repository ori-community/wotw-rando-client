#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterMinibossProjectileAttackSetting__Class.h>
#include <Modloader/app/structs/LaserShooterMinibossProjectileAttackSetting.h>

namespace app::classes::types {
    namespace LaserShooterMinibossProjectileAttackSetting {
        namespace {
            inline app::LaserShooterMinibossProjectileAttackSetting__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossProjectileAttackSetting__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossProjectileAttackSetting__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossProjectileAttackSetting__Class>(type_info, "", "LaserShooterMinibossProjectileAttackSetting");
        }
        inline app::LaserShooterMinibossProjectileAttackSetting* create() {
            return il2cpp::create_object<app::LaserShooterMinibossProjectileAttackSetting>(get_class());
        }
    } // namespace LaserShooterMinibossProjectileAttackSetting
} // namespace app::classes::types
