#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_x509name {
        namespace {
            app::UnityTls_unitytls_x509name__Class* type_info_ref = nullptr;
        }
        app::UnityTls_unitytls_x509name__Class** type_info = &type_info_ref;
        inline app::UnityTls_unitytls_x509name__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_x509name__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_x509name");
        }
        inline app::UnityTls_unitytls_x509name* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_x509name>(get_class());
        }
        inline app::UnityTls_unitytls_x509name__Boxed* box(app::UnityTls_unitytls_x509name value) {
            return il2cpp::box_value<app::UnityTls_unitytls_x509name__Boxed>(get_class(), value);
        }
    } // namespace UnityTls_unitytls_x509name
} // namespace app::classes::types
