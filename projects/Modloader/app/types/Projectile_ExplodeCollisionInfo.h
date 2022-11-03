#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Projectile_ExplodeCollisionInfo {
        inline app::Projectile_ExplodeCollisionInfo__Class** type_info = (app::Projectile_ExplodeCollisionInfo__Class**)(modloader::win::memory::resolve_rva(0x0476C380));
        inline app::Projectile_ExplodeCollisionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Projectile_ExplodeCollisionInfo__Class>(type_info, "", "Projectile", "ExplodeCollisionInfo");
        }
        inline app::Projectile_ExplodeCollisionInfo* create() {
            return il2cpp::create_object<app::Projectile_ExplodeCollisionInfo>(get_class());
        }
    } // namespace Projectile_ExplodeCollisionInfo
} // namespace app::classes::types
