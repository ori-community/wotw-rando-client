#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MD4Managed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MD4Managed__Class** type_info;
        inline app::MD4Managed__Class* get_class() {
            return il2cpp::get_class<app::MD4Managed__Class>(type_info, "Mono.Security.Cryptography", "MD4Managed");
        }
        inline app::MD4Managed* create() {
            return il2cpp::create_object<app::MD4Managed>(get_class());
        }
    } // namespace MD4Managed
} // namespace app::classes::types
