#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_x509verify_callback.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509verify_callback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_x509verify_callback {
        inline app::UnityTls_unitytls_x509verify_callback__Class** type_info() {
            static app::UnityTls_unitytls_x509verify_callback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTls_unitytls_x509verify_callback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTls_unitytls_x509verify_callback__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_x509verify_callback__Class>(type_info(), "Mono.Unity", "UnityTls", "unitytls_x509verify_callback");
        }
        inline app::UnityTls_unitytls_x509verify_callback* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_x509verify_callback>(get_class());
        }
    } // namespace UnityTls_unitytls_x509verify_callback
} // namespace app::classes::types
