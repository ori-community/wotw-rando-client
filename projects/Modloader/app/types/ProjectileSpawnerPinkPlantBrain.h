#pragma once
#include <Modloader/app/structs/ProjectileSpawnerPinkPlantBrain.h>
#include <Modloader/app/structs/ProjectileSpawnerPinkPlantBrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProjectileSpawnerPinkPlantBrain {
        inline app::ProjectileSpawnerPinkPlantBrain__Class** type_info() {
            static app::ProjectileSpawnerPinkPlantBrain__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProjectileSpawnerPinkPlantBrain__Class**)(modloader::win::memory::resolve_rva(0x0473C690));
            }
            return cache;
        }
        inline app::ProjectileSpawnerPinkPlantBrain__Class* get_class() {
            return il2cpp::get_class<app::ProjectileSpawnerPinkPlantBrain__Class>(type_info(), "", "ProjectileSpawnerPinkPlantBrain");
        }
        inline app::ProjectileSpawnerPinkPlantBrain* create() {
            return il2cpp::create_object<app::ProjectileSpawnerPinkPlantBrain>(get_class());
        }
    } // namespace ProjectileSpawnerPinkPlantBrain
} // namespace app::classes::types
