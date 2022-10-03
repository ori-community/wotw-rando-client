#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HMAC {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HMAC__Class** type_info;
        inline app::HMAC__Class* get_class() {
            return il2cpp::get_class<app::HMAC__Class>(type_info, "System.Security.Cryptography", "HMAC");
        }
        inline app::HMAC* create() {
            return il2cpp::create_object<app::HMAC>(get_class());
        }
    } // namespace HMAC
} // namespace app::classes::types
