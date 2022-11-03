#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData {
        inline app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class** type_info = (app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class**)(modloader::win::memory::resolve_rva(0x04713C90));
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
