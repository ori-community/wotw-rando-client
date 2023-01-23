#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509_ref__Class.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509_ref.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509_ref__Boxed.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_x509_ref {
        inline app::UnityTls_unitytls_x509_ref__Class** type_info = (app::UnityTls_unitytls_x509_ref__Class**)(modloader::win::memory::resolve_rva(0x04708F68));
        inline app::UnityTls_unitytls_x509_ref__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_x509_ref__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_x509_ref");
        }
        inline app::UnityTls_unitytls_x509_ref* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_x509_ref>(get_class());
        }
        inline app::UnityTls_unitytls_x509_ref__Boxed* box(app::UnityTls_unitytls_x509_ref value) {
            return il2cpp::box_value<app::UnityTls_unitytls_x509_ref__Boxed>(get_class(), value);
        }
    } // namespace UnityTls_unitytls_x509_ref
} // namespace app::classes::types
