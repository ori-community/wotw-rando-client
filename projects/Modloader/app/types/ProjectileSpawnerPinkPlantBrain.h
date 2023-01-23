#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProjectileSpawnerPinkPlantBrain__Class.h>
#include <Modloader/app/structs/ProjectileSpawnerPinkPlantBrain.h>

namespace app::classes::types {
    namespace ProjectileSpawnerPinkPlantBrain {
        inline app::ProjectileSpawnerPinkPlantBrain__Class** type_info = (app::ProjectileSpawnerPinkPlantBrain__Class**)(modloader::win::memory::resolve_rva(0x0473C690));
        inline app::ProjectileSpawnerPinkPlantBrain__Class* get_class() {
            return il2cpp::get_class<app::ProjectileSpawnerPinkPlantBrain__Class>(type_info, "", "ProjectileSpawnerPinkPlantBrain");
        }
        inline app::ProjectileSpawnerPinkPlantBrain* create() {
            return il2cpp::create_object<app::ProjectileSpawnerPinkPlantBrain>(get_class());
        }
    } // namespace ProjectileSpawnerPinkPlantBrain
} // namespace app::classes::types
