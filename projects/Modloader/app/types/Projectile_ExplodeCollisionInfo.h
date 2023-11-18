#pragma once
#include <Modloader/app/structs/Projectile_ExplodeCollisionInfo.h>
#include <Modloader/app/structs/Projectile_ExplodeCollisionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Projectile_ExplodeCollisionInfo {
        inline app::Projectile_ExplodeCollisionInfo__Class** type_info() {
            static app::Projectile_ExplodeCollisionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Projectile_ExplodeCollisionInfo__Class**)(modloader::win::memory::resolve_rva(0x0476C380));
            }
            return cache;
        }
        inline app::Projectile_ExplodeCollisionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Projectile_ExplodeCollisionInfo__Class>(type_info(), "", "Projectile", "ExplodeCollisionInfo");
        }
        inline app::Projectile_ExplodeCollisionInfo* create() {
            return il2cpp::create_object<app::Projectile_ExplodeCollisionInfo>(get_class());
        }
    } // namespace Projectile_ExplodeCollisionInfo
} // namespace app::classes::types
