#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SHA256Managed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SHA256Managed__Class** type_info;
        inline app::SHA256Managed__Class* get_class() {
            return il2cpp::get_class<app::SHA256Managed__Class>(type_info, "System.Security.Cryptography", "SHA256Managed");
        }
        inline app::SHA256Managed* create() {
            return il2cpp::create_object<app::SHA256Managed>(get_class());
        }
    } // namespace SHA256Managed
} // namespace app::classes::types
