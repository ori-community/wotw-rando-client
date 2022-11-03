#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t {
        inline app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Class** type_info = (app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Class**)(modloader::win::memory::resolve_rva(0x0473D7A0));
        inline app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t__Class>(type_info, "Mono.Unity", "UnityTls+unitytls_interface_struct", "unitytls_x509list_get_x509_t");
        }
        inline app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t>(get_class());
        }
    } // namespace UnityTls_unitytls_interface_struct_unitytls_x509list_get_x509_t
} // namespace app::classes::types
