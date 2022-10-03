#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RC2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RC2__Class** type_info;
        inline app::RC2__Class* get_class() {
            return il2cpp::get_class<app::RC2__Class>(type_info, "System.Security.Cryptography", "RC2");
        }
        inline app::RC2* create() {
            return il2cpp::create_object<app::RC2>(get_class());
        }
    } // namespace RC2
} // namespace app::classes::types
