#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TripleDES {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TripleDES__Class** type_info;
        inline app::TripleDES__Class* get_class() {
            return il2cpp::get_class<app::TripleDES__Class>(type_info, "System.Security.Cryptography", "TripleDES");
        }
        inline app::TripleDES* create() {
            return il2cpp::create_object<app::TripleDES>(get_class());
        }
    } // namespace TripleDES
} // namespace app::classes::types
