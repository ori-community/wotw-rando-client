#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Certificate_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Certificate_1__Class** type_info;
        inline app::X509Certificate_1__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate_1__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Certificate");
        }
        inline app::X509Certificate_1* create() {
            return il2cpp::create_object<app::X509Certificate_1>(get_class());
        }
        inline app::X509Certificate_1__Array* create_array(int size) {
            return il2cpp::array_new<app::X509Certificate_1__Array>(get_class(), size);
        }
    } // namespace X509Certificate_1
} // namespace app::classes::types
