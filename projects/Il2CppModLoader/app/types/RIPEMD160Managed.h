#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RIPEMD160Managed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RIPEMD160Managed__Class** type_info;
        inline app::RIPEMD160Managed__Class* get_class() {
            return il2cpp::get_class<app::RIPEMD160Managed__Class>(type_info, "System.Security.Cryptography", "RIPEMD160Managed");
        }
        inline app::RIPEMD160Managed* create() {
            return il2cpp::create_object<app::RIPEMD160Managed>(get_class());
        }
    } // namespace RIPEMD160Managed
} // namespace app::classes::types
