#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterConvertRigToShield {
        namespace {
            inline app::LaserShooterConvertRigToShield__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterConvertRigToShield__Class** type_info = &type_info_ref;
        inline app::LaserShooterConvertRigToShield__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterConvertRigToShield__Class>(type_info, "", "LaserShooterConvertRigToShield");
        }
        inline app::LaserShooterConvertRigToShield* create() {
            return il2cpp::create_object<app::LaserShooterConvertRigToShield>(get_class());
        }
    } // namespace LaserShooterConvertRigToShield
} // namespace app::classes::types
