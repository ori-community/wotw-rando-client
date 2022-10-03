#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RIPEMD160 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RIPEMD160__Class** type_info;
        inline app::RIPEMD160__Class* get_class() {
            return il2cpp::get_class<app::RIPEMD160__Class>(type_info, "System.Security.Cryptography", "RIPEMD160");
        }
        inline app::RIPEMD160* create() {
            return il2cpp::create_object<app::RIPEMD160>(get_class());
        }
    } // namespace RIPEMD160
} // namespace app::classes::types
