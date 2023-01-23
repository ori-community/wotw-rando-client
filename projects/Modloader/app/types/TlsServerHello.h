#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TlsServerHello__Class.h>
#include <Modloader/app/structs/TlsServerHello.h>

namespace app::classes::types {
    namespace TlsServerHello {
        inline app::TlsServerHello__Class** type_info = (app::TlsServerHello__Class**)(modloader::win::memory::resolve_rva(0x0474E030));
        inline app::TlsServerHello__Class* get_class() {
            return il2cpp::get_class<app::TlsServerHello__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerHello");
        }
        inline app::TlsServerHello* create() {
            return il2cpp::create_object<app::TlsServerHello>(get_class());
        }
    } // namespace TlsServerHello
} // namespace app::classes::types
