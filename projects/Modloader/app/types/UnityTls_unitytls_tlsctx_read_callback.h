#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_read_callback__Class.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx_read_callback.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_tlsctx_read_callback {
        inline app::UnityTls_unitytls_tlsctx_read_callback__Class** type_info = (app::UnityTls_unitytls_tlsctx_read_callback__Class**)(modloader::win::memory::resolve_rva(0x04725D70));
        inline app::UnityTls_unitytls_tlsctx_read_callback__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_tlsctx_read_callback__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_tlsctx_read_callback");
        }
        inline app::UnityTls_unitytls_tlsctx_read_callback* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_tlsctx_read_callback>(get_class());
        }
    } // namespace UnityTls_unitytls_tlsctx_read_callback
} // namespace app::classes::types
