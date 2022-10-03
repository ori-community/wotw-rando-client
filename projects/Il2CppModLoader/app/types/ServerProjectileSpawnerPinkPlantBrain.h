#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerProjectileSpawnerPinkPlantBrain {
        namespace {
            app::ServerProjectileSpawnerPinkPlantBrain__Class* type_info_ref = nullptr;
        }
        app::ServerProjectileSpawnerPinkPlantBrain__Class** type_info = &type_info_ref;
        inline app::ServerProjectileSpawnerPinkPlantBrain__Class* get_class() {
            return il2cpp::get_class<app::ServerProjectileSpawnerPinkPlantBrain__Class>(type_info, "", "ServerProjectileSpawnerPinkPlantBrain");
        }
        inline app::ServerProjectileSpawnerPinkPlantBrain* create() {
            return il2cpp::create_object<app::ServerProjectileSpawnerPinkPlantBrain>(get_class());
        }
    } // namespace ServerProjectileSpawnerPinkPlantBrain
} // namespace app::classes::types
