#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HMAC_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HMAC_1__Class** type_info;
        inline app::HMAC_1__Class* get_class() {
            return il2cpp::get_class<app::HMAC_1__Class>(type_info, "Mono.Security.Cryptography", "HMAC");
        }
        inline app::HMAC_1* create() {
            return il2cpp::create_object<app::HMAC_1>(get_class());
        }
    } // namespace HMAC_1
} // namespace app::classes::types
