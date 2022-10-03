#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HMACMD5 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HMACMD5__Class** type_info;
        inline app::HMACMD5__Class* get_class() {
            return il2cpp::get_class<app::HMACMD5__Class>(type_info, "System.Security.Cryptography", "HMACMD5");
        }
        inline app::HMACMD5* create() {
            return il2cpp::create_object<app::HMACMD5>(get_class());
        }
    } // namespace HMACMD5
} // namespace app::classes::types
