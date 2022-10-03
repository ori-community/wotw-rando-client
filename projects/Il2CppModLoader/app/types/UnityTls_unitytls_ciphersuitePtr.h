#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_ciphersuitePtr {
        namespace {
            app::UnityTls_unitytls_ciphersuitePtr__Class* type_info_ref = nullptr;
        }
        app::UnityTls_unitytls_ciphersuitePtr__Class** type_info = &type_info_ref;
        inline app::UnityTls_unitytls_ciphersuitePtr__Class* get_class() {
            return il2cpp::get_class<app::UnityTls_unitytls_ciphersuitePtr__Class>(type_info, "Mono.Unity", "UnityTls+unitytls_ciphersuite*");
        }
        inline app::UnityTls_unitytls_ciphersuitePtr* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_ciphersuitePtr>(get_class());
        }
    } // namespace UnityTls_unitytls_ciphersuitePtr
} // namespace app::classes::types
