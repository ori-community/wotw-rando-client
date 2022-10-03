#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Projectile {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Projectile__Class** type_info;
        inline app::Projectile__Class* get_class() {
            return il2cpp::get_class<app::Projectile__Class>(type_info, "", "Projectile");
        }
        inline app::Projectile* create() {
            return il2cpp::create_object<app::Projectile>(get_class());
        }
        inline app::Projectile__Array* create_array(int size) {
            return il2cpp::array_new<app::Projectile__Array>(get_class(), size);
        }
    } // namespace Projectile
} // namespace app::classes::types
