#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerProjectileSpawnerPinkPlantBrain__Class.h>
#include <Modloader/app/structs/ServerProjectileSpawnerPinkPlantBrain.h>

namespace app::classes::types {
    namespace ServerProjectileSpawnerPinkPlantBrain {
        namespace {
            inline app::ServerProjectileSpawnerPinkPlantBrain__Class* type_info_ref = nullptr;
        }
        inline app::ServerProjectileSpawnerPinkPlantBrain__Class** type_info = &type_info_ref;
        inline app::ServerProjectileSpawnerPinkPlantBrain__Class* get_class() {
            return il2cpp::get_class<app::ServerProjectileSpawnerPinkPlantBrain__Class>(type_info, "", "ServerProjectileSpawnerPinkPlantBrain");
        }
        inline app::ServerProjectileSpawnerPinkPlantBrain* create() {
            return il2cpp::create_object<app::ServerProjectileSpawnerPinkPlantBrain>(get_class());
        }
    } // namespace ServerProjectileSpawnerPinkPlantBrain
} // namespace app::classes::types
