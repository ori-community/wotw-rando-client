#pragma once
#include <Modloader/app/structs/LaserShooterMinibossSpawn.h>
#include <Modloader/app/structs/LaserShooterMinibossSpawn__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossSpawn {
        inline app::LaserShooterMinibossSpawn__Class** type_info() {
            static app::LaserShooterMinibossSpawn__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossSpawn__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossSpawn__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossSpawn__Class>(type_info(), "", "LaserShooterMinibossSpawn");
        }
        inline app::LaserShooterMinibossSpawn* create() {
            return il2cpp::create_object<app::LaserShooterMinibossSpawn>(get_class());
        }
    } // namespace LaserShooterMinibossSpawn
} // namespace app::classes::types
