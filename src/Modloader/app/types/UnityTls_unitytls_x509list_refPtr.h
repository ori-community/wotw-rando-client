#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_x509list_refPtr.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509list_refPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_x509list_refPtr {
        inline app::UnityTls_unitytls_x509list_refPtr__Class** type_info() {
            static app::UnityTls_unitytls_x509list_refPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTls_unitytls_x509list_refPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTls_unitytls_x509list_refPtr__Class* get_class() {
            return il2cpp::get_class<app::UnityTls_unitytls_x509list_refPtr__Class>(type_info(), "Mono.Unity", "UnityTls+unitytls_x509list_ref*");
        }
        inline app::UnityTls_unitytls_x509list_refPtr* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_x509list_refPtr>(get_class());
        }
    } // namespace UnityTls_unitytls_x509list_refPtr
} // namespace app::classes::types
