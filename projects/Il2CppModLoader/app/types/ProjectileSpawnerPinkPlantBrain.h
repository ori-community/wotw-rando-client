#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProjectileSpawnerPinkPlantBrain {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProjectileSpawnerPinkPlantBrain__Class** type_info;
        inline app::ProjectileSpawnerPinkPlantBrain__Class* get_class() {
            return il2cpp::get_class<app::ProjectileSpawnerPinkPlantBrain__Class>(type_info, "", "ProjectileSpawnerPinkPlantBrain");
        }
        inline app::ProjectileSpawnerPinkPlantBrain* create() {
            return il2cpp::create_object<app::ProjectileSpawnerPinkPlantBrain>(get_class());
        }
    } // namespace ProjectileSpawnerPinkPlantBrain
} // namespace app::classes::types
