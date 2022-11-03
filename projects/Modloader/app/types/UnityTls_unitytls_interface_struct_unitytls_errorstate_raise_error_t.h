#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t {
        inline app::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Class** type_info = (app::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Class**)(modloader::win::memory::resolve_rva(0x04753110));
        inline app::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t__Class>(type_info, "Mono.Unity", "UnityTls+unitytls_interface_struct", "unitytls_errorstate_raise_error_t");
        }
        inline app::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t>(get_class());
        }
    } // namespace UnityTls_unitytls_interface_struct_unitytls_errorstate_raise_error_t
} // namespace app::classes::types
