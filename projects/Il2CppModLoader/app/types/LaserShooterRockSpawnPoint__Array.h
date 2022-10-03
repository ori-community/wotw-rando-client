#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterRockSpawnPoint__Array {
        namespace {
            app::LaserShooterRockSpawnPoint__Array__Class* type_info_ref = nullptr;
        }
        app::LaserShooterRockSpawnPoint__Array__Class** type_info = &type_info_ref;
        inline app::LaserShooterRockSpawnPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterRockSpawnPoint__Array__Class>(type_info, "", "LaserShooterRockSpawnPoint[]");
        }
        inline app::LaserShooterRockSpawnPoint__Array* create() {
            return il2cpp::create_object<app::LaserShooterRockSpawnPoint__Array>(get_class());
        }
    } // namespace LaserShooterRockSpawnPoint__Array
} // namespace app::classes::types
