#pragma once
#include <Modloader/app/structs/ServerProjectile_ServerProjectileData.h>
#include <Modloader/app/structs/ServerProjectile_ServerProjectileData__Boxed.h>
#include <Modloader/app/structs/ServerProjectile_ServerProjectileData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerProjectile_ServerProjectileData {
        inline app::ServerProjectile_ServerProjectileData__Class** type_info() {
            static app::ServerProjectile_ServerProjectileData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerProjectile_ServerProjectileData__Class**)(modloader::win::memory::resolve_rva(0x04710660));
            }
            return cache;
        }
        inline app::ServerProjectile_ServerProjectileData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerProjectile_ServerProjectileData__Class>(type_info(), "", "ServerProjectile", "ServerProjectileData");
        }
        inline app::ServerProjectile_ServerProjectileData* create() {
            return il2cpp::create_object<app::ServerProjectile_ServerProjectileData>(get_class());
        }
        inline app::ServerProjectile_ServerProjectileData__Boxed* box(app::ServerProjectile_ServerProjectileData value) {
            return il2cpp::box_value<app::ServerProjectile_ServerProjectileData__Boxed>(get_class(), value);
        }
    } // namespace ServerProjectile_ServerProjectileData
} // namespace app::classes::types
