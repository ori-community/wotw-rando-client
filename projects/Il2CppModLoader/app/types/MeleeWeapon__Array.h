#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeleeWeapon__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeleeWeapon__Array__Class** type_info;
        inline app::MeleeWeapon__Array__Class* get_class() {
            return il2cpp::get_class<app::MeleeWeapon__Array__Class>(type_info, "", "MeleeWeapon[]");
        }
        inline app::MeleeWeapon__Array* create() {
            return il2cpp::create_object<app::MeleeWeapon__Array>(get_class());
        }
    } // namespace MeleeWeapon__Array
} // namespace app::classes::types
