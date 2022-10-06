#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Certificate_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Certificate_2__Class** type_info;
        inline app::X509Certificate_2__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate_2__Class>(type_info, "Mono.Security.X509", "X509Certificate");
        }
        inline app::X509Certificate_2* create() {
            return il2cpp::create_object<app::X509Certificate_2>(get_class());
        }
        inline app::X509Certificate_2__Array* create_array(int size) {
            return il2cpp::array_new<app::X509Certificate_2__Array>(get_class(), size);
        }
        inline app::X509Certificate_2__Array* create_array(const std::vector<app::X509Certificate_2*>& items) {
            return il2cpp::array_new<app::X509Certificate_2__Array>(get_class(), items);
        }
    } // namespace X509Certificate_2
} // namespace app::classes::types
