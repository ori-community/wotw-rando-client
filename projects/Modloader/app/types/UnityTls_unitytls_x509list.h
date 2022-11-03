#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_x509list {
        namespace {
            inline app::UnityTls_unitytls_x509list__Class* type_info_ref = nullptr;
        }
        inline app::UnityTls_unitytls_x509list__Class** type_info = &type_info_ref;
        inline app::UnityTls_unitytls_x509list__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_x509list__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_x509list");
        }
        inline app::UnityTls_unitytls_x509list* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_x509list>(get_class());
        }
        inline app::UnityTls_unitytls_x509list__Boxed* box(app::UnityTls_unitytls_x509list value) {
            return il2cpp::box_value<app::UnityTls_unitytls_x509list__Boxed>(get_class(), value);
        }
    } // namespace UnityTls_unitytls_x509list
} // namespace app::classes::types
