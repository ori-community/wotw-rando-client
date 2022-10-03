#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SHA512Managed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SHA512Managed__Class** type_info;
        inline app::SHA512Managed__Class* get_class() {
            return il2cpp::get_class<app::SHA512Managed__Class>(type_info, "System.Security.Cryptography", "SHA512Managed");
        }
        inline app::SHA512Managed* create() {
            return il2cpp::create_object<app::SHA512Managed>(get_class());
        }
    } // namespace SHA512Managed
} // namespace app::classes::types
