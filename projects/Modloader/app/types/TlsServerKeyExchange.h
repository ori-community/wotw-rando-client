#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TlsServerKeyExchange__Class.h>
#include <Modloader/app/structs/TlsServerKeyExchange.h>

namespace app::classes::types {
    namespace TlsServerKeyExchange {
        inline app::TlsServerKeyExchange__Class** type_info = (app::TlsServerKeyExchange__Class**)(modloader::win::memory::resolve_rva(0x04737D40));
        inline app::TlsServerKeyExchange__Class* get_class() {
            return il2cpp::get_class<app::TlsServerKeyExchange__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerKeyExchange");
        }
        inline app::TlsServerKeyExchange* create() {
            return il2cpp::create_object<app::TlsServerKeyExchange>(get_class());
        }
    } // namespace TlsServerKeyExchange
} // namespace app::classes::types
