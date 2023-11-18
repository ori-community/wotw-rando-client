#pragma once
#include <Modloader/app/structs/LaserShooterHommingMissle.h>
#include <Modloader/app/structs/LaserShooterHommingMissle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterHommingMissle {
        inline app::LaserShooterHommingMissle__Class** type_info() {
            static app::LaserShooterHommingMissle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterHommingMissle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterHommingMissle__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterHommingMissle__Class>(type_info(), "", "LaserShooterHommingMissle");
        }
        inline app::LaserShooterHommingMissle* create() {
            return il2cpp::create_object<app::LaserShooterHommingMissle>(get_class());
        }
    } // namespace LaserShooterHommingMissle
} // namespace app::classes::types
