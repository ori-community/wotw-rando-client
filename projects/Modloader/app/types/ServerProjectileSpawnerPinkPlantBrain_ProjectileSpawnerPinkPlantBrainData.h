#pragma once
#include <Modloader/app/structs/ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData.h>
#include <Modloader/app/structs/ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Boxed.h>
#include <Modloader/app/structs/ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData {
        inline app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class** type_info() {
            static app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class**)(modloader::win::memory::resolve_rva(0x04713C90));
            }
            return cache;
        }
        inline app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Class>(type_info(), "", "ServerProjectileSpawnerPinkPlantBrain", "ProjectileSpawnerPinkPlantBrainData");
        }
        inline app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData* create() {
            return il2cpp::create_object<app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData>(get_class());
        }
        inline app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Boxed* box(app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData value) {
            return il2cpp::box_value<app::ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData__Boxed>(get_class(), value);
        }
    } // namespace ServerProjectileSpawnerPinkPlantBrain_ProjectileSpawnerPinkPlantBrainData
} // namespace app::classes::types
