#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerProjectile_ServerProjectileData {
        inline app::ServerProjectile_ServerProjectileData__Class** type_info = (app::ServerProjectile_ServerProjectileData__Class**)(modloader::win::memory::resolve_rva(0x04710660));
        inline app::ServerProjectile_ServerProjectileData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerProjectile_ServerProjectileData__Class>(type_info, "", "ServerProjectile", "ServerProjectileData");
        }
        inline app::ServerProjectile_ServerProjectileData* create() {
            return il2cpp::create_object<app::ServerProjectile_ServerProjectileData>(get_class());
        }
        inline app::ServerProjectile_ServerProjectileData__Boxed* box(app::ServerProjectile_ServerProjectileData value) {
            return il2cpp::box_value<app::ServerProjectile_ServerProjectileData__Boxed>(get_class(), value);
        }
    } // namespace ServerProjectile_ServerProjectileData
} // namespace app::classes::types
