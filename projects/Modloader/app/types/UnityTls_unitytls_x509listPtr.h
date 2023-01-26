#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_x509listPtr.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509listPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_x509listPtr {
        inline app::UnityTls_unitytls_x509listPtr__Class** type_info() {
            static app::UnityTls_unitytls_x509listPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTls_unitytls_x509listPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTls_unitytls_x509listPtr__Class* get_class() {
            return il2cpp::get_class<app::UnityTls_unitytls_x509listPtr__Class>(type_info(), "Mono.Unity", "UnityTls+unitytls_x509list*");
        }
        inline app::UnityTls_unitytls_x509listPtr* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_x509listPtr>(get_class());
        }
    } // namespace UnityTls_unitytls_x509listPtr
} // namespace app::classes::types
