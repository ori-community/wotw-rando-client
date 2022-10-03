#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SHA256 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SHA256__Class** type_info;
        inline app::SHA256__Class* get_class() {
            return il2cpp::get_class<app::SHA256__Class>(type_info, "System.Security.Cryptography", "SHA256");
        }
        inline app::SHA256* create() {
            return il2cpp::create_object<app::SHA256>(get_class());
        }
    } // namespace SHA256
} // namespace app::classes::types
