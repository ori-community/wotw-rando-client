#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DES {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DES__Class** type_info;
        inline app::DES__Class* get_class() {
            return il2cpp::get_class<app::DES__Class>(type_info, "System.Security.Cryptography", "DES");
        }
        inline app::DES* create() {
            return il2cpp::create_object<app::DES>(get_class());
        }
    } // namespace DES
} // namespace app::classes::types
