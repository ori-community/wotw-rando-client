#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS12_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PKCS12_1__Class** type_info;
        inline app::PKCS12_1__Class* get_class() {
            return il2cpp::get_class<app::PKCS12_1__Class>(type_info, "Mono.Security.X509", "PKCS12");
        }
        inline app::PKCS12_1* create() {
            return il2cpp::create_object<app::PKCS12_1>(get_class());
        }
    } // namespace PKCS12_1
} // namespace app::classes::types
