#pragma once
#include <Modloader/app/structs/LaserShooterConvertRigToShield.h>
#include <Modloader/app/structs/LaserShooterConvertRigToShield__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterConvertRigToShield {
        inline app::LaserShooterConvertRigToShield__Class** type_info() {
            static app::LaserShooterConvertRigToShield__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterConvertRigToShield__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterConvertRigToShield__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterConvertRigToShield__Class>(type_info(), "", "LaserShooterConvertRigToShield");
        }
        inline app::LaserShooterConvertRigToShield* create() {
            return il2cpp::create_object<app::LaserShooterConvertRigToShield>(get_class());
        }
    } // namespace LaserShooterConvertRigToShield
} // namespace app::classes::types
