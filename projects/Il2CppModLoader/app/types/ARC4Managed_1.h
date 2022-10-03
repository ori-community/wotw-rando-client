#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ARC4Managed_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ARC4Managed_1__Class** type_info;
        inline app::ARC4Managed_1__Class* get_class() {
            return il2cpp::get_class<app::ARC4Managed_1__Class>(type_info, "Mono.Security.Cryptography", "ARC4Managed");
        }
        inline app::ARC4Managed_1* create() {
            return il2cpp::create_object<app::ARC4Managed_1>(get_class());
        }
    } // namespace ARC4Managed_1
} // namespace app::classes::types
