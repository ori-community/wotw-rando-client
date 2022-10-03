#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Projectile_ExplodeCollisionInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Projectile_ExplodeCollisionInfo__Class** type_info;
        inline app::Projectile_ExplodeCollisionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Projectile_ExplodeCollisionInfo__Class>(type_info, "", "Projectile", "ExplodeCollisionInfo");
        }
        inline app::Projectile_ExplodeCollisionInfo* create() {
            return il2cpp::create_object<app::Projectile_ExplodeCollisionInfo>(get_class());
        }
    } // namespace Projectile_ExplodeCollisionInfo
} // namespace app::classes::types
