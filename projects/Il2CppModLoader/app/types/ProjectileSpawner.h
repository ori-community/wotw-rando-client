#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProjectileSpawner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProjectileSpawner__Class** type_info;
        inline app::ProjectileSpawner__Class* get_class() {
            return il2cpp::get_class<app::ProjectileSpawner__Class>(type_info, "", "ProjectileSpawner");
        }
        inline app::ProjectileSpawner* create() {
            return il2cpp::create_object<app::ProjectileSpawner>(get_class());
        }
    } // namespace ProjectileSpawner
} // namespace app::classes::types
