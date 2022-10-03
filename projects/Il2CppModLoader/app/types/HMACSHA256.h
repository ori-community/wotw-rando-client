#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HMACSHA256 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HMACSHA256__Class** type_info;
        inline app::HMACSHA256__Class* get_class() {
            return il2cpp::get_class<app::HMACSHA256__Class>(type_info, "System.Security.Cryptography", "HMACSHA256");
        }
        inline app::HMACSHA256* create() {
            return il2cpp::create_object<app::HMACSHA256>(get_class());
        }
    } // namespace HMACSHA256
} // namespace app::classes::types
