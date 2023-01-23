#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TlsClientKeyExchange_1__Class.h>
#include <Modloader/app/structs/TlsClientKeyExchange_1.h>

namespace app::classes::types {
    namespace TlsClientKeyExchange_1 {
        inline app::TlsClientKeyExchange_1__Class** type_info = (app::TlsClientKeyExchange_1__Class**)(modloader::win::memory::resolve_rva(0x0470B7A0));
        inline app::TlsClientKeyExchange_1__Class* get_class() {
            return il2cpp::get_class<app::TlsClientKeyExchange_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientKeyExchange");
        }
        inline app::TlsClientKeyExchange_1* create() {
            return il2cpp::create_object<app::TlsClientKeyExchange_1>(get_class());
        }
    } // namespace TlsClientKeyExchange_1
} // namespace app::classes::types
