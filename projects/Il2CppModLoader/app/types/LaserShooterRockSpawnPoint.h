#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterRockSpawnPoint {
        namespace {
            app::LaserShooterRockSpawnPoint__Class* type_info_ref = nullptr;
        }
        app::LaserShooterRockSpawnPoint__Class** type_info = &type_info_ref;
        inline app::LaserShooterRockSpawnPoint__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterRockSpawnPoint__Class>(type_info, "", "LaserShooterRockSpawnPoint");
        }
        inline app::LaserShooterRockSpawnPoint* create() {
            return il2cpp::create_object<app::LaserShooterRockSpawnPoint>(get_class());
        }
        inline app::LaserShooterRockSpawnPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::LaserShooterRockSpawnPoint__Array>(get_class(), size);
        }
        inline app::LaserShooterRockSpawnPoint__Array* create_array(const std::vector<app::LaserShooterRockSpawnPoint*>& items) {
            return il2cpp::array_new<app::LaserShooterRockSpawnPoint__Array>(get_class(), items);
        }
    } // namespace LaserShooterRockSpawnPoint
} // namespace app::classes::types
