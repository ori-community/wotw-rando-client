#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t {
        inline app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Class** type_info = (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Class**)(modloader::win::memory::resolve_rva(0x047134D0));
        inline app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t__Class>(type_info, "Mono.Unity", "UnityTls+unitytls_interface_struct", "unitytls_tlsctx_set_supported_ciphersuites_t");
        }
        inline app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t>(get_class());
        }
    } // namespace UnityTls_unitytls_interface_struct_unitytls_tlsctx_set_supported_ciphersuites_t
} // namespace app::classes::types
