#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HMACRIPEMD160 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HMACRIPEMD160__Class** type_info;
        inline app::HMACRIPEMD160__Class* get_class() {
            return il2cpp::get_class<app::HMACRIPEMD160__Class>(type_info, "System.Security.Cryptography", "HMACRIPEMD160");
        }
        inline app::HMACRIPEMD160* create() {
            return il2cpp::create_object<app::HMACRIPEMD160>(get_class());
        }
    } // namespace HMACRIPEMD160
} // namespace app::classes::types
