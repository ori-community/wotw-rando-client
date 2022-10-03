#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HMACSHA512 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HMACSHA512__Class** type_info;
        inline app::HMACSHA512__Class* get_class() {
            return il2cpp::get_class<app::HMACSHA512__Class>(type_info, "System.Security.Cryptography", "HMACSHA512");
        }
        inline app::HMACSHA512* create() {
            return il2cpp::create_object<app::HMACSHA512>(get_class());
        }
    } // namespace HMACSHA512
} // namespace app::classes::types
