#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS12 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PKCS12__Class** type_info;
        inline app::PKCS12__Class* get_class() {
            return il2cpp::get_class<app::PKCS12__Class>(type_info, "Mono.Security.X509", "PKCS12");
        }
        inline app::PKCS12* create() {
            return il2cpp::create_object<app::PKCS12>(get_class());
        }
    } // namespace PKCS12
} // namespace app::classes::types
