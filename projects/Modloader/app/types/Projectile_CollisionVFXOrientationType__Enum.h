#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Projectile_CollisionVFXOrientationType__Enum__Class.h>
#include <Modloader/app/structs/Projectile_CollisionVFXOrientationType__Enum.h>

namespace app::classes::types {
    namespace Projectile_CollisionVFXOrientationType__Enum {
        namespace {
            inline app::Projectile_CollisionVFXOrientationType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Projectile_CollisionVFXOrientationType__Enum__Class** type_info = &type_info_ref;
        inline app::Projectile_CollisionVFXOrientationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Projectile_CollisionVFXOrientationType__Enum__Class>(type_info, "", "Projectile", "CollisionVFXOrientationType");
        }
        inline app::Projectile_CollisionVFXOrientationType__Enum* create() {
            return il2cpp::create_object<app::Projectile_CollisionVFXOrientationType__Enum>(get_class());
        }
    } // namespace Projectile_CollisionVFXOrientationType__Enum
} // namespace app::classes::types
