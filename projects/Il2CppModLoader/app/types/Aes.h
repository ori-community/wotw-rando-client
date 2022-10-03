#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Aes {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Aes__Class** type_info;
        inline app::Aes__Class* get_class() {
            return il2cpp::get_class<app::Aes__Class>(type_info, "System.Security.Cryptography", "Aes");
        }
        inline app::Aes* create() {
            return il2cpp::create_object<app::Aes>(get_class());
        }
    } // namespace Aes
} // namespace app::classes::types
