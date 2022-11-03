#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsClientHello {
        inline app::TlsClientHello__Class** type_info = (app::TlsClientHello__Class**)(modloader::win::memory::resolve_rva(0x0470C4B0));
        inline app::TlsClientHello__Class* get_class() {
            return il2cpp::get_class<app::TlsClientHello__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsClientHello");
        }
        inline app::TlsClientHello* create() {
            return il2cpp::create_object<app::TlsClientHello>(get_class());
        }
    } // namespace TlsClientHello
} // namespace app::classes::types
