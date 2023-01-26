#pragma once
#include <Modloader/app/structs/LaserShooterRockSpawnPoint.h>
#include <Modloader/app/structs/LaserShooterRockSpawnPoint__Array.h>
#include <Modloader/app/structs/LaserShooterRockSpawnPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterRockSpawnPoint {
        inline app::LaserShooterRockSpawnPoint__Class** type_info() {
            static app::LaserShooterRockSpawnPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterRockSpawnPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterRockSpawnPoint__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterRockSpawnPoint__Class>(type_info(), "", "LaserShooterRockSpawnPoint");
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
