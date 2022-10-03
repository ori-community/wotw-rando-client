#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Projectile_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Projectile_c__Class** type_info;
        inline app::Projectile_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Projectile_c__Class>(type_info, "", "Projectile", "<>c");
        }
        inline app::Projectile_c* create() {
            return il2cpp::create_object<app::Projectile_c>(get_class());
        }
    } // namespace Projectile_c
} // namespace app::classes::types
