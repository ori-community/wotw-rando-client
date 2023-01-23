#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_protocolrange__Class.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_protocolrange.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_protocolrange__Boxed.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_tlsctx_protocolrange {
        inline app::UnityTls_unitytls_tlsctx_protocolrange__Class** type_info = (app::UnityTls_unitytls_tlsctx_protocolrange__Class**)(modloader::win::memory::resolve_rva(0x04733730));
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
