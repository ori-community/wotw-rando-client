#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RC2Transform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RC2Transform__Class** type_info;
        inline app::RC2Transform__Class* get_class() {
            return il2cpp::get_class<app::RC2Transform__Class>(type_info, "System.Security.Cryptography", "RC2Transform");
        }
        inline app::RC2Transform* create() {
            return il2cpp::create_object<app::RC2Transform>(get_class());
        }
    } // namespace RC2Transform
} // namespace app::classes::types
