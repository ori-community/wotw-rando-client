#pragma once
#include <Modloader/app/structs/ServerProjectileSpawnerPinkPlantBrain.h>
#include <Modloader/app/structs/ServerProjectileSpawnerPinkPlantBrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerProjectileSpawnerPinkPlantBrain {
        inline app::ServerProjectileSpawnerPinkPlantBrain__Class** type_info() {
            static app::ServerProjectileSpawnerPinkPlantBrain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerProjectileSpawnerPinkPlantBrain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerProjectileSpawnerPinkPlantBrain__Class* get_class() {
            return il2cpp::get_class<app::ServerProjectileSpawnerPinkPlantBrain__Class>(type_info(), "", "ServerProjectileSpawnerPinkPlantBrain");
        }
        inline app::ServerProjectileSpawnerPinkPlantBrain* create() {
            return il2cpp::create_object<app::ServerProjectileSpawnerPinkPlantBrain>(get_class());
        }
    } // namespace ServerProjectileSpawnerPinkPlantBrain
} // namespace app::classes::types
