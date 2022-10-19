#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterHommingMissle {
        namespace {
            inline app::LaserShooterHommingMissle__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterHommingMissle__Class** type_info = &type_info_ref;
        inline app::LaserShooterHommingMissle__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterHommingMissle__Class>(type_info, "", "LaserShooterHommingMissle");
        }
        inline app::LaserShooterHommingMissle* create() {
            return il2cpp::create_object<app::LaserShooterHommingMissle>(get_class());
        }
    } // namespace LaserShooterHommingMissle
} // namespace app::classes::types
