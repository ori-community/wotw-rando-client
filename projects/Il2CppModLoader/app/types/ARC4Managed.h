#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ARC4Managed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ARC4Managed__Class** type_info;
        inline app::ARC4Managed__Class* get_class() {
            return il2cpp::get_class<app::ARC4Managed__Class>(type_info, "Mono.Security.Cryptography", "ARC4Managed");
        }
        inline app::ARC4Managed* create() {
            return il2cpp::create_object<app::ARC4Managed>(get_class());
        }
    } // namespace ARC4Managed
} // namespace app::classes::types
