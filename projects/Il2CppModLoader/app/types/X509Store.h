#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Store {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Store__Class** type_info;
        inline app::X509Store__Class* get_class() {
            return il2cpp::get_class<app::X509Store__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Store");
        }
        inline app::X509Store* create() {
            return il2cpp::create_object<app::X509Store>(get_class());
        }
    } // namespace X509Store
} // namespace app::classes::types
