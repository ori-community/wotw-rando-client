#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Certificate2ImplMono {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Certificate2ImplMono__Class** type_info;
        inline app::X509Certificate2ImplMono__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate2ImplMono__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Certificate2ImplMono");
        }
        inline app::X509Certificate2ImplMono* create() {
            return il2cpp::create_object<app::X509Certificate2ImplMono>(get_class());
        }
    } // namespace X509Certificate2ImplMono
} // namespace app::classes::types
