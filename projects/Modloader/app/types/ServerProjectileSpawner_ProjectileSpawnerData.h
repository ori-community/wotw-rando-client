#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerProjectileSpawner_ProjectileSpawnerData__Class.h>
#include <Modloader/app/structs/ServerProjectileSpawner_ProjectileSpawnerData.h>
#include <Modloader/app/structs/ServerProjectileSpawner_ProjectileSpawnerData__Boxed.h>

namespace app::classes::types {
    namespace ServerProjectileSpawner_ProjectileSpawnerData {
        inline app::ServerProjectileSpawner_ProjectileSpawnerData__Class** type_info = (app::ServerProjectileSpawner_ProjectileSpawnerData__Class**)(modloader::win::memory::resolve_rva(0x0474C130));
        inline app::ServerProjectileSpawner_ProjectileSpawnerData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerProjectileSpawner_ProjectileSpawnerData__Class>(type_info, "", "ServerProjectileSpawner", "ProjectileSpawnerData");
        }
        inline app::ServerProjectileSpawner_ProjectileSpawnerData* create() {
            return il2cpp::create_object<app::ServerProjectileSpawner_ProjectileSpawnerData>(get_class());
        }
        inline app::ServerProjectileSpawner_ProjectileSpawnerData__Boxed* box(app::ServerProjectileSpawner_ProjectileSpawnerData value) {
            return il2cpp::box_value<app::ServerProjectileSpawner_ProjectileSpawnerData__Boxed>(get_class(), value);
        }
    } // namespace ServerProjectileSpawner_ProjectileSpawnerData
} // namespace app::classes::types
