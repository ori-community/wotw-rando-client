#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterHommingMissle__Class.h>
#include <Modloader/app/structs/LaserShooterHommingMissle.h>

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
