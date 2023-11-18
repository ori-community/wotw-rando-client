#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t.h>
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t {
        inline app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Class** type_info() {
            static app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Class**)(modloader::win::memory::resolve_rva(0x04740E18));
            }
            return cache;
        }
        inline app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t__Class>(type_info(), "Mono.Unity", "UnityTls+unitytls_interface_struct", "unitytls_tlsctx_free_t");
        }
        inline app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t>(get_class());
        }
    } // namespace UnityTls_unitytls_interface_struct_unitytls_tlsctx_free_t
} // namespace app::classes::types
