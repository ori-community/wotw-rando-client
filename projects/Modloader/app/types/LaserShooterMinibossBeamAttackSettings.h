#pragma once
#include <Modloader/app/structs/LaserShooterMinibossBeamAttackSettings.h>
#include <Modloader/app/structs/LaserShooterMinibossBeamAttackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossBeamAttackSettings {
        inline app::LaserShooterMinibossBeamAttackSettings__Class** type_info() {
            static app::LaserShooterMinibossBeamAttackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossBeamAttackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossBeamAttackSettings__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossBeamAttackSettings__Class>(type_info(), "", "LaserShooterMinibossBeamAttackSettings");
        }
        inline app::LaserShooterMinibossBeamAttackSettings* create() {
            return il2cpp::create_object<app::LaserShooterMinibossBeamAttackSettings>(get_class());
        }
    } // namespace LaserShooterMinibossBeamAttackSettings
} // namespace app::classes::types
