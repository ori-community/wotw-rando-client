#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DSA {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DSA__Class** type_info;
        inline app::DSA__Class* get_class() {
            return il2cpp::get_class<app::DSA__Class>(type_info, "System.Security.Cryptography", "DSA");
        }
        inline app::DSA* create() {
            return il2cpp::create_object<app::DSA>(get_class());
        }
    } // namespace DSA
} // namespace app::classes::types
