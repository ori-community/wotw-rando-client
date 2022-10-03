#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class** type_info;
        inline app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class>(type_info, "", "ServerProjectileSpawnerPinkPlantBrain", "ProjectileSpawnerPinkPlantBrainData");
        }
        inline app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData* create() {
            return il2cpp::create_object<app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData>(get_class());
        }
        inline app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Boxed* box(app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData value) {
            return il2cpp::box_value<app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Boxed>(get_class(), value);
        }
    } // namespace ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData
} // namespace app::classes::types
