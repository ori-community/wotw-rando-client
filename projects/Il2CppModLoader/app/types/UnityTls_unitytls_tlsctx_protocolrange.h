#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_tlsctx_protocolrange {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnityTls_unitytls_tlsctx_protocolrange__Class** type_info;
        inline app::UnityTls_unitytls_tlsctx_protocolrange__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_tlsctx_protocolrange__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_tlsctx_protocolrange");
        }
        inline app::UnityTls_unitytls_tlsctx_protocolrange* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_tlsctx_protocolrange>(get_class());
        }
        inline app::UnityTls_unitytls_tlsctx_protocolrange__Boxed* box(app::UnityTls_unitytls_tlsctx_protocolrange value) {
            return il2cpp::box_value<app::UnityTls_unitytls_tlsctx_protocolrange__Boxed>(get_class(), value);
        }
    } // namespace UnityTls_unitytls_tlsctx_protocolrange
} // namespace app::classes::types
