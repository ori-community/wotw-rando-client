#pragma once
#include <Modloader/app/structs/Projectile_CollisionVFXOrientationType__Enum.h>
#include <Modloader/app/structs/Projectile_CollisionVFXOrientationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Projectile_CollisionVFXOrientationType__Enum {
        inline app::Projectile_CollisionVFXOrientationType__Enum__Class** type_info() {
            static app::Projectile_CollisionVFXOrientationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Projectile_CollisionVFXOrientationType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Projectile_CollisionVFXOrientationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Projectile_CollisionVFXOrientationType__Enum__Class>(type_info(), "", "Projectile", "CollisionVFXOrientationType");
        }
        inline app::Projectile_CollisionVFXOrientationType__Enum* create() {
            return il2cpp::create_object<app::Projectile_CollisionVFXOrientationType__Enum>(get_class());
        }
    } // namespace Projectile_CollisionVFXOrientationType__Enum
} // namespace app::classes::types
