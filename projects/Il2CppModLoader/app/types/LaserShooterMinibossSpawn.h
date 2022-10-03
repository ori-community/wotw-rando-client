#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossSpawn {
        namespace {
            app::LaserShooterMinibossSpawn__Class* type_info_ref = nullptr;
        }
        app::LaserShooterMinibossSpawn__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossSpawn__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossSpawn__Class>(type_info, "", "LaserShooterMinibossSpawn");
        }
        inline app::LaserShooterMinibossSpawn* create() {
            return il2cpp::create_object<app::LaserShooterMinibossSpawn>(get_class());
        }
    } // namespace LaserShooterMinibossSpawn
} // namespace app::classes::types
